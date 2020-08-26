import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] line = sc.nextLine().split(" ");
        int Pa = 0, Pb = 0;
        if(line[0].contains(line[1]))
           Pa = count(line[0], line[1]);
        if(line[2].contains(line[3]))
           Pb = count(line[2], line[3]);

        System.out.println(Pa + Pb);
        sc.close();
    }
    public static int count(String str, String s){
        int c = 0;
        for(int i = 0; i < str.length();){
            i = str.indexOf(s, i);
            if(i != -1){
                c++;
                i += s.length();
            }
        }

        int a = Integer.parseInt(s);
        int rst = a;
        for(int i = 1; i < c; i++){
            rst = rst * 10 + a;
        }
        return rst;
    }
}