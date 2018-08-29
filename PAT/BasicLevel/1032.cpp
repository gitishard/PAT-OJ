#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char* argv[]){
	int N,id,score;
	cin >> N;
	vector<int> info(N, 0);
	for(int i = 0;i < N; ++i){
		cin >> id >> score;
		info[id] += score;
	}//endfor

	int max = -1, id = 1;
	for(int i = 0; i < N; ++i){
		if(info[i] > max){
			id = i;
			max = info[i];
		}
	}
	cout << id << " " << max;
	return 0;
}
