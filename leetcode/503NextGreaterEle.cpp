class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> rst;
        int len = nums.size();
        int index;
        for(int i = 0; i < len; ++i){
            index = (i+1)% len;
            while(index != i){
                if(nums[index] > nums[i]){
                    rst.push_back(nums[index]);
                    break;
                }
                index = (index+1)%len;
            }
            if(index == i)
                rst.push_back(-1);
        }
        return rst;
    }
};
