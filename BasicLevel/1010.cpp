#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	int cef, exp;
	vector<int> rst;
	while(scanf("%d%d", &cef, &exp) != EOF){
		if(cef != 0 && exp != 0){
			rst.push_back(cef *  exp);
			rst.push_back(exp - 1);
		}
	}//endwhile
	if(rst.size() == 0)
		printf("0 0");
	else {
		for(vector<int>::iterator i = rst.begin();*i != rst.back(); ++i){
			printf("%d ", *i);
		}//endfor
		printf("%d",rst.back());
	}
	return 0;
}
