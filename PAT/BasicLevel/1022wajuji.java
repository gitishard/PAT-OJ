import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;


class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        Map<String, Integer> map = new TreeMap<>();

        String schId = null;
        Integer score = null;
        for(int i = 0; i < N; i++){
            // map.put(sc.next(), sc.nextInt());
            schId = sc.next();
            score = Integer.valueOf(sc.nextInt());

            if(map.get(schId) != null){
                map.put(schId, map.get(schId) + score);
            } else {
                map.put(schId, score);
            }
        }
        sc.close();
        List<Map.Entry<String, Integer>> list = new ArrayList<Map.Entry<String, Integer>>(map.entrySet());
        Collections.sort(list,new Comparator<Map.Entry<String, Integer>>() {
            public int compare(Map.Entry<String, Integer> o1, Map.Entry<String, Integer> o2) {
                if(o1.getValue() > o2.getValue())
                    return -1;
                return 1;
            }
        });
        System.out.printf("%s %d\n", list.get(0).getKey(),list.get(0).getValue());
    }
}