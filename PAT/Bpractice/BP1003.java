import java.util.Scanner;

public class BP1003 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            int n = sc.nextInt();
            long momNum = 0;
            long babyNum = 1;
            long tmp = 0;

            while(n > 0){
                tmp = babyNum;
                babyNum = momNum;
                momNum = tmp + momNum;
                n--;
            }
            System.out.println(babyNum + momNum);
        }
        sc.close();
    }    
}
