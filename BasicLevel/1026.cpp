#include <cstdio>
int main(int argc, char* argv[]){
	int c1, c2, num_s;
	int clk = 100;
	scanf("%d%d", &c1, &c2);
	//除以100后，后两位就是小数部分，其与50的大小关系决定是否舍入
	if((c1 - c2) % 100 > 50)
		num_s = (c2 - c1) / clk + 1;
	else
		num_s = (c2 - c1) / clk;
	printf("%02d:%02d:%02d", num_s / 3600, num_s % 3600 / 60, num_s % 60);
	return 0;
}
