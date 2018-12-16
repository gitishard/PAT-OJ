#include <stdio.h>
#define max 20
int main(int argc, char* argv[]){
	char alpha[max];
	int num[10]={0},len=0;
	while(1){
		scanf("%c",&alpha[len++]);
		if(len > max || alpha[len-1] == '$')
			break;
	}//endwhile
	for(int i = 0;i < len; ++i){
		switch(alpha[i]){
			case '0': num[0]++;break;
			case '1': num[1]++;break;
			case '2': num[2]++;break;
			case '3': num[3]++;break;
			case '4': num[4]++;break;
			case '5': num[5]++;break;
			case '6': num[6]++;break;
			case '7': num[7]++;break;
			case '8': num[8]++;break;
			case '9': num[9]++;break;
		}
	}//endfor
	for(int i = 0;i <= 9; ++i){
		printf("%d :%d ",i,num[i]);
	}//endfor
	return 0;
}
