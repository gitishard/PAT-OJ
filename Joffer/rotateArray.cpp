class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int index = 0;
        if(rotateArray.size() == 0)
            return 0;
        for(int i = 1; i < rotateArray.size(); ++i){
            if(rotateArray[i-1] > rotateArray[i]){
                index = i;
                break;
            }
        }
        return rotateArray[index];
    }
};
