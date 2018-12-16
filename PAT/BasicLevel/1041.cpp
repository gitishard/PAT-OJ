#include <cstdio>
#include <string>
#include <vector>
#include <utility>
#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	int N, M, ji_num, kao_num;
	string id;
	cin >> N;
	vector<pair<string, int> > info(N+2);
	for(int i = 0;i < N; ++i){
		cin >> id >> ji_num >> kao_num;
		info[ji_num] = make_pair(id, kao_num);
	}//endfor
	cin >> M;
	for(int i = 0;i < M; ++i){
		cin >> ji_num;
		cout << info[ji_num].first << " " <<info[ji_num].second << endl;
	}//endfor
	return 0;
}
