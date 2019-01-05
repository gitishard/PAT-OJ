#include <cstdio>
struct Student {
	char name[11];
	char num[11];
	int score;
};
int main(int argc, char* argv[]){
	int N;
	Student max, min, stu;
	max.score = 0;
	min.score = 120;
	scanf("%d", &N);
	for(int i = 0;i < N; ++i){
		scanf("%s %s %d", stu.name, stu.num, &stu.score);
		if(stu.score > max.score)
			max = stu;
		if(stu.score < min.score)
			min = stu;
	}//endfor
	printf("%s %s\n%s %s\n", max.name, max.num, min.name, min.num);
	return 0;
}
