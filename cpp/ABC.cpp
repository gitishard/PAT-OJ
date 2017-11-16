#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int T;
    double in[3];
    string ans[10];
	cin>>T;
    for (int i = 0; i < T; i++) {
        cin >> in[0] >> in[1] >> in[2];
        if(in[0] + in[1] > in[2] && in[0] + in[1] <= 2*pow(2,31) && in[0] + in[1] >= 2*pow(-2,31)){
	    cout<<in[0]<<endl;
	    cout<<in[1]<<endl;
	    cout<<in[0]+in[1]<<endl;
            ans[i]=": true";
	}
        else
            ans[i]=": false";	
    }
    for (int i = 0; i < T; i++) {
    	cout<<"Case #"<<i+1<<ans[i]<<endl;
    }
    return 0;
}
