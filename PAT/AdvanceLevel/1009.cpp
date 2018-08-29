#include <cstdio>
#include <vector>
#include <utility>
#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	int N, M, exp ,count = 0;
	double cef;
	vector<pair<int,double> > A;
	scanf("%d", &N);
	for(int i = 0;i < N; ++i){
		scanf("%d %lf", &exp, &cef);
		A.push_back(make_pair(exp, cef));
	}//endfor

	scanf("%d", &M);
	vector<double> rst(2001,0.0);
	for(int i = 0;i < M; ++i){
		scanf("%d %lf", &exp, &cef);
		for(int j = 0;j < N; ++j){
			rst[exp + A[j].first] += (cef * A[j].second);
		}//endfor
	}//endfor
	
	for(vector<double>::iterator it = rst.begin(); it != rst.end(); ++it)
	  if(*it != 0.0)
		count++;
	
	printf("%d", count);
	for(int i = 2000;i >= 0; --i){
		if(rst[i] != 0.0)
			printf(" %d %.1f", i, rst[i]);
	}//endfor
	return 0;
}
