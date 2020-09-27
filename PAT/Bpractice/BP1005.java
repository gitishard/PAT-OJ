import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int[] rst = new int[100001];
        final int max = 1000000;
        rst[0] = 1; rst[1] = 1;
        for(int i = 2; i <= 100000; i++){
             rst[i] = rst[i-1] + rst[i-2];
             rst[i] %= max;
        }
          
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            int num = sc.nextInt();
            int ans = rst[num];
            System.out.printf((num < 29 ? "%d\n" : "%06d\n"),ans);
        }
        sc.close(); 
    }
}