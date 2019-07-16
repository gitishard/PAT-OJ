#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char* argv[]){
	int city[1000][1000], N,M;
	int x,yi,rst=0;
	scanf("%d %d",&N,&M);
	while(M--){
		scanf("%d %d",&x,&y);
		//right-left coner
		if(x > y){
			int t = x;
			x = y;
			y = t;
		}
		city[x][y] = 1;
	}
	
	return 0;
}
