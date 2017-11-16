#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int N,num,flag = 1,x = 0,sum = 0,n = 0,A1 = 0,A2 = 0,A3 = 0,A5 = 0;
    double A4 = 0;
    cin>>N;
    while(N--){
        cin>>num;
        if(num % 5 == 0 && num % 2 == 0){
            A1 += num;
        } else if (num % 5 == 1){
            if (flag == 1){
                A2 += num;
                flag = 0;
             } else { 
                A2 -= num;
                flag = 1;
             }
             x = 1;
        } else if (num % 5 == 2){
            A3 += 1;
        } else if (num % 5 == 3){
            sum += num;
            n++;
            A4 = double(sum) / n;
        } else if(num % 5 == 4){
            if (num > A5){
                A5 = num;
            }
        }
    }
    if(A1 == 0)
        cout<<"N"<<" ";
    else
        cout<<A1<<" ";
    if(A2 == 0 && x != 1)
        cout<<"N"<<" ";
    else
        cout<<A2<<" ";
    if(A3 == 0)
        cout<<"N"<<" ";
    else
        cout<<A3<<" ";
    if(A4 == 0)
        cout<<"N"<<" ";
    else
        cout<<setiosflags(ios::fixed)<<setprecision(1)<<A4<<" ";
    if(A5 == 0)
        cout<<"N";
    else
        cout<<A5;

   // cout<<A1<<" "<<A2<<" "<<A3<<" "<<setiosflags(ios::fixed)<<setprecision(1)<<A4<<" "<<A5;
    return 0;
}
