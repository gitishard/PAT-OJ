import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        String c = sc.next();
        sc.close();

        int rst = 0;
        int i = 3;
        int rank = 1, div = 0;
        if(num > 0){
            while(rst*2+1 < num){
                rank = rst;
                rst += i;
                i += 2;
            }
            if(rst*2+1 == num)
                rank = i-2;
            else{
                div = num -1-2*rank;
                rank = (i-4) != 0 ? i-4:1;
            }
        }
        printShape(rank, c);
        System.out.println(div);
    }

    public static void printShape(int rank,String c){
        int i,j,work;
        for(i = rank, j = 0; i >= 1; i -= 2, j++){
            //打印一行
            //打印空白
            work = 0;
            while(work < j){
                System.out.print(" ");
                work++;
            }
            //打印符号
            work = i;
            while(work != 0){
                System.out.print(c);
                work--;
            }
            System.out.print('\n');
        }
        for(i += 4, j -= 2; i <= rank; i+=2,j--){
            work = 0;
            while(work < j){
                System.out.print(" ");
                work++;
            }
            //打印符号
            work = i;
            while(work != 0){
                System.out.print(c);
                work--;
            }
            System.out.print('\n');
        }
    }
}