import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;


class MoonCakes implements Comparable<MoonCakes>{
    public int count;
    public int price;
    public double average;

    MoonCakes(int c){
        this.count = c;
    }
    public void setP(int p){
        this.price = p;
        this.average = this.price / this.count;
    }
    @Override
    public int compareTo(MoonCakes o) {
        if(this.average > o.average)
            return -1;
        else if(this.average < o.average)
            return 1;
        return 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int need = sc.nextInt();
        double money = 0;
        ArrayList<MoonCakes> list = new ArrayList<MoonCakes>();
       
        for(int i = 0; i < N; i++){
            list.add(new MoonCakes(sc.nextInt()));
        }
        for(int i = 0; i < N; i++){
            list.get(i).setP(sc.nextInt());
        }
        Collections.sort(list);
        while(need > 0){
            if(list.get(0).count < need){
                need -= list.get(0).count;
                money += list.get(0).price;
                list.remove(0);
            } else {
                money += list.get(0).average * need;
                need = 0;
            }
        }
        System.out.printf("%.2f", money);
        sc.close();
    }
}