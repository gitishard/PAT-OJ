package pat;

import java.util.Scanner;

public class B1021 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] rst = new int[10];
        while (in.hasNext()) {
            String str = in.next();
            for (int i = 0; i < str.length(); i++) {
                rst[Integer.parseInt(String.valueOf(str.charAt(i)))]++;
            }
        }
        for (int i = 0; i < rst.length; i++) {
            if(rst[i] != 0)
                System.out.println(i +":"+ rst[i]);
        }
    }
}
