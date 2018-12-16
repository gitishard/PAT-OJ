#include <stdio.h>
#define max 20
int main(int argc, char* argv[]){
	int a[max], len = 0, t;
	printf("Please input the seirce unsorted:");
	//input data
	while(1){
		scanf("%d",&a[len++]);
		if(len >= max || a[len-1] == -1)
			break;
	}
	//sort
	for(int i = len-2;i >=0; --i){
		for(int j = 0;j < i; ++j){
			if(a[j] > a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}//endfor
	}//endfor
	//output 
	printf("data after sort: ");
	for(int i = 0;i < len-1; ++i){
		printf("%d ",a[i]);
	}//endfor
	//insert
	printf("\nplease input the data need to be inserted:");
	scanf("%d",&t);
	//find postion
	int i=0;
	while(a[i]<t && i < len-1){
		i++;
	}//endwhile
	for(int j = len-1;j > i; j--){
		a[j] = a[j-1];
	}//endfor
	a[i] = t;
	//len += 1;
	for(int i = 0;i < len; ++i){
		printf("%3d",a[i]);
	}//endfor
	return 0;
}
