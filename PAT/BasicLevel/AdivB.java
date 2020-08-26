import java.util.Scanner;
class Main {
    /*
    本题要求计算A/B，其中A是不超过1000位的正整数，B是1位正整数。你需要输出商数Q和余数R，使得A = B * Q + R成立。
    在1行中依次输出Q和R，中间以1空格分隔。
    */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        int B = sc.nextInt();

        StringBuilder Q = new StringBuilder();
        int q = 0;
        for(int i = 0; i < A.length(); i++){
            q = q * 10 + Integer.parseInt(String.valueOf(A.charAt(i)));
            Q.append(q / B);
            q = q % B;
        }
        while(Q.charAt(0) == '0') Q.delete(0, 1);
        System.out.println(Q.toString()+" "+q);
        sc.close();
    }
}