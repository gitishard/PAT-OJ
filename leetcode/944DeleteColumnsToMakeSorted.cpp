class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int slen = A[0].size();
        int len = A.size();
        int rst = 0;
        int i = 0;
        while(i < slen){
            for(int j = 0; j < len-1;++j)
                if(A[j][i] > A[j+1][i]){
                    rst++;
                    break;
                }
            i++;
        }
        return rst;
    }
};
