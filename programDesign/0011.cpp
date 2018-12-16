#include <stdio.h>
#define max 10
typedef struct Num{
	int data;
	int pos;
}num;
int main(int argc, char* argv[]){
	num Num[max];
	for(int i = 1;i <= max; ++i){
		scanf("%d",&Num[i].data);
		Num[i].pos = i;
	}//endfor
	for(int i = max;i > 0; --i){
		for(int j = 0;j < i; ++j){
			if(Num[j].data > Num[j+1].data){
				num t = Num[j];
				Num[j] = Num[j+1];
				Num[j+1] = t;
			}
		}//endfor
	}//endfor
	for(int i = 1;i <= max; ++i){
		printf("%d, %d\n", Num[i].data, Num[i].pos);
	}//endfor
	return 0;
}
