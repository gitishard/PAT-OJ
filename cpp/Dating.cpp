#include<iostream>
#include<cstring>
using namespace std;

int pos = 0;

int main() {
    char first[60], second[60],third[60],fourth[60];
    char flag;
    string day,hour;
    cin>>first;
    cin>>second;
    cin>>third;
    cin>>fourth;
    
    int flen = strlen(first);
    int slen = strlen(second);
    int min = flen < slen ? flen : slen;
    for(int i = 0; i < min;i++){
        if(first[i] == second[i]){
            if(first[i] >= 'A' && first[i] <= 'G'){
                flag = first[i];
                pos = i;
                break;
            }
        }
    }
    switch(flag){
        case 'A':day = "MON ";break;
        case 'B':day = "TUE ";break;
        case 'C':day = "WED ";break;
        case 'D':day = "THU ";break;
        case 'E':day = "FRI ";break;
        case 'F':day = "SAT ";break;
        case 'G':day = "SUN ";break;
    }

    for(int i = 1; i < min - pos + 1;i++){
        if(first[pos+i] == second[pos+i]){
            if((first[pos+i] >= '0' && first[pos+i] <= '9') || (first[pos+i] >= 'A' && first[pos+i] <= 'N')){
                flag = first[pos+i];
                break;
            }
        }
    }
    switch(flag){
        case '0':hour = "00:";break;
        case '1':hour = "01:";break;
        case '2':hour = "02:";break;
        case '3':hour = "03:";break;
        case '4':hour = "04:";break;
        case '5':hour = "05:";break;
        case '6':hour = "06:";break;
        case '7':hour = "07:";break;
        case '8':hour = "08:";break;
        case '9':hour = "09:";break;
        case 'A':hour = "10:";break;
        case 'B':hour = "11:";break;
        case 'C':hour = "12:";break;
        case 'D':hour = "13:";break;
        case 'E':hour = "14:";break;
        case 'F':hour = "15:";break;
        case 'G':hour = "16:";break;
        case 'H':hour = "17:";break;
        case 'I':hour = "18:";break;
        case 'J':hour = "19:";break;
        case 'K':hour = "20:";break;
        case 'L':hour = "21:";break;
        case 'M':hour = "22:";break;
        case 'N':hour = "23:";break;
    }

   int tlen = strlen(third);
   int folen = strlen(fourth);
   int mmin = tlen < folen ? tlen : folen;
    for(int i = 0;i < mmin;i++){
        if(third[i] == fourth[i])
            if((third[i] >='a' && third[i] <= 'z') || (third[i] >='A' && third[i] <= 'Z')){
                 pos = i;
                 break;
            }
    }
    if(pos < 10){
        cout<<day<<hour;
        cout.fill('0');
        cout.width(2);
        min = pos;
        cout<<min;
    } else{
        min = pos;
        cout<<day<<hour<<min;
    }

    return 0;
}
