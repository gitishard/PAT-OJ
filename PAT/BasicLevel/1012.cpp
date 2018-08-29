/*
	A1 = 能被5整除的数字中所有偶数的和
	A2 = 被5除后余1的数字交错求和n1-n2+n3-n4..
	A3 = 被5除后余2的数字个数
	A4 = 被5除后余3的数字平均数，精确到小数后1位
	A5 = 被5除后余4的数中最大的数
 */
#include <cstdio>
int main(int argc, char* argv[]){
	int A1 = 0, A2 = 0, A3 = 0, A4 = 0, A5 = 0, N, var, flag = 1, num = 0;
	scanf("%d", &N);
	for(int i = 0;i < N; ++i){
		scanf("%d", &var);
		int yu = var % 5;
		switch(yu){
			case 0://整除
				if(var % 2 == 0){
					A1 += var;
				}
				break;
			case 1://余1
				if(flag == 1){
					A2 += var;
					flag = 0;
				} else if(flag == 0){
					A2 += (-1) * var;
					flag = 1;
				}
				break;
			case 2://余2
				A3++;
				break;
			case 3://余3
				A4 += var;
				num++;
				break;
			case 4://余4
				if(var > A5)
					A5 = var;
				break;
		}//endswitch
	}//endfor
	if(A1 == 0)
		printf("%c ", 'N');
	else
		printf("%d ", A1);
	if(A2 == 0)
		printf("%c ", 'N');
	else
		printf("%d ", A2);
	if(A3 == 0)
		printf("%c ", 'N');
	else
		printf("%d ", A3);
	if(A4 == 0)
		printf("%c ", 'N');
	else
		printf("%.1f ", float(A4) / num);
	if(A5 == 0)
		printf("%c", 'N');
	else
		printf("%d", A5);
	return 0;
}
