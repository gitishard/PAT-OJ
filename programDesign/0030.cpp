#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	FILE *fp1,*fp2;
	char ch,ch1;
	fp1 = fopen("./file/source.txt/","r");
	if(!fp1){
		exit(0);
	}
	fp2 = fopen("./file/target.txt/","r");
	if(!fp2){
		exit(0);
	}
	ch = fgetc(fp1);
	if(ch== EOF){
		printf("there is nothing");
		flose(fp1);
		exit(0);
	}
	ch1 = fgetc(fp1);
	for(;;){
		if(ch == '/' && ch1 == '/'){//取消//
			while(ch1 != EOF && ch1 !='\n'){
				ch1 = fgetc(fp1);
			}//endwhile
			ch = EOF;
		}
		if(ch == '/' && ch1 == '*'){
			//取消/**/
			while(ch1 != EOF && !(ch == '*' && ch1 == '/')){
				ch = ch1;
				ch1 = fgetc(fp1);
			}//endwhile
			if(ch1 != EOF)
				ch1 = fgetc(fp1);
			ch = EOF;
		}
		if(ch != EOF){
			fputc(ch,fp2);
			putchar(ch);
		}
		if(ch1 == EOF) break;
		ch = ch1;
		ch1 = fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
