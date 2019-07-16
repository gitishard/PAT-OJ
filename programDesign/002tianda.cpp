/*
 十进制转化为八进制
 */
#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	int num, rst;
	stack<int> st;
	cin >> num;
	while(num){
		rst = num % 8;
		st.push(rst);
		num = num / 8;
	}
	while(!st.empty()){
		cout << st.pop();
	}//endwhile
	return 0;
}
