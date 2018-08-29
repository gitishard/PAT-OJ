#include <cstdio>
int main(int argc, char* argv[]){
	int N, M,num[110];
	scanf("%d%d", &N, &M);
	M = M % N;
	for(int i = 0;i < N; ++i){
		scanf("%d", &num[i]);
	}//endfor
	for(int i = N - M;i < N; ++i){
		if(i == N-1)
			printf("%d", num[i]);
		else
			printf("%d ", num[i]);
	}
	for(int i = 0;i < N - M; ++i){
	  if(M == 0 && i == 0)
		  printf("%d", num[i]);
		else
		  printf(" %d", num[i]);
	}//endfor
	return 0;
}
