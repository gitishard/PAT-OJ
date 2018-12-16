#include <stdio.h>
#include <math.h>
int readoctal(char x[],int l){
	//八进制化十进制
	int t = 0;
	for(int i = 0;i < l; ++i){
		t +=(int)(x[l-i-1]-48)*(int)pow(8,i);
	}//endfor
	return t;
}
void writeoctal(int y){
	//十进制化八进制
	int a[10],al = 0;
	while(1){
		if(y==0)
			break;
		a[al++] = y%8;
		y /= 8;
	}
	for(int i = 0;i < al; ++i){
		printf("%d",a[al-i-1]);
	}//endfor
}
int main(int argc, char* argv[]){
	int y;
	char s[100];
	scanf("%s",&s);
	int l = strlen(s);
	printf("十进制－＞八进制",readoctal(s,l));
	scanf("%d",&y);
	writeoctal(y);
	return 0;
}
