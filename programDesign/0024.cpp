#include <stdio.h>
struct Stu {
	int id;
	char name[10];
	char sex;
	int score[3];
};
int main(int argc, char* argv[]){
	Stu stu[10];
	printf("input the data,id name sex score");
	for(int i = 0;i < 10; ++i){
		scanf("%d%s,%c,%d%d%d",&stu[i].id,stu[i].name,&stu[i].sex,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
	}//endfor
	int max = stu[0].score[0]+stu[0].score[1]+stu[0].score[2];
	for(int i = 1;i < 10; ++i){
		if(max < stu[i].score[0]+stu[i].score[1]+stu[i].score[2])
			max = i;
	}//endfor
	printf("id=%d,name=%s",stu[max].id,stu[max].name);
	for(int i = 0;i < 10; ++i){
		if(stu[i].score[0]<60||stu[i].score[1]<60||stu[i].score[3]<60)
			printf("%d%s%c%d%d%d",stu[i].id,stu[i].name,stu[i].sex,stu[i].score[0],stu[i].score[1],stu[i].score[2]);
	}//endfor
	return 0;
}
