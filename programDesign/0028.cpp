#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmpstr(char *s1, char *s2){
	for(int i = 1;; ++i){
		if(s1[i-1] == '\0' && s2[i-1] == '\0'){
			i = 0;
			break;
		}
		if(s1[i-1] == '\0' || s2[i-1] == '\0'||s1[i-1] !=s2[i-1]){
			break;
		}
		return i;
	}//endfor
}
int main(int argc, char* argv[]){
	FILE *fp1,*fp2;
	char l1[100],l2[100];//存入读入的一行字符
	int ln = 1,rn = 1;
	fp1 = fopen("./file/file1.txt","r");
	if(!fp1){
		printf("cannot open!");
		exit(0);
	}
	fp2 = fopen("./file/file2.txt","r");
	if(!fp2){
		printf("cannot open!");
		exit(0);
	}
	while(!feof(fp1) && !feof(fp2)){
		fscanf(fp1,"%s",l1);
		fscanf(fp2,"%s",l2);
		rn = cmpstr(l1,l2);
		if(rn != 0)
			break;
		rn = 1;
		ln++;
	}
	fclose(fp1);
	fclose(fp2);
	printf("row:%dline:%d",ln,rn);
	return 0;
}
