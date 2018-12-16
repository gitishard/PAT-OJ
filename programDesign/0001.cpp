/*
 给出一个不多于５位数的正整数，
 １．要求出其是几位数
 ２．分别输出每一位数
 ３．逆序输出
 	
	通过%10取个位，
 	通过/10取个位之前的数
 */
#include <cstdio>
int main(int argc, char* argv[]){
	int num, j = 0;
	int a[6];
	scanf("%d", &num);

	//判断数的格式，五位数
	if(num > 99999 || num < 0)
		printf("Illegal format");
	else {
		while(num % 10){
			a[j++] = num % 10;
			num = num / 10;
		}//endwhile

		//判断位数，前面是0的不是合法数位
		int t = j - 1;
		while(a[t] == 0 && t >= 0)
			t--;
		printf("一共有%d位\n", t);
		printf("每一位分别为：");
		for(int i = j-1;i >= 0; --i){
			printf("%d ", a[i]);
		}//endfor
		printf("\n");
		printf("逆序是:");
		for(int i = 0;i < j; ++i){
			printf("%d", a[i]);
		}//endfor
	}
	return 0;
}
