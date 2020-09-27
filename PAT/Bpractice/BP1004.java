import java.util.Scanner;

public class BP1004 {
     //当前位置的前一个数字是吃过一次的人数，前两个位置的数字是连续吃过两天的人数
   public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int from, to;
       while(sc.hasNext()){
            from = sc.nextInt();
            to = sc.nextInt();
            System.out.println("from is "+ count(from-1));
            System.out.println("to is   "+count(to));
            System.out.println(count(to) - count(from-1));
       }
       sc.close();
   }
   static long count(int num){
       if(num == 0|| num == 1 || num == 2)
            return num;

       long total = 2, rst = 0, former1 = 1, former2 = 1;
       for(int i = 3; i <= num; i++){
            rst = former1 + former2;    //current rst;
            former1 = former2;          //new former1
            former2 = rst;              //new former2
            total += rst;
       }
       return total;
   }
   /*
   static int count(int num){
       if(num == 1 || num == 2)
            return 1;
       return count(num-1) + count(num-2); 
   }
   */
}
