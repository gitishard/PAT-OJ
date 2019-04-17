class Solution {
public:
    bool isValid(string s) {
        stack<char> val;
        char c;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                val.push(s[i]);
                continue;
            }
            if(s[i] == ')'){
                if(!val.empty())
                    c = val.top();
                else
                    return false;
                if(c == '('){
                    val.pop();
                    continue;
                }
                else
                    return false;
            }
            if(s[i] == ']'){
               if(!val.empty())
                    c = val.top();
                else
                    return false;
                if(c == '['){
                    val.pop();
                    continue;
                }
                else
                    return false;
            }
            if(s[i] == '}'){
                if(!val.empty())
                    c = val.top();
                else
                    return false;
                if(c == '{'){
                    val.pop();
                    continue;
                }
                else
                    return false;
            }
        }
        if(val.size()>0)
            return false;
        return true;
    }
};
