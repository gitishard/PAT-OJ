import java.util.Scanner;

class BP1010{
    /*
    描述：
    在2×n的一个长方形方格中,用一个1× 2的骨牌铺满方格,输入n ,输出铺放方案的总数.

    输入：
    输入数据由多行组成，每行包含一个整数n，表示该测试实例的长方形方格的规格是2×n (1≤n≤90)。

    输出：
    对于每个测试实例，请输出铺放方案的总数，每个实例的输出占一行。

    递归依旧
    n=1 1
    n=2 2
    n=3 3
    n=4 5
    ...
    */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            int n = sc.nextInt();
            long first = 1, sec = 2, num = 0;
            if(n <= 2)
                num = n;
            else {
                for(int i = 2; i < n; i++){
                    num = first + sec;
                    first = sec;
                    sec = num;
                }
            }
            System.out.println(num);
        }
        sc.close();
    }
}