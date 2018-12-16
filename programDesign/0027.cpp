#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	FILE *fp1,*fp2;
	char ch;
	fp1 = fopen("./file/source.txt","r");
	if(fp1 == NULL){
		printf("cannot open!");
		exit(0);
	}
	fp2 = fopen("./file/target.txt","w");
	if(fp2 == NULL){
		printf("cannot open!");
		exit(0);
	}
	ch = fgetc(fp1);
	while(ch != EOF){
		if(ch >= 'A' && ch <= 'Z')
			ch += 32;
		fputc(ch,fp2);
		ch = fgetc(fp1);
	}//endwhile
	fclose(fp1);
	fclose(fp2);
	return 0;
}
