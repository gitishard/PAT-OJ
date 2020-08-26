import java.util.Arrays;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        /*
        输入
        在第一行给出正整数N (<=100)；随后一行给出原始序列的N个整数；最后一行给出由某排序算法产生的中间序列
        这里假设排序的目标序列是升序。数字间以空格分隔
        输出
        首先在第1行中输出“Insertion Sort”表示插入排序、或“Merge Sort”表示归并排序；然后在第2行中输出用该
        排序算法再迭代一轮的结果序列。题目保证每组测试的结果是唯一的。数字间以空格分隔，且行末不得有多余空格。
        */
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] numSet = new int[N];
        int[] midSet = new int[N];
        for(int i = 0; i < N; ++i) numSet[i] = sc.nextInt();
        for(int i = 0; i < N; ++i) midSet[i] = sc.nextInt();
        sc.close();

        String I = "Insertion Sort";
        String M = "Merge Sort";
        int index = 0;
        boolean isInsert = true;

        //find the set has orded
        for(;index < N-1 && midSet[index] <= midSet[index+1]; ++index);
        index += 1;
        //剩下的单词是否与源输出单词一致
        for(int i = index; i < N; i++){
            if(numSet[i] != midSet[i]){
                isInsert = false;
                break;
            }
        }

        if(isInsert){
            System.out.println(I);
            for(int i = index; i >= 1; i--){
                if(midSet[i] < midSet[i-1]){
                    int tmp = midSet[i];
                    midSet[i] = midSet[i-1];
                    midSet[i-1] = tmp;
                }
            }
        } else {
            System.out.println(M);
            mergeSort(numSet, midSet);
            midSet = numSet;
        }
        //output
        for(int i = 0; i < N-1; i++){
            System.out.print(midSet[i]);
            System.out.print(" ");
        }
        System.out.println(midSet[N-1]);
    }

    static void mergeSort(int[] numSet, int[] midSet){
        boolean isMatched = false;
        int step = 1;
        int len = numSet.length;
        while(!isMatched){
            //match
            isMatched = true;
            for(int i = 0; i < len; i++){
                if(midSet[i]  != numSet[i]){
                    isMatched = false; 
                    break;
                }
            }
            //merge sort
            step *= 2;
            for(int i = 0; i < len; i += step)
                Arrays.sort(numSet, i, (i + step) < len ? i+step : len);
        }
    }
}