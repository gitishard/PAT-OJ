#include <stdio.h>
#include <stdlb.h>
int main(int argc, char* argv[]){
	FILE *fp;
	char str[2000],ch;
	fp = fopen("./file/file.txt","r");
	if(!fp){
		printf("cannot open");
		exit(0);
	}
	while(!feof(fp)){
		fscanf(fp,"%s",str);
		str[80]='\0';
		printf("%s",str);
		i++;
		if(i== 24){
			printf("continue?y/n:");
			ch = getchar();
			if(ch == 'n')break;
			i =0;
		}
	}
	fclose(fp);
	return 0;
}
