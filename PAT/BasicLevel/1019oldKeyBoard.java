import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String real = sc.next();
        String bad = sc.next();
        sc.close();

        String rst = "";
        int index = 0, rindex = 0;
        while(index < bad.length() && rindex < real.length()){
            if(real.charAt(rindex) == bad.charAt(index)){
                index++;
                rindex++;
                if(index >= bad.length())
                    index = bad.length()-1;
            } else {
                String key = String.valueOf(real.charAt(rindex)).toUpperCase();
                if(!rst.contains(key)){
                    rst += key;
                }
                rindex++;
            }
        }
        System.out.println(rst);
    }
}