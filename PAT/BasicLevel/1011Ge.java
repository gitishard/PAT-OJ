import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] count = new int[10];
        String str = sc.next();

        for(int i = 0; i < str.length(); ++i){
            count[str.charAt(i) - '0'] += 1;
        }

        for(int i = 0; i < count.length; ++i){
            if(count[i] > 0)
                System.out.println(i +":"+ count[i]);
        }
        sc.close();
    }
}