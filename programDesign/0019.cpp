#include <stdio.h>
int dyear(int y,int x){
	//根据当年的一月一日是星期几来判断下一年元旦是星期几
	if(y%4==0 && y%100!=0 || y%400==0){
		x+=2;
	} else
		x+=1;
	return x;
}
int getday(int y, int m,int d, int x){
	//获得星期几
	int count = 0;
	x -= 1;
	for(int i = 0;i < m; ++i){
		if(i==4||i==6||i==9||i==11){
			for(int j = 1;j <=30; ++j){
				if(x<6)
					x++;
				else
					x = 0;
			}//endfor
		} else if((i==2)&& (y%4==0&&y%100!=0||y%400==0)){
			for(j=1;j<=29;++j)
				if(x<6)
					x++;
				else
					x=0;
		} else if(i == 2)
			for(j=1;j<=28;j++)
				if(x<6)
					x++;
				else
					x=0;
		else
			for(j=1;j<=31;j++)
				if(x<6)
					x++;
				else
					x=0;

	}//endfor
	for(j = 1; j<=d;j++){
		if(x<6)
			x++;
		else
			x=0;
	}
	return x;
}
int main(int argc, char* argv[]){
	int y,m,d;
	printf("year:");
	scanf("%d",&y);
	if(y<=1980){
		printf("error");
		return;
	}
	printf("mouth");
	scanf("%d",&m);
	if(m<1||m>12){
		printf("error");
		return;
	}
	printf("day");
	scanf("%d",&d);
	if((y%4==0&&y%100!=0||y%400==0)&&(d<1||d>29)){
		printf("error");
		return;
	} else if(m == 2&& (d<1||d>28)){
		printf("error");
		return;
	} else if((m == 4||m == 6||m==9||m==11)&& (d<1||d>30)){
		printf("error");
		return;
	}else if(d<1||d>31){
		printf("error");
		return;
	}
	int t=2;
	for(int i = 1980;i < y; ++i){
		t = dyear(i,t);
	}//endfor
	printf("%dy%dm%dis星期%d",y,m,d,getday(y,m,d,t));
	return 0;
}
