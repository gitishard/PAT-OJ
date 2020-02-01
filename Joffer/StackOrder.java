import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution {
    //未通过





    public boolean IsPopOrder(int[] pushA,int[] popA) {
        List<Integer> alist = new ArrayList<Integer>(Arrays.asList(pushA));
        for(int i = 0; i < popA.length-1; i++){
            int index = alist.indexOf(popA[i]);
            if(index > 0 && index < popA.length-1){
                if(popA[i+1] == (int)alist.get(index+1) || popA[i+1] == (int)alist.get(index-1))
                    alist.remove(index);
                else
                    return false;
            } else if(index == 0){
                if(popA[i+1] == (int)alist.get(index+1))
                    alist.remove(index);
                else
                    return false;
            } else{
                if(popA[i+1] == (int)alist.get(index-1))
                    alist.remove(index);
                else
                    return false;
            }
        }
        return true;
    }
}