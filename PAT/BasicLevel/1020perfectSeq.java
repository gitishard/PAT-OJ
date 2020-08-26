import java.util.Scanner;
import java.util.Arrays;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int p = sc.nextInt();
        int[] seq = new int[N];
       
        for(int i = 0; i < N; i++){
            seq[i] = sc.nextInt();
        }
        sc.close();

        // M <= m * p
        Arrays.sort(seq);
        int maxlen = 0;
        for(int i = 0; i < N; i++){
            //左边边界i
            for(int j = i + maxlen; j < N; j++){
                //右边边界j
                if(seq[j] > seq[i] * p)
                    break;
                maxlen++;
            }
        }
        System.out.println(maxlen);
    }
}