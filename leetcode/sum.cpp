#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
//---solution begin---
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> rst = new vector<int>();
        length = strlen(nums) / strlen(nums[0]);
        for(int i = 0; i < length; i++){
            for(int j = i + 1; j < length; j++){
                if(nums[i] + nums[j] == target){
                    rst -> push_back(i);
                    rst -> push_back(j);
                    return rst;
                }
            }
        }
    }   
};
//---solution end---
int main(){
    Solution s = new Solution(); 
    return 0;
}
