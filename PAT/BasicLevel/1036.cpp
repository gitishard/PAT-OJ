#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	int row, col;
	char C;
	cin >> col >> C;
	row = col % 2 == 0 ? col / 2 : col / 2 + 1;
	for(int i = 0;i < row; ++i){
		for(int j = 0;j < col; ++j){
			if(i == 0 || i == row - 1)
				cout << C;
			else if(j == 0 || j == col - 1)
				cout << C;
			else
				cout << " ";
		}//endfor
		cout << endl;
	}//endfor
	return 0;
}
