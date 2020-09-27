package Bpractice;

import java.util.Scanner;

public class BP1008 {
   public static void main(String[] args) {
       //一次只能走上一阶或者一下子蹦上两阶
       Scanner sc = new Scanner(System.in);
       while(sc.hasNext()){
            int n = sc.nextInt();
            if(n <= 3){
                System.out.println(n);
                continue;
            }
            long former = 2;
            long latter = 3;
            long total = 0;
            for(int i = 4; i <= n; i++){
                total = former +latter;
                former = latter;
                latter = total;
            }
            System.out.println(total);
       }
       sc.close();
   }
}