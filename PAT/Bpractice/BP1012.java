import java.util.Scanner;

public class BP1012 {
    /*
    输入描述:
    输入包含多组数据。
    每组数据一行，包含两个分数和一个运算符，中间用空格隔开。
    其中分子与分母均为不大于30的正整数。


    输出描述:
    对应每一组数据，输出两个分数的计算结果。
    要求输出最简分数，即分子与分母互质。
    */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            String[] line = sc.nextLine().split(" ");
            String op = line[2];
            String[] first = line[0].split("/");
            String[] second = line[1].split("/");
            int first_Up = Integer.parseInt(first[0]);
            int first_Down = Integer.parseInt(first[1]);
            int second_Up= Integer.parseInt(second[0]);
            int second_Down = Integer.parseInt(second[1]);

            caculate(first_Up, first_Down, second_Up, second_Down, op);
        }
        sc.close();
    }
    static void caculate(int first_Up, int first_Down, int second_Up, int second_Down, String op) {
        int up = 0, down = 0;
        switch(op){
            case "+":
                up = first_Up*second_Down + first_Down*second_Up;
                down = first_Down * second_Down;
                break;
            case "*":
                up = first_Up * second_Up;
                down = first_Down * second_Down;
                break;
            case "-":
                up = first_Up*second_Down - first_Down*second_Up;
                down = first_Down * second_Down;
                break;
            case "/":
                up = first_Up * second_Down;
                down = first_Down * second_Up;
        }

        StringBuilder sb = new StringBuilder();
        if(up < 0) {
            sb.append("-");
            up *= -1;
        }
        for(int i = 2; i <= up; i++){
            if(up % i == 0 && down % i == 0){
                up /= i;
                down /= i;
                i = 1;//下次从2开始约分
            }
        }
        sb.append(up).append("/").append(down);
        System.out.println(sb.toString());
        
        /*
        计算最大公约数的方法
        static int gcd(int a, int b){
        if (b == 0) return a;
        while (true){
            if ((a = a % b) == 0) return b;
            if ((b = b % a) == 0) return a;
            }
        }

        int fm(int a,int b){
            while(a!=b){
                if(a>b) a=a-b;
                else b=b-a;
            }
            return a;
        }

        int gcd(int x, int y){
            if (y%x == 0)
                return x;
            return gcd(y%x, x);
        }
        */
    }
}