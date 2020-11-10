import java.util.Scanner;

public class BP1016 {
    /*
    输入描述:
    输入有多组数据，每组数据包含一个正整数n (1≤n≤2147483647)和一个正整数r (2≤r≤16)。
    其中n为十进制整数，r为目标进制。

    输出描述:
    对应每组输入，输出整数n转换成r进制之后，其中包含多少个“1”。
    */
   public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       while(sc.hasNext()){
           int n = sc.nextInt();
           int r = sc.nextInt();
           
           int count = countOne(n, r);
           System.out.println(count);
       }
       sc.close();
   }
   
   static int countOne(int n, int r){
       int count = 0;
       while((n / r) != 0){
           if(n % r == 1)
               count++;
           n /= r;
       }
       if(n == 1)
           count++;
       return count;
   }
}
