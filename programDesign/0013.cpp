#include <stdio.h>
int main(int argc, char* argv[]){
	int b[6][6], sum_jiao=0,sum_ubian=0,sum_bian=0,ji=1;
	//input data
	for(int i = 0;i < 6; ++i){
		for(int j = 0;j < 6; ++j){
			scanf("%d",&b[i][j]);
		}//endfor
	}//endfor
	for(int i = 0;i < 6; ++i){
		for(int j = 0;j < 6; ++j){
			if(i == j || i+j==5){
				sum_jiao += b[i][j];
				ji *= b[i][j];
			}
			if(i > 0 && i <5 && j >0 && j<5)
				sum_ubian += b[i][j];
			if(i == 0 || i == 5 || j == 0 || j==5)
				sum_bian += b[i][j];
		}
	}
	printf("jao %d,bian %d,ubian %d,ji %d", sum_jiao, sum_bian,sum_ubian,ji);
	for(int i = 0;i < 6; ++i){
		for(int j = 0;j < 6; ++j){
			if(i == j || i+j ==5)
				b[i][j] = 1;
			else
				b[i][j] = 0;
		}
	}
	for(int i = 0;i < 6; ++i){
		for(int j = 0;j < 6; ++j){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
