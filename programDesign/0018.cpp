#include <stdio.h>
int digit(int x, int k){
	int s;
	for(int i = 1;i < k; ++i){
		n /= 10;
		s = n%10;
	}//endfor
	return s;
}
int main(int argc, char* argv[]){
	int n,k;
	scanf("%d%d",&n,&k);
	printf("digit(%d.%d) = %d",digit(n,k));
	return 0;
}
