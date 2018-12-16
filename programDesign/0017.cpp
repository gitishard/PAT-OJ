#include <stdio.h>
int digui(int x){
	if(x == 1)
		return 1;
	return x*digui(x-1);
}
int main(int argc, char* argv[]){
	int n;
	scanf("%d",&n);
	printf("n!=%d",digui(n));
	return 0;
}
