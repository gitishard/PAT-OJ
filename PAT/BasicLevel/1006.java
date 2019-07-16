import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while(in.hasNext()) {
            String rst = "";
            int num = in.nextInt();
            int b_num = num / 100;
            int s_num = (num % 100) / 10;
            int g_num = (num % 100 % 10);

            rst += new String(new char[b_num]).replace("\0","B");
            rst += new String(new char[s_num]).replace("\0","S");
            rst += numToString(g_num);
            System.out.println(rst);
        }
        in.close();
    }
    public static String numToString(int num){
        int n = 1;
        String rst = "";
        while (n <= num) {
            rst += String.valueOf(n);
            n++;
        }
        return rst;
    }
}