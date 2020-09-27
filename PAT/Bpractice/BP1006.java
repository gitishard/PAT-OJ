import java.util.Scanner;

public class BP1006 {
    public static void main(String[] args) {
        int[][][] rst = new int[10000][2][2];
        rst[0] = new int[][] {{1,1},{1,0}};
        for(int i = 1; i < 10000; i++){
            rst[i][0][0] = rst[i-1][0][0] + rst[i-1][0][1];//左上角 = 上式中第一行相加
            rst[i][1][0] = rst[i-1][1][0] + rst[i-1][1][1];//左下角 = 上式中第二行相加
            rst[i][0][1] = rst[i-1][0][0];//右上角 = 上式中左上角的值
            rst[i][1][1] = rst[i-1][1][1];//右下角 = 上式中左下角的值

            rst[i][0][0] %= 10000;
        }

        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            int n = sc.nextInt();
            for(int i = 0; i < n; i++){
                int tmp = sc.nextInt()-1;
                System.out.printf("%04d", rst[tmp][0][0]);
            }
            System.out.printf("\n");
        }
        sc.close();
    }
}
