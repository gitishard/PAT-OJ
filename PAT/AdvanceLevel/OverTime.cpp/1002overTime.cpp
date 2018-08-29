#include <iostream>
#include <vector>
#include <utility>
#include <iomanip>
using namespace std;

vector<pair<int,float> > calculate(vector<pair<int,float> >,vector<pair<int,float> >);
void display(vector<pair<int,float> >);

int main(int argc, char* argv[]){
	int nzNuma,nzNumb,exp;
	float coe;
	vector<pair<int,float> > A;
	vector<pair<int,float> > B;
	vector<pair<int,float> > C;

	cin >> nzNuma;
	while(nzNuma--){
		cin >> exp >> coe;
		A.push_back(make_pair(exp,coe));
	}
	cin >> nzNumb;
	while(nzNumb--){
		cin >> exp >> coe;
		B.push_back(make_pair(exp,coe));
	}
	C = calculate(A,B);
	display(C);
	return 0;
}
vector<pair<int,float> > calculate(vector<pair<int,float> > A,vector<pair<int,float> > B){
	float sum;
	vector<pair<int,float> > C;
	vector<pair<int,float> >::iterator it_A,it_B;
	it_A = A.begin();
	it_B = B.begin();
	while(it_A != A.end() && it_B != B.end()){
		if(it_A->first == it_B->first){
			sum = it_A->second + it_B->second;
			if(sum != 0){
				C.push_back(make_pair(it_A->first,sum));
				it_A++;
				it_B++;
			}
		} else if(it_A->first > it_B->first) {
			C.push_back(make_pair(it_A->first,it_A->second));
			it_A++;
		} else {
			C.push_back(make_pair(it_B->first,it_B->second));
			it_B++;
		}
	}
	if(it_A != A.end()){
		for(;it_A != A.end();++it_A){
			C.push_back(make_pair(it_A->first,it_A->second));
		}
	} else {
		for(;it_B != B.end();++it_B){
			C.push_back(make_pair(it_B->first,it_B->second));
		}
	}
	return C; 
}
void display(vector<pair<int,float> > C){
	int num = C.size();
	cout << num;
	for(auto it : C){
		cout << fixed;
		cout <<setprecision(1)<<" "<< it.first <<" " << it.second;
	}
}
