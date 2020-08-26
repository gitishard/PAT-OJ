import java.util.Arrays;
import java.util.Scanner;

class Main {
    /*
    给定任一个各位数字不完全相同的4位正整数，如果我们先把4个数字按非递增排序，再按非递减排序，
    然后用第1个数字减第2个数字，将得到一个新的数字。一直重复这样做，我们很快会停在有“数字黑洞”之称的6174

    如果N的4位数字全相等，则在一行内输出“N - N = 0000”；否则将计算的每一步在一行内输出，直到6174
    作为差出现，输出格式见样例,每行中间没有空行
    */
   public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String num = sc.next();
        process(num);
        sc.close();
   }
   static void process(String num){
        int[] rst = Order(num);
        if(rst[0] == rst[1]){
            System.out.println(num +" - "+num+" = "+"0000");
        } else {
            while(rst[2] != 6174){
                System.out.printf("%04d - %04d = %04d\n", rst[0], rst[1], rst[2]);
                rst = Order(String.valueOf(rst[2]));
            }
            System.out.printf("%04d - %04d = %04d\n", rst[0], rst[1], rst[2]);
        }
   }
   static int[] Order(String str){
       while(str.length() < 4)
            str += "0";
        
       int[] data = new int[4];
       for(int i = 0; i < 4; i++)
            data[i] = str.charAt(i) - '0';

       Arrays.sort(data);
       int dec = data[0] + data[1]*10 + data[2]*100 + data[3]*1000;
       int asc = data[3] + data[2]*10 + data[1]*100 + data[0]*1000;
       return new int[]{dec, asc, dec-asc};
   }

}