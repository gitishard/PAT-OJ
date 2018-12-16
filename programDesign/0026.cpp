#include <stdio.h>
#define T 13
struct Num{
	int index;
	Num* next;
};
int main(int argc, char* argv[]){
	Num *man,*t,*p,*q;
	int totle = T,flag = 0;
	//initialize
	man = new Num;
	man->index = 1;
	p = man;
	for(int i = 2;i < T; ++i){
		t = new Num;
		t->index = i;
		p->next = t;
		p = t;
	}//endfor
	p->next = man;//首尾相连
	p = man->next;
	q = man;
	flag=1;
	while(1){
		if (flag == 2) {//删除报数３的人
			q->next = p->next;
			delete p;
			p = q->next;
			totle--;
			flag=0;
		} else {
			q = p;
			p = p->next;
			flag++;
		}
		if(totle < 3){
			man = q;
			break;
		}
	}//endwhile
	printf("最后留在圈子里的人原来的编号：");
	for(int i = 0,p = man;i < totle; ++i){
		printf("%d\n",p->index);
		p = p->next;
	}//endfor
	return 0;
}
