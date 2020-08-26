import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int c1 = sc.nextInt();
        int c2 = sc.nextInt();
        sc.close();
        final int CLK_TCK = 100;
        //int time = Math.floorDiv(c2-c1, CLK_TCK);
        int time = Math.round((float)(c2-c1) / CLK_TCK);
        //System.out.println(time);
        //int time = (c2 - c1) / CLK_TCK;
        int h = time / 3600;
        int m = time % 3600 / 60;
        int s = time % 3600 % 60;

        System.out.printf("%02d:%02d:%02d",h,m,s);
    }
}