import java.util.Scanner;

class Main {
    /*
    f(0) = 7
    f(1) = 11
    f(2) = f(1) + f(0) = 7 + 11 = 18               18*1 + 11*0
    f(3) = f(2) + f(1) =                           18*1 + 11*1
    f(4) = f(3) + f(2) = 18 + 11 + 18 =            18*2 + 11*1
    f(5) = f(4) + f(3) = 18*2 + 11 + 18 + 11 =     18*3 + 11*2
    f(6) = f(5) + f(4) = 18*3 + 11*2 + 18*2 + 11 = 18*5 + 11*3
    f(7) =                                         18*8 + 11*5
    ......
    即f(n) = 18*x + 11*y (x>= 2),能否被3整出于y有关
    n = 2,3,4,5,6,7,8,9,10,11,12,13,14,15
    y = 0,1,1,2,3,5,8,13,21,34,55,89,124,213
    y = 2,6,10,14,...,每个四个都可以被整除
    */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            int num = sc.nextInt();
            if(num % 4 == 2)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
        sc.close();
    }
}
