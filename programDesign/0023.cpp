#include <stdio.h>
struct Date {
	int year;
	int mouth;
	int day;
};
int main(int argc, char* argv[]){
	Date date;
	int count=0;
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d,%d,%d",&date.year,&date.mouth,&date.day);
	if(date.year <1 ||date.mouth>12||date.mouth<1||date.day<1||date.day>31){
		printf("error");
		return 1;
	}
	if(date.day > days[date.mouth])
		return 1;
	if(date.year%4 == 0)
		days[2]=29;
	for(int i = 1;i < date.mouth; ++i){
		count += days[i];
	}//endfor
	count += date.day;
	printf("%d",count);
	return 0;
}
