#include <stdio.h>
int main(int argc, char* argv[]){
	int m[5][5];
	for(int i = 0;i < 5; ++i){
		for(int j = 0;j < 5; ++j){
			if(i >= j)
				m[i][j] = 1;
			else
				m[i][j] = j-i+1;
		}//endfor
	}//endfor
	for(int i = 0;i < 5; ++i){
		for(int j = 0;j < 5; ++j){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for(int i = 0;i < 5; ++i){
		for(int j = 0;j < 5; ++j){
			if(i != j)
				m[i][j]=0;
		}
	}
	for(int i = 0;i < 5; ++i){
		for(int j = 0;j < 5; ++j){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
