import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] num = new int[10];
        
        for(int i = 0; i < 10; i++)
            num[i] = sc.nextInt();
        sc.close();
        
        for(int i = 1; i < 10; i++){
            if(num[i] != 0){
                System.out.print(i);
                num[i]--;
                break;
            }
        }
        for(int i = 0; i < 10; i++){
            if(num[i] != 0){
                while(num[i] != 0){
                    System.out.print(i);
                    num[i]--;
                }
            }
        }
    }
}