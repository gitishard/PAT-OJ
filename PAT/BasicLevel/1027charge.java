import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        //十七个银西可(Sickle)兑一个加隆(Galleon)，二十九个纳特(Knut)兑一个西可
        //格式为“Galleon.Sickle.Knut”,Galleon是[0, 107]]区间内的整数，Sickle是[0, 17)区间内的整数，Knut是[0, 29)
        //1 Galleon = 17 Sickle, 1 Sickle = 29 Knut
        Scanner sc = new Scanner(System.in);
        String[] line = sc.nextLine().split(" ");
        String[] P = line[0].split("\\.");    //应付
        String[] A = line[1].split("\\.");    //实付
        sc.close();

        change(P, A);
    }
    static void change(String[] P, String[] A){
        int pTotal = 17 * 29 * Integer.parseInt(P[0]) + 29 * Integer.parseInt(P[1]) + Integer.parseInt(P[2]);
        int aTotal = 17 * 29 * Integer.parseInt(A[0]) + 29 * Integer.parseInt(A[1]) + Integer.parseInt(A[2]);
        int diff = aTotal - pTotal;
        int Galleon = 0, Sickle = 0, Knut = 0;

        StringBuilder sb = new StringBuilder();
        if(diff < 0){
            sb.append('-');
            diff *= -1;
        }
        Galleon = diff / (17*29); diff %= (17*29);
        Sickle = diff / 29;
        Knut = diff % 29;
        sb.append(Galleon).append('.').append(Sickle).append('.').append(Knut);
        System.out.println(sb.toString());
    }
}