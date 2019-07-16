/*
	每杯水5元．开始时你没有前，顾客给你的只可能是5,10,20，其必须正确找零
	如果可以给每位顾客正确找零，则返回true否则返回false
 */
#include <iostream>
#include <vector>
using namespace std;
/*
	in:5  out:0
	in:10 out:5
	in:20 out:15
 */
bool charge(vector<int>& bills){
	int i = 0,fiveC = 0,sum = 0;
	while(i < bills.size()){
		if(bills[i] == 5){
			sum += 5;
			fiveC++;
		}
		else if(bills[i] == 10){
			if(fiveC){
				sum += 5;
				fiveC--;
			} else
				return false;
		} else if(bills[i] == 20){
			if(sum >= 15 && fiveC){
				sum += 5;
				fiveC--;
			} else
				return false;
		}
		i++;
	}
	return true;
}
int main(int argc, char* argv[]){
	vector<int> bills;
	int N;
	cin >> N;
	for(int i = 0;i < N; ++i){
		cin >> bills[i];
	}//endfor
	cout << charge(bills);
	return 0;
}
