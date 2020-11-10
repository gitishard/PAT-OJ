import java.util.Scanner;

public class BP1011 {
    /*
    描述：
    对于表达式n^2+n+41，当n在（x,y）范围内取整数值时（包括x,y）(-39<=x<50),判定该表达式的值是否为素数
    输入：
    输入数据有多组，每组占一行，由两个整数x，y组成，当x=0,y=0时，表示输入结束，该行不做处理。
    输入：
    对于每个给定范围内的取值，如果表达式的值都为素数，则输出"OK",否则请输出“Sorry”,每组输出占一行。
    */
   public static void main(String[] args) {
       final String yes = "OK";
       final String no = "Sorry";
       Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            int x = sc.nextInt();
            int y = sc.nextInt();
            if(x == 0 && y == 0)
                break;

            double i = x;
            for(; i <= y; i++){
                if(!isPrime(fun(i))){
                    System.out.println(no);
                    break;
                }
            }
            if(i > y)
                System.out.println(yes);
        }
       sc.close();
   }
   static boolean isPrime(double n){
       if(n < 2)
           return false;
       else if( n == 2)
           return true; 

       double boundary = Math.sqrt(n);
       for(int i = 3; i <= boundary; i++){
           if(n % i == 0)
               return false;
       }
       return true;
   }
   static double fun(double n){
       return Math.pow(n, 2) + n + 41;
   }
}
