import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] nums = new int[101];
        for(int i = 0; i < N; i++) nums[sc.nextInt()] += 1;
        //for(int i = 0; i < N; i++) nums[i] = sc.nextInt();
        int k = sc.nextInt();
        int[] scores = new int[k];
        for(int i = 0; i < k; i++) scores[i] = sc.nextInt();
        sc.close();

        for(int i = 0; i < k-1; i++){
            System.out.print(nums[scores[i]]);
            System.out.print(" ");
        }
        System.out.print(nums[scores[k-1]]);

        /*
        Map<Integer, Integer> scores = new LinkedHashMap<>();
        for(int i = 0; i < k; i++) scores.put(sc.nextInt(), 0);
        sc.close();

        for(int i = 0; i < N; i++){
            int index = nums[i];
        //  Integer index = Integer.valueOf(nums[i]);
            if(scores.get(index) != null){
                scores.put(index, scores.get(index) + 1);
            }
        }

        int i = 1;
        for(Integer value: scores.values()){
            System.out.print(value);
            if(i != k){
                System.out.print(" ");
                i++;
            }
        }
        */
    }
}