import java.util.Scanner;

public class BP1013 {
   public static void main(String[] args) {
       /*
        题目描述
        所谓因子分解，就是把给定的正整数a，分解成若干个素数的乘积，即 a = a1 × a2 × a3 × ... × an,
        并且 1 < a1 ≤ a2 ≤ a3 ≤ ... ≤ an。其中a1、a2、...、an均为素数。
        先给出一个整数a，请输出分解后的因子

        输入描述:
        输入包含多组数据，每组数据包含一个正整数a（2≤a≤1000000）

        输出描述:
        对应每组数据，以“a = a1 * a2 * a3...”的形式输出因式分解后的结果
       */
       Scanner sc = new Scanner(System.in);
       while(sc.hasNext()){
           StringBuilder sb = new StringBuilder();
           int n = sc.nextInt();
           sb.append(n).append(" = ");

           boolean flag = false;
           int len = (int)Math.sqrt(n);
           for(int i = 2; i <= len; i++){
               //if(n % i == 0 && isPrime(i)){
               while(n % i == 0){   //乘积先按小的数来，直到不能整除时换下一个
                    if(flag == false){
                        flag = true;
                        sb.append(i);
                    } else {
                        sb.append(" * ").append(i);
                    }
                    n /= i;
               }
           }
           
           if(flag == false)
               sb.append(n);
           else {
               if(n != 1)
                   sb.append(" * ").append(n);
            }
           System.out.println(sb.toString());
       }
       sc.close();
   }
   /*
   static boolean isPrime(int num){
       for(int i = 3; i <= Math.sqrt(num); i++){
           if(num % i == 0)
                return false;
       }
       return true;
   }
   */
}