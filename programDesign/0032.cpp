#include <stdio.h>
#include <stdlib.h>
#define  num 3
struct Stu{
	char id[10];
	char name[10];
	char sex;
	float course1;
	float course2;
	float ave;
}stu[num];
int main(int argc, char* argv[]){
	FILE *fp;
	fp = fopen("./file/file.txt","w");
	if(!fp){
		exit(0);
	}
	for(int i = 0;i < num; ++i){
		printf("input id:");
		scanf("%s",stu[i].id);
		printf("input name:");
		scanf("%s",stu[i].name);
		printf("input sex:");
		scanf("%c",stu[i].sex);
		printf("input course1:");
		scanf("%d",stu[i].course1);
		printf("input course2:");
		scanf("%d",stu[i].course2);
		stu[i].ave = (stu[i].course1 + stu[i].course2)/2;
	}//endfor
	fprintf(fp,"学号　姓名　性别　成绩１　成绩２　平均分\n");
	for(int i = 0;i < num; ++i){
		fprintf(fp,"%s%s%c%5.2f%5.2f%5.2f",stu[i].id,stu[i].name,stu[i].sex,stu[i].course1,stu[i].course2,stu[i].ave);
		fclose(fp);
	}//endfor
	return 0;
}
