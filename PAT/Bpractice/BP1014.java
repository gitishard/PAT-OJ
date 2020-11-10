import java.util.Scanner;

public class BP1014 {
    /*
    题目描述
    一个正整数可以分解成一个或多个数组的积。例如36=2*2*3*3，即包含2和3两个因子。
    现在给出一系列正整数，他希望你开发一个程序输出每个正整数的因子个数。

    输入描述:
    输入包括多组数据。
    每组数据仅有一个整数n (2≤n≤100000)。

    输出描述:
    对应每个整数，输出其因子个数，每个结果占一行。
    */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while(sc.hasNext()){
            int n = sc.nextInt();
            int count = 0;

            for(int i = 2; i < n; i++){
                boolean hasBeen = false;
                while(n % i == 0){
                    if(!hasBeen){
                        hasBeen = true;
                        count++;
                    }
                    n /= i;
                }
            }
            if(n != 1)
                count++;
            System.out.println(count);
        }
        sc.close();
    }    
}
