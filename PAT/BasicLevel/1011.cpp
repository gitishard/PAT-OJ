#include <cstdio>
int main(int argc, char* argv[]){
	int T;
	int num = 1;
	scanf("%d", &T);
	while(T--){
		double A, B, C;
		scanf("%lf%lf%lf", &A, &B, &C);
		if(A + B > C){
			printf("Case #%d: true\n", num++);
		} else {
			printf("Case #%d: false\n", num++);
		}
	}//endwhile
	return 0;
}
