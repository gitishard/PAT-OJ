import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        final int mod = 1000000007;
        int rst = 0, p = 0, a = 0;
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        sc.close();

        for(int i = 0; i < str.length(); i++){
            switch(str.charAt(i)){
                case 'P': p++; break;
                case 'A': a += p; break;    //每个A都可以与前面的P结合
                case 'T': rst += a; rst %= mod;       //每个T都可以与前面的A结合,且T后还可能出现P所以遇到T后要直接取余
            }
        }
        System.out.println(rst);
    }
}