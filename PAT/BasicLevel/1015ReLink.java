import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

class Main {
    public String addr;
    public String data;
    public String next;

    public Main(String addr, String data, String next){
        this.addr = addr;
        this.data = data;
        this.next = next;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String head = sc.next();
        int len = sc.nextInt();
        int k = sc.nextInt();

        Map<String, Main> list = new HashMap<>();
        ArrayList<Main> lrst = new ArrayList<>();
      
        sc.nextLine();
        //input
        for(int i = 0; i < len; i++){
            String[] split = sc.nextLine().split(" ");
            Main node = new Main(split[0], split[1], split[2]);
            list.put(split[0], node);
        }
        sc.close();

        //creat list
        String next = head;
        while(!next.equals("-1")){
            Main nextNode = list.get(next);
            lrst.add(nextNode);
            next = nextNode.next;
        }
        //reverse
        for(int i = 0; i < lrst.size()-k; i += k){
            int left = i;
            int right = i + k -1;
            while(left < right){
                Main tmp = lrst.get(left);
                lrst.set(left, lrst.get(right));
                lrst.set(right, tmp);
                left++;
                right--;
            }
        }
       
        int i = 0;
        for(; i < lrst.size()-1; i++){
            System.out.println(lrst.get(i).addr+" "+lrst.get(i).data+" "+lrst.get(i+1).addr);
        }
        System.out.println(lrst.get(i).addr+" "+lrst.get(i).data+" -1");
    }    
}