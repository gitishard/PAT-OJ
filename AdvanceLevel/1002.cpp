#include <iostream>
#include <map>
#include <utility>
#include <iomanip>
using namespace std;

void display(map<int,float>);

int main(int argc, char* argv[]){
	int nzNuma,nzNumb,exp;
	float coe;
	map<int,float,greater<int>> A;

	cin >> nzNuma;
	while(nzNuma--){
		cin >> exp >> coe;
		A.emplace(exp,coe);
	}
	cin >> nzNumb;
	while(nzNumb--){
		cin >> exp >> coe;
		try{
			A.at(exp) += coe;
			if(A.at(exp) == 0){
				A.erase(exp);
			}
		} catch(const out_of_range& e){
			A.emplace(exp,coe);
		}
	}

	cout << A.size();
	for(auto it : A){
		cout << fixed;
		cout <<setprecision(1)<<" "<< it.first <<" " << it.second;
	}
	return 0;
}
