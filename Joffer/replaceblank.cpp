class Solution {
public:
	void replaceSpace(char *str,int length) {
        //字符串可能是空或者可用空间为０
        if(str == NULL || length == 0)
            return;
        //计算字符串中空格数和字符数
        int char_len = 0;
        int space_len = 0;
        int i = 0;
        while(*(str+i) != '\0'){
            char_len++;
            if(*(str+i) == ' ')
                space_len++;
            i++;
        }
        int newlen =  char_len + 2*space_len + 1;
        int oldlen = char_len + 1;
        if(newlen > length)
            return;//空间不足
        while(oldlen >= 0 && oldlen < newlen){
            if(str[oldlen] != ' '){
                str[newlen--] = str[oldlen--];
            } else {
                str[newlen--] = '0';
                str[newlen--] = '2';
                str[newlen--] = '%';
                oldlen--;
            }
        }
	}
};
