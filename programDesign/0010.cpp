/*判断素数*/
#include <stdio.h>
int main(int argc, char* argv[]){
	int num[101];
	for(int i = 0;i < 101; ++i){
		num[i] = 1;
	}//endfor
	for(int i = 2;i <= 100; ++i){
		if(num[i] == 1){
			//如果num[i]是素数，则i的倍数都不是素数
			for(int j = 2;i*j <=100; ++j){
				//i的２，３．．倍
				num[i*j] = 0;
			}//endfor
		}
	}//endfor
	printf("一百以内的素数");
	for(int i = 2;i <=100; ++i){
		if(num[i] == 1)
			printf("%d,", i);
	}//endfor
	return 0;
}
