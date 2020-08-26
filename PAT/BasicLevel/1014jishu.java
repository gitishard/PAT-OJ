import java.util.Scanner;
import java.util.Collections;
class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nextLine = sc.nextLine();
        //+1.23400E-03    0.00123400
        String[] split = nextLine.split("E");
        int offset = Integer.parseInt(split[1]);
        if(split[0].charAt(0) == '-'){
            System.out.print("-");
        }
        StringBuilder sb = new StringBuilder(split[0].replaceAll("[+-.]", ""));
        
        if(offset < 0){
            System.out.print("0.");
            sb.insert(0, String.join("", Collections.nCopies(Math.abs(offset)-1, "0")));
        } else {
            if(offset < sb.length()){
                sb.insert(offset, '.');
            } else if(offset > sb.length()){
                sb.insert(sb.length(), String.join("", Collections.nCopies(offset - sb.length() + 1, "0")));
            }
        }
        System.out.println(sb.toString());
        sc.close();
    }
}