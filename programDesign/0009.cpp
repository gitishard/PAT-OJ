#include <stdio.h>
#define max 26
int main(int argc, char* argv[]){
	int len = 0,num[26]={0};
	char alpha[max];
	while(1){
		scanf("%c",&alpha[len++]);
		if(len > max || alpha[len-1] == '$')
			break;
	}//endwhile
	for(int i = 0;i < len; ++i){
		if(alpha[i]>='A' && alpha[i]<='Z')
			num[(alpha[i]-'A')]++;
	}//endfor

	for(int i = 0;i < 26; ++i){
		int m = 0;
		for(int j = 0;j < 26; ++j){
			if(num[j]>num[max])
				max = j;
		if(num[max] != 0){
			printf("%c: %d\n", 'A'+max, num[max]);
			num[max] = 0;
		} else break;
	}//endfor
	/*sort
	for(int i = 25;i > 0; --i){
		for(int j = 0;j < i; ++j){
			if(num[j] < num[j+1]){
				int t = num[j];
				num[j] = num[j+1];
				num[j+1] = t;
			}
		}//endfor
	}//endfor

	for(int i = 0;i < 26; ++i){
		if(num[i] != 0)
			printf("%c : %d",i+'A',num[i]);
	}//endfor
	*/
	return 0;
}
