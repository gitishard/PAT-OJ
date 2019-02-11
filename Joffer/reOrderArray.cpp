class Solution {
public:
    void reOrderArray(vector<int> &array) {
        for(int i = 0; i < array.size(); i++){
            if(!isOdd(array[i])){
                for(int j = i+1; j < array.size(); j++){
                    if(isOdd(array[j])){
                        int tmp = array[j];
                        for(int k = j; k > i; --k){
                            array[k] = array[k-1];
                        }
                        array[i] = tmp;
                        break;
                    }
                }
            }
        }
    }
    bool isOdd(int p){
        if(p & 0x1 == 1)
            return true;
        return false;
    }
};
