package pat;

import java.util.Scanner;
import java.util.regex.Pattern;

public class B1003 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Please");
 //       Pattern p = Pattern.compile("[^PAT]");
        int num = in.nextInt();
        for (int i = 0; i < num; i++) {
            String str = in.next();
            if (Pattern.matches("[^PAT]", str)) {
                System.out.println("NO1");
                break;
            }
            if (Pattern.matches("PAT", str)) {
                str = str.replaceAll("PAT", "");
                if (str.contains("P") || str.contains("T")) {
                    System.out.println("NO2");
                } else {
                    System.out.println("YES");
                }
            } else if (Pattern.matches("PAAT", str)) {
                str = str.replaceAll("PAAT", "");
                if (str.contains("P") || str.contains("T")) {
                    System.out.println("NO3");
                } else {
                    System.out.println("YES");
                }
            } else {
                System.out.println("NO4");
            }
            /*
             * char c = str.charAt(0); if (c == 'P') { if (str.charAt(1) == 'A') { if
             * (str.charAt(2) == 'T' || str.charAt(2) == 'A' && str.charAt(3) == 'T') {
             * System.out.println("YES"); } else { System.out.println("NO"); } } else {
             * System.out.println("NO"); } } else if (c == 'A') {
             * 
             * } else System.out.println("NO");
             */
        }
        in.close();
    }
}