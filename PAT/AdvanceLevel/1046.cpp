#include <cstdio>
#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char* argv[]){
	int N, M, a, b, total = 0;
	vector<int> dist, rst;
	vector<pair<int,int> > pairs;
	
	//input
	scanf("%d", &N);
	for(int i = 0;i < N; ++i){
		scanf("%d", &a);
		total += a;
		dist.push_back(total);
	}
	scanf("%d", &M);
	for(int i = 0;i < M; ++i){
		scanf("%d%d", &a,&b);
		pairs.push_back(make_pair(a,b));
	}

	//tackle
	for(int i = 0;i < M; ++i){
		int beg = pairs[i].first-1;
		int end = pairs[i].second-1;
		if(beg > end)
		  swap(beg, end);
		int d = dist[end-1] - dist[beg-1];
		rst.push_back(min(total-d, d));
	}//endfor

	//output
	for(int i = 0;i < M-1; ++i){
		printf("%d\n", rst[i]);
	}
	printf("%d", rst[M-1]);
	return 0;
}
