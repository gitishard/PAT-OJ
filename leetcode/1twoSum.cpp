class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> rst;
        for(int i = 0; i < nums.size(); ++i){
            int j = i+1;
            while(j < nums.size()){
                if(nums[i] + nums[j] == target){
                    rst.push_back(i);
                    rst.push_back(j);
                    return rst;   
                }
                j++;
            }
        }
        return rst;
    }
};
