#include <cstdio>
int main(int argc, char* argv[]){
	int N;
	long long A,B,C;
	scanf("%d", &N);
	for(int i = 1;i <= N; ++i){
		scanf("%ld%ld%ld",&A, &B, &C);
		long long rst = A + B;
		bool flag;
		if(A > 0 && B > 0 && rst < 0)
			//正溢出
			flag = true;
		else if(A < 0 && B < 0 && rst >= 0)
			//负溢出
			flag = false;
		else if(rst > C)
			flag = true;
		else
			flag = false;

		if(flag == true)
			printf("Case #%d: true\n", i);
		else
			printf("Case #%d: false\n", i);
	}//endfor
	return 0;
}