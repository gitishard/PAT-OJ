/*
 输入由一行整数组成的数组，输出数组中小于此整数的数字个数
 
 输入格式：
 第一行：先输入数组元素的个数N,测试用例数M
 第二行：输入数组，空格隔开
 输出格式：
 小于给定M的数字的个数
eg:
input:
	7 5
	1 4 3 9 5 6 6
output:
	3
 */
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char* argv[]){
	int N,M;
	int count=0;
	vector<int> A(N);
	for(int i = 0;i < N; ++i){
		cin >> A[i];
		if(A[i] < M)
			count++;
	}//endfor
	cout << count;
	return 0;
}
