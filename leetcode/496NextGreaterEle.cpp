class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> rst;
        vector<int>::iterator it2;
        for(auto it = nums1.begin(); it != nums1.end(); ++it){
            for(it2 = find(nums2.begin(),nums2.end(),*it); it2 != nums2.end(); ++it2){
                if(*it2 > *it){
                    rst.push_back(*it2);
                    break;
                }
            }
            if(it2 == nums2.end())
                    rst.push_back(-1);
        }
        return rst;
    }
};
