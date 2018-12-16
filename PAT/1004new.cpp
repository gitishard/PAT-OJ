#include <cstdio>
struct student {
	char name[11];
	char num[11];
	int score;
};
int main(int argc, char* argv[]){
	int N;
	student max, min, stu;
	max.score = 0;
	min.score = -1;
	scanf("%d", &N);
	for(int i = 0;i < N; ++i){
		scanf("%s %s %d", stu.name, stu.num, &stu.score);
		if(stu.score > max.score)
			max.score = stu.score;
		if(stu.score < min.score)
			min.score = stu.score;
	}//endfor
	printf("%s %d\n%s %d", max.name, max.score, min.name, min.score);
	return 0;
}
