#include <stdio.h>
int main(int argc, char* argv[]){
	int x, t = 2;
	printf("Please input a number:");
	scanf("%d",&x);
	printf("%d = 1",x);
	while(1){
		if(x % t == 0) {
			x = x / t;
			printf("* %d",t);
		} else {
			t++;
		}
		if(x == 1)
			break;
	}//endwhile
	return 0;
}
