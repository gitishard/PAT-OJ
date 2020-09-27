import java.util.Scanner;

public class BP1007 {
   public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       while(sc.hasNext()){
           int n = sc.nextInt();
           if(n <= 4){
                System.out.println(n);
                continue;                
           }
           int f_3d = 2;    //前三天的数量
           int f_2d = 3;
           int f_1d = 4;
           int cur_d = f_3d + f_1d;
           for(int i = 5; i <= n; i++){
                cur_d = f_3d + f_1d;
                f_3d = f_2d;
                f_2d = f_1d;
                f_1d = cur_d;
           }
           System.out.println(cur_d);
       }
       sc.close();
   } 
}