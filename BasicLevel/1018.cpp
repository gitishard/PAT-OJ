#include <cstdio>
int win(char A, char B){
	//胜，平，负，1,0,-1
	int rst;
	switch(A){
		case 'C':
			if(B == 'C')
				rst = 0;
			else if(B == 'B')
				rst = -1;
			else
				rst = 1;
			break;
		case 'J':
			if(B == 'J')
				rst = 0;
			else if(B == 'C')
				rst = -1;
			else
				rst = 1;
			break;
		case 'B':
			if(B == 'B')
				rst = 0;
			else if(B == 'J')
				rst = -1;
			else
				rst = 1;
			break;
	}//endswitch
	return rst;
}
int index(char N){
	if(N == 'C')
		return 0;
	else if(N == 'J')
		return 1;
	else
		return 2;
}
char max(int rst[]){
	int max = rst[0];
	int flag = 0;
	if(max < rst[1]){
		max = rst[1];
		flag = 1;
	}
	if(max <= rst[2]){
		max = rst[2];
		flag = 2;
	}
	if(flag == 0)
		return 'C';
	else if(flag == 1)
		return 'J';
	else
		return 'B';
}
int main(int argc, char* argv[]){
	int N, flag, jia_rst[3] = {0}, yi_rst[3] = {0}, jia_win[3] = {0}, yi_win[3] = {0};
	char jia, yi;
	scanf("%d", &N);
	for(int i = 0;i < N; ++i){
		getchar();
		scanf("%c %c", &jia, &yi);
		flag = win(jia, yi);

		if(flag == 0){
			jia_rst[1]++;
			yi_rst[1]++;
		} else if(flag == 1){
			//甲胜
			jia_rst[0]++;
			yi_rst[2]++;
			jia_win[index(jia)]++;
		} else {
			//乙胜
			jia_rst[2]++;
			yi_rst[0]++;
			yi_win[index(yi)]++;
		}
	}//endfor

	printf("%d %d %d\n", jia_rst[0], jia_rst[1], jia_rst[2]);
	printf("%d %d %d\n", yi_rst[0], yi_rst[1], yi_rst[2]);
	printf("%c %c", max(jia_win), max(yi_win));
	return 0;
}
