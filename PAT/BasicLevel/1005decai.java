import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

class StuInfo implements Comparable<StuInfo> {
    /*
    输入描述：
    输入第1行给出3个正整数，分别为：N（<=105），即考生总数；L（>=60），为录取最低分数线，
    即德分和才分均不低于L的考生才有资格被考虑录取；H（<100），为优先录取线——德分和才分均
    不低于此线的被定义为“才德全尽”，此类考生按德才总分从高到低排序；才分不到但德分到线的
    一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后；德才分均低于H，但是德分不低
    于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，但排在第二类考生之后；其他达到
    最低线L的考生也按总分排序，但排在第三类考生之后。

    随后N行，每行给出一位考生的信息，包括：准考证号、德分、才分，其中准考证号为8位整数，德
    才分为区间[0, 100]内的整数。数字间以空格分隔。

    输出描述：
    输出第1行首先给出达到最低分数线的考生人数M，随后M行，每行按照输入格式输出一位考生的信息，
    考生按输入中说明的规则从高到低排序。当某类考生中有多人总分相同时，按其德分降序排列；若德
    分也并列，则按准考证号的升序输出。
    */
    public Integer id;
    public Integer de;
    public Integer cai;
    public Integer sum;
    public int rank;

    public StuInfo(Integer ii, Integer de, Integer cai){
            this.id = ii;
            this.de = de;
            this.cai = cai;
            this.sum = this.de + this.cai; 
    }
    
    @Override
    public int compareTo(StuInfo other) {
        if(this.rank != other.rank) return this.rank - other.rank;
        else if(!this.sum.equals(other.sum)) return other.sum - this.sum;
        else if(!this.de.equals(other.de)) return other.de - this.de;
        else return this.id - other.id;
    }
    public static void main(String[] args) {
        /*
        第一类：德才分都高于H,按总分降序排序
        第二类：才分小于H,德分大于H，按总分降序，排在第一类后面
        第三类：德才分均低于H，但是德分不低于才分
        第四类：德才均大于L
        总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。
        */
        
        //考生总数，最低分数线，优先录取线
        int N,L,H,M = 0;
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        L = sc.nextInt();
        H = sc.nextInt();

        List<StuInfo> list = new ArrayList<>();
        //String[] line = new String[3];
        Integer ii,d,c;
        for(int i = 0; i < N; i++){
            // line = sc.nextLine().split(" ");
            // d = Integer.parseInt(line[1]);
            // c = Integer.parseInt(line[2]);
            ii = sc.nextInt();
            d = sc.nextInt();
            c = sc.nextInt();
            if( d >= L &&  c >= L){
                M += 1;
                StuInfo stu = new StuInfo(ii, d, c);
                if(d >= H && c >= H){
                    stu.rank = 1;
                } else if (d >= H && c < H){
                    stu.rank = 2;
                } else if (d > c){
                    stu.rank = 3;
                } else {
                    stu.rank = 4;
                }              
                list.add(stu);
            }
        }
        
        Collections.sort(list);
        System.out.println(M);
        for(StuInfo it : list){
            System.out.println(it.id + " " + it.de + " " + it.cai);
        }
        sc.close();
    }
}