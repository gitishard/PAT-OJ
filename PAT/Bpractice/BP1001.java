import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

class Main {
    static class Location{
        int value;
        int x;
        int y;
        public Location(int value, int x, int y){
            this.value = value;
            this.x = x;
            this.y = y;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            int M = sc.nextInt();
            int N = sc.nextInt();
            int P = sc.nextInt();
            List<Location> nutField = new ArrayList<>();

            for(int i = 0; i < M; i++){
                for(int j = 0; j < N; j++){
                    int tmpValue = sc.nextInt();
                    if(tmpValue != 0){
                        Location loc = new Location(tmpValue, i+1, j+1);
                        nutField.add(loc);
                    }
                }
            }
            //sort
            Collections.sort(nutField, new Comparator<Location>(){
                @Override
                public int compare(Main.Location o1, Main.Location o2) {
                    return o2.value - o1.value;
                }
            });

            //Location lastPostion = new Location(0, 0, nutField.get(0).y);
            //Location currentPostion = null;
            int lastX = 0, lastY = nutField.get(0).y;
            int index = 0, totalNuts = 0;
            int distance = 0, backLength = 0;
            if(nutField.size() > 0){
               // while(P > 0){
                for(Location loc : nutField){
                    //currentPostion = nutField.get(index);
                    //distance = Math.abs(currentPostion.x - lastPostion.x) + Math.abs(currentPostion.y - lastPostion.y) + 1;
                    //backLength = currentPostion.x;
                    distance = Math.abs(loc.x - lastX) + Math.abs(loc.y - lastY) + 1;
                    backLength = loc.x;
                    if(P - distance - backLength >= 0){
                        totalNuts += loc.value;
                        P -= distance;
                    } else {
                        break;
                    }
                    lastX = loc.x;
                    lastY = loc.y;
                }
            }
            System.out.println(totalNuts);
        }
        sc.close();
    }
}