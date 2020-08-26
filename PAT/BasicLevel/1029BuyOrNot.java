import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String sales = sc.next();
        String wanted = sc.next();
        sc.close();
        
        int wlen = wanted.length();
        int notMatch = 0;
        
        for(int j= 0; j < wlen; j++){
            if(sales.indexOf(wanted.charAt(j)) != -1){
                sales = sales.replaceFirst(String.valueOf(wanted.charAt(j)), "");
            } else {
                notMatch++;
            }
        }

        if(notMatch == 0)
            System.out.println("Yes "+ sales.length());
        else
            System.out.println("No "+ notMatch);
    }
}