import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String badKeys = sc.next().toLowerCase();
        String inStr = sc.next();
        sc.close();
        final char upKey = '+';
        boolean isEmpty = true;

        System.out.println("---0"+ badKeys);
        boolean flag = badKeys.contains(String.valueOf(upKey));
        for(int index = 0; index < inStr.length(); ++index){
            char ch = inStr.charAt(index);
            if(!Character.isUpperCase(ch)){
                if(!badKeys.contains(String.valueOf(ch))){
                    System.out.print(ch);
                    isEmpty = false;
                }
            } else if(!flag && !badKeys.contains(String.valueOf(ch).toLowerCase())){
                System.out.print(ch);
                isEmpty = false;
            }
        }
        if(isEmpty)
            System.out.println("");
    }
}