import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;

class Main{
    /*
    输入第1行给出正整数N（<=105），即双方交锋的次数。随后N行，每行给出一次交锋的信息，
    即甲、乙双方同时给出的的手势。C代表“锤子”、J代表“剪刀”、B代表“布”，第1个字母代表
    甲方，第2个代表乙方，中间有1个空格。

    输出第1、2行分别给出甲、乙的胜、平、负次数，数字间以1个空格分隔。第3行给出两个字母，
    分别代表甲、乙获胜次数最多的手势，中间有1个空格。如果解不唯一，则输出按字母序最小的解。
    */
    public int s;
    public int p;
    public int b;
    public Map<String, Integer> sinfo = new HashMap<>();

    public Main(){
        this.s = 0;
        this.p = 0;
        this.b = 0;
        this.sinfo.put("C",0);
        this.sinfo.put("J",0);
        this.sinfo.put("B",0);
    }

    static int win(String p1, String p2){
        if(p1.equals(p2))
            return 0;
        else if (p1.equals("C")) {
            if(p2.equals("J"))
                return 1;
            else if(p2.equals("B"))
                return -1;
        } else if (p1.equals("J")) {
            if(p2.equals("C"))
                return -1;
            else if(p2.equals("B"))
                return 1;
        } else if (p1.equals("B")) {
            if(p2.equals("J"))
                return -1;
            else if(p2.equals("C"))
                return 1;
        }
        return 0;
    }
    static String maxPose(Map<String, Integer> pose){
        String max = "B";
        if(pose.get("C").intValue() > pose.get(max).intValue())
            max = "C";
        if(pose.get("J").intValue()> pose.get(max).intValue())
            max = "J";
        return max;
    }
    public static void main(final String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        Main jia = new Main();
        Main yi = new Main();
        
        String p1 = null, p2 = null;
        for(int i = 0; i < N; i++){
            p1 = sc.next();
            p2 = sc.next();

            if(win(p1, p2) > 0){
                jia.s += 1;
                yi.b += 1;
                jia.sinfo.put(p1, jia.sinfo.get(p1) + 1);
            } else if(win(p1, p2) == 0){
                jia.p += 1;
                yi.p += 1;
            } else {
                jia.b += 1;
                yi.s += 1;
                yi.sinfo.put(p2, jia.sinfo.get(p2) + 1);
            } 
        }
        System.out.println(jia.s +" "+jia.p+" "+jia.b);
        System.out.println(yi.s +" "+yi.p+" "+yi.b);
        System.out.println(maxPose(jia.sinfo) +" "+ maxPose(yi.sinfo));
        sc.close();
    }
}