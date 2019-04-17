class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int pos = S.find('#');
        while(pos != string::npos){
            if(pos != 0)
                S.erase(pos-1,2);
            else
                S.erase(pos,1);
            pos = S.find('#');
        }
        int pos1 = T.find('#');
        while(pos1 != string::npos){
            if(pos1 != 0)
                T.erase(pos1-1,2);
            else
                T.erase(pos1,1);
            pos1 = T.find('#');
        }
        if(S != T)
            return false;
        return true;
    }
};
