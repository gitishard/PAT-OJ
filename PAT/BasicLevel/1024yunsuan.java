import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] num1 = sc.next().split("/");
        String[] num2 = sc.next().split("/");
        sc.close();

        Integer son1 = Integer.parseInt(num1[0]);
        Integer mom1 = Integer.parseInt(num1[1]);
        Integer son2 = Integer.parseInt(num2[0]);
        Integer mom2 = Integer.parseInt(num2[1]);
        
        String fnum1 = format(son1, mom1);
        String fnum2 = format(son2, mom2);
        
        //add
        Integer mom = mom1 * mom2;
        Integer son = son1 * mom2 + son2 * mom1;
        System.out.println(fnum1 +" + "+ fnum2 +" = "+ format(son, mom));
        //decrease
        son = son1 * mom2 - son2 * mom1;
        System.out.println(fnum1 +" - "+ fnum2 +" = "+ format(son, mom));
        //mutil..
        son = son1 * son2;
        System.out.println(fnum1 +" * "+ fnum2 +" = "+ format(son, mom));
        //chu
        son = son1 * mom2;
        mom = mom1 * son2;
        System.out.println(fnum1 +" / "+ fnum2 +" = "+ format(son, mom));
    }

    static int maxBeishu(int son, int mom) {    //最大公约数
        if ( son % mom == 0 ) return mom;       //可以整除,返回除数
        return maxBeishu(mom, son % mom);       //约数一定小于等于除数，除数一定大于余数，最大公约数一定能够在小于除数的数字中找到
    }

    static String format(Integer son, Integer mom){
        boolean isFu = false;
        StringBuilder sb = new StringBuilder();

        if(son.equals(0)) return "0";
        if(mom.equals(0)) return "Inf";
        if(son < 0){isFu = !isFu; son *= -1;}
        if(mom < 0){isFu = !isFu; mom *= -1;}
        if(isFu) sb.append("(-");

        int maxB = maxBeishu(son, mom);
        son /= maxB;
        mom /= maxB;
        int k = son / mom;
        son = son % mom;
        if(k != 0){
            sb.append(k);
            if(!son.equals(0))//整除
                sb.append(" ").append(son).append('/').append(mom);
        } else {
            sb.append(son).append('/').append(mom);
        }
        
        if(isFu) sb.append(")");
        return sb.toString();
    }
}