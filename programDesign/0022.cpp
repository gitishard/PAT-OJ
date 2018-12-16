#include <stdio.h>
int comp(char s1[], char s2[]){
	char *p1,*p2;
	p1 = s1;
	p2 = s2;
	while(1){
		if(*p1 != '\0' && *p2 != '\0'){
			if(*p1 == *p2){
				p1++;
				p2++;
			} else if(*p1>*p2){
				return 1;
			} else
				return 2;
		}
		if(*p1 == '\0')
			return 2;
		else if(*p2 == '\0')
			return 1;
	}
}
void sort(cahr s1[],char s2[],char s3[],int id[]){
	if(comp(s1,s2) == 1 && comp(s1,s3) == 1){
		id[0] = 1;
		if(comp(s2,s3)==1){
			id[1]=2;
			id[3]=3;
		} else if(comp(s2,s3) == 2){
			id[1]=3;
			id[2]=2;
		}
	}
	if(comp(s1,s2)==2&&comp(s3,s2)==2){
		id[0]=2;
		if(comp(s1,s3)==1){
			id[1]=1;
			id[2]=3;
		} else if(comp(s1,s3)==3){
			id[1]=3;
			id[2]=1;
		}
	}
	if(comp(s3,s2)==1&&comp(s1.s3)==2){
		if(comp(s2,s1)==1){
			id[1]=2;
			id[2]=3;
		} else if(comp(s2,s1)==2){
			id[1]=1;
			id[2]=2;
		}
	}
}
int main(int argc, char* argv[]){
	char sl[10],s2[10],s3[10];
	int id[3];
	for(int i = 0;i < 3; ++i){
		id[i] = 0;
	}//endfor
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s3);
	sort(s1,s2,s3,id);
	for(int i = 0;i < 3; ++i){
		if(i!=0)
			printf("s%d>",id[i]);
		else
			printf("s%d",id[i]);
	}//endfor
	return 0;
}
