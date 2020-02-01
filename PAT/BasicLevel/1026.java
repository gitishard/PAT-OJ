import java.util.Scanner;

class Main1 {
    final static int TCK = 100;
    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       while(in.hasNext()){
           int c1 = in.nextInt();
           int c2 = in.nextInt();
           int time = ((c2 - c1)+50) / TCK;
           int h = (int)(time / 3600);
           int m = (int)(time % 3600 / 60);
           int s = Math.round(time % 3600 % 60);
           System.out.println(formatStr(h) +":"+formatStr(m)+":"+formatStr(s));
       } 
       in.close();
    }
    public static String formatStr(int num){
        if(num == 0)
            return "00";
        else if(num < 10)
            return "0"+num;
        return String.valueOf(num);
    }
}