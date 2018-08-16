/*
 N(<=10^5) 考生人数，L(>=60) 录取分数线，H(<100) 优先录取线
（对于德分与才分都＞＝L的，按照H进行排序）
 对于H(排序用):
	1.德才全尽，德分，才分均高(>=H)，按总分降序排序
	2.德胜才，才分不到(<H)，德分到线(>=H)，按总分降序排序，且排在第一类后面
	3.才德兼，德分，才分均不到(<H)，但德不低于才，按总分，排在第二类后面
	4.其他达到L的按照总分排在第三类后面
 输入：准考证８位，德分，才分
 输出：达到最低分数线的人数M
	   总分相同，按德分降序排序，德分并列，按照准考证号升序排序	
 */
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct Student{
	char id[10];
	int de,cai,sum;
	int flag;
}stu[100010];

bool cmp(Student a, Student b) {
	if(a.flag != b.flag) return a.flag < b.flag;	//按照类别排序，升序
	else if(a.sum != b.sum) return a.sum > b.sum;	//按照总分排序，降序
	else if(a.de != b.de) return a.de > b.de;		//按照德分排序，降序
	else return strcmp(a.id, b.id) < 0;				//按照考号排序，升序
}

int main() {
	int N, L, H, M;
	scanf("%d%d%d", &N, &L, &H);
	M = N;
	for(int i = 0;i < N; ++i){
	  scanf("%s%d%d", stu[i].id, &stu[i].de, &stu[i].cai);
		stu[i].sum = stu[i].de + stu[i].cai;
		if(stu[i].de < L || stu[i].cai < L){
			stu[i].flag = 5;
			M--;
		} else if(stu[i].de >= H && stu[i].cai >= H){
			stu[i].flag = 1;
		} else if(stu[i].de >= H && stu[i].cai < H){
			stu[i].flag = 2;
		} else if(stu[i].de >= stu[i].cai){
			stu[i].flag = 3;
		} else {
			//de < H && cai < H && de < H or de < H && cai > H
			stu[i].flag = 4;
		}
	}//endfor

	sort(stu, stu + N, cmp);
	printf("%d\n", M);
	for(int i = 0;i < M; ++i){
		printf("%s %d %d\n", stu[i].id, stu[i].de, stu[i].cai);
	}//endfor
	return 0;
}