#include <iostream>
#include <string>
using namespace std;

string addSymbol(int);

int main(int argc, char* argv[]){
	int a,b,sum;
	string s;
	while(cin >> a >> b){
		sum = a+b;
		s = addSymbol(sum);
		cout << s;
	}
	return 0;
}
string addSymbol(int sum){
	int pos,times,offset = 0;
	string str = to_string(sum);
	int len = str.length();
	
	if(sum < 0){
		len -= 1;
		offset = 1;
	}

	times = (len-1) / 3;
	while(times){
		pos = len - 3*times + offset;
		if(pos > 0){
			str.insert(pos,1,',');
			times--;
			offset++;
		}
	}
	return str;
}
