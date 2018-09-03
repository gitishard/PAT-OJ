#include <string>
#include <iostream>
using namespace std;
int N;
string deal(string str, int &e){
  int k = 0,num = 0;
	string rst;
	//delete zeros before str
	while(str.length() > 0 && str[0] == '0'){
		str.erase(str.begin());
	}
	/*judge str is integer or not
	  if it is integer, just delete point
	  else delete point and the zeros before it
	 */
	if(str[0] == '.'){
		str.erase(str.begin());//delete the point
		while(str.length() > 0 && str[0] == '0'){
			str.erase(str.begin());
			e--;
		}
	} else {
		while(k < str.length() && str[k] != '.'){
			k++;
			e++;
		}
		//find the point
		if(k < str.length()){
			str.erase(str.begin()+k);
		}
	}
	//deal the str after pre-deal
	//just str's length is 0?
	if(str.length() == 0)
		e = 0;//the number is 0
	
	k = 0;
	while(num < N){//还没达到精度
		if(k < str.length())
			rst += str[k++];
		else
			rst += '0';
		num++;
	}//endwhile
	return rst;
}

int main(int argc, char* argv[]){
	int e1 = 0, e2 = 0;
	string A,B,s1,s2;
	cin >> N >> A >> B;
	s1 = deal(A,e1);
	s2 = deal(B,e2);
	if(s1 == s2 && e1 == e2)
		cout << "YES 0." << s1 << "*10^" << e1<< endl;
	else
		cout << "NO 0." << s1 << "*10^" << e1 << " 0." << s2 << "*10^"<<e2<<endl;
	return 0;
}
