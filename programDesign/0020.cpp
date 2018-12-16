#include <stdio.h>
void print(int x){
	if(x <10)
		printf("%d",x);
	else{
		printf(%d,x%10);
		print(x/10);
	}
}
int main(int argc, char* argv[]){
	int x;
	scanf("%d",&x);
	printf("reverse:");
	print(x);
	return 0;
}
