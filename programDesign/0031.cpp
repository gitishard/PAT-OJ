#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	FILE *fp1,*fp2,*fp3;
	char ch,c[100];
	int num;
	fp1 = fopen("./file/file.txt","r");
	if(!fp1){
		printf("cannot opne");
		exit(0);
	}
	fp2 = fopen("./file/file2.txt","r");
	if(!fp2){
		printf("cannot opne");
		exit(0);
	}
	ch = fgetc(fp1);
	int i = 0;
	while(ch != EOF && ch!='\n'){
		if(i>=100) break;
		c[i++] = ch;
		ch = fgetc(fp1);
	}//endwhile
	int k = i;
	ch = fgetc(fp2);
	while(ch!=EOF) && ch!='\n'{
		if(i >= 1000-k) break;
		c[i++] = ch;
		ch = fgetc(fp2);
	}//endwhile
	fclose(fp1);
	fclose(fp2);
	c[i] ='\0';
	num = i-1;
	printf("A+B=%s",c);
	//sort
	for(int i = 0;i < num-1; ++i){
		for(int j = num;j < i+1; j--){
			if(c[j] < c[j-1]){
				ch = c[j-1];
				c[j] = c[j-1];
				c[j-1] = ch;
			}
		}//endfor
	}//endfor
	printf("C:%s",c);
	fp3 = fopen("./file/C.txt","w");
	if(!fp3){
		exit(0);
	}
	for(int i = 0;i <= num; ++i){
		fputc(c[i],fp3);
	}//endfor
	fclose(fp3);
	return 0;
}
