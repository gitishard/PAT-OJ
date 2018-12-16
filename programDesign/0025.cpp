#include <stdio.h>
#define N 10
struct link{
	int data;
	link* next;
};
int main(int argc, char* argv[]){
	link *t,*p,*l,*q;
	l = new link;
	t = l;
	for(int i = 0;i < N; ++i){
		p = new link;
		p->data = i;
		l->next = p;
		l = p;
	}//endfor
	//print link
	p = t;
	for(int i = 0;i < N; ++i){
		p = p->next;
		printf("%d->",p->data);
	}//endfor
	printf("\n");
	//reverse
	p = t->next;//ｐ指向第一个结点
	t->next = l;//t->next指向最后一个结点
	while(p->data != l->data){//尾插法
		q = p->next;
		p->next = l->next;
		l->next = p;
		p = q;
	}//endwhile
	printf("reverse:");
	for(int i = 0;i < N; ++i){
		t = t->next;
		printf("%d",t->data);
	}//endfor
	printf("\n");
	return 0;
}
