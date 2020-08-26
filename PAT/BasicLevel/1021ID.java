import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        //检查前17位是否全为数字且最后1位校验码计算准确
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String str = null;
        int flag = 0;
        //ArrayList<String> list = new ArrayList<>();

        for(int i = 0; i < n; i++){
            str = sc.next();
            if(!isRight(str)){
                flag = 1;
                System.out.println(str);
            }
        }
        sc.close();
        if(flag == 0)
            System.out.println("All passed");
    }

    static boolean isRight(String str){
        char[] valiation = {'1','0','X','9','8','7','6','5','4','3','2'};
        int[] weight = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
        int sum = 0;

        for(int index = 0; index < 17; index++){
            if(!Character.isDigit(str.charAt(index))){
                return false;
            }
            sum += (str.charAt(index) - '0') * weight[index];
        }
        if(valiation[sum % 11] != str.charAt(17))
            return false;
        
        return true;
    }
}