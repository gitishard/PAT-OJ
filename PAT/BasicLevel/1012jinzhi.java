import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int c = sc.nextInt();
        int sum = A+B;
        StringBuilder str = new StringBuilder();
        while(sum != 0){
            str.append(sum%c);
            sum /= c;
        }
        System.out.println(str.reverse());
        sc.close();
    }
}