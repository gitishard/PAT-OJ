#include <stdio.h>
int issushu(int x){
	int t = 2;
	int flag;
	while(1){
		if(x % t == 0 ){
			flag = 0;
			break;
		} else 
			t++;
		if(t >= x){
			flag =1;
			break;
		}
	}//endwhile
	return flag;
}
int main(int argc, char* argv[]){
	printf("Please input a even:");
	scanf("%d",&x);
	if(x%2 != 0)
		printf("error");
	else {
		printf("根据哥德巴赫猜想,%d 可表示为:\n",x);
		for(int i = 1;i < (x/2+1); ++i){
			if(issushu(i) == 1&& issushu(x-i) == 1)
				printf("x=%d+%d\n",i,x-i);
		}//endfor
	}
	return 0;
}
