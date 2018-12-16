/*约瑟夫环*/
#include <stdio.h>
#define renshu 10
int main(int argc, char* argv[]){
	int a[renshu],n;
	scanf("%d%d",&renshu,&n);
	for(int i = 0;i < renshu; ++i){
		a[i] = i+1;//对人进行编号
	}//endfor
	printf("出圈编号:");
	for(int j = renshu;i > 0; j--){
		i = (i+n-1)%j;
		printf("%d",a[i]);
		for(int k = 0;k < j-1; ++k){
			a[k] = a[k+1];
		}//endfor
	}//endfor
	return 0;
}
