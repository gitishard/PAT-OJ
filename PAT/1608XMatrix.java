import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;
import java.util.stream.Collector;
import java.util.stream.Collectors;
import java.util.List;
import java.util.ArrayList;

class Solution {
    public int specialArray(int[] nums) {
        /*
            数组nums中有且只有x个大于等于x的数

            1.去重
            2.排序
            3.x 初始为去重后数组的长度
            4.while x != 0
                count = 0
                i 0->nums.length
                    if nums[i] < x || count > x break;
                    else count++
                x--
        */
        /*
        List<Integer> list = Arrays.stream(nums).boxed().collect(Collectors.toList());
        Set<Integer> nSet= new HashSet<>(list);

        List<Integer> slist = new ArrayList<>(nSet);
        Collections.sort(slist,Collections.reverseOrder());
        int[] nArr = slist.stream().mapToInt(Integer::valueOf).toArray();
        int x = nArr.length;
    */
        while(x != 0){
            int count = 0;
            for(int i = 0; i < nArr.length; i++){
                if(nArr[i] < x || count > x) break;
                else count++;
            }
            if(count == x) break;
            else x--;
        }
        if(x != 0)
            return x;
        return -1;
    }
}