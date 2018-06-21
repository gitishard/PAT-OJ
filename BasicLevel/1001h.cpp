#include <iostream>
using namespace std;
int Count(int i);
int main(int argc, char* argv[]){
	int n;
	while(cin >> n){
		cout << Count(n);
	}
	return 0;
}
int Count(int i){
	int count = 0;
	while(i != 1){
		if(i%2){
			i = (3*i + 1)/2;
			count++;
		} else {
			i /= 2;
			count++;
		}
	}
	return count;
}
