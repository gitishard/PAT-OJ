import java.util.Scanner;

class Main {
    /*
    问题描述
    蜜蜂只会从左往右爬, 给出两个蜂房的编号a和b，要求计算蜂房a的蜜蜂爬到蜂房b有几条不同路线
    即对于房间号，蜜蜂只能到达最近的两个较大的房间(1->2,1->3)
    
    输入
    1.输入的第一行是一个整数n
    2. 接下来n行数据，每行一组测试用例
    3. 每组测试用例包含两个正整数a和b，(0 < a < b < 2^31)
    
    输出
    每组用例的结果单独输出一行。输出数据结果范围是 [0, 2^63)

    思路
    斐波那锲数列问题
    间隔数      路径                路径数
    0(1,2)     1->2                1
    1(1,3)     1->2->3             2
                ->3
    2(1,4)     1->2->3->4          3
                   ->4
                ->3—>4
    3(1,5)     1->2->3->4->5       5
                      ->5
                   ->4->5
                ->3->4->5
                   ->5   
    4(1,6)     1->2->3->4->5->6    8
                         ->6
                      ->5->6
                   ->4->5->6
                      ->6
                ->3->4->5->6
                      ->6
                   ->5->6
    ...
    */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            int n = sc.nextInt();
            for(int i = 0; i < n; i++){
                long  a = sc.nextLong();
                long  b = sc.nextLong();
                long first = 1, second = 2, num = 0;

                if(b - a <= 2){
                    num = b - a;
                } else {
                    for(long j = a; j < b-2; j++){
                        num = first + second;
                        first = second;
                        second = num;
                    }
                }
                System.out.println(num);
            }
        }
        sc.close();
    }
}