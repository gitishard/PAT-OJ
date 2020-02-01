import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class Main1016{
    public static void main(String[] args){
        //3862767 6 13530293 3
       Scanner in = new Scanner(System.in);
       while(in.hasNext()){
            int A = in.nextInt();
            int Da = in.nextInt();
            int B = in.nextInt();
            int Db = in.nextInt();
            int Pa = getP(A, Da);
            int Pb = getP(B, Db);
            System.out.println(Pa + Pb);
       }
       in.close();
    }
    public static int getP(int A, int a){
        int count = 0;
        String sA = String.valueOf(A);
        String sa = String.valueOf(a);
        Pattern p = Pattern.compile(sa);
        Matcher m = p.matcher(sA);
        while(m.find()){
            count++;
        }
        if(count == 0)
            return 0;
        else {
            int rst = a;
            while(count > 1){
                rst = rst*10 + a;
                count--;
            }
            return rst;
        } 
    }
}
