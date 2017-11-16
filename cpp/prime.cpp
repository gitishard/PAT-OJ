#include<iostream>
using namespace std;
//bool prime(int n) {
//    if (n == 2)
//        return true;
//    else{
//         int i = 2;
//         while(i < n){
//             if(n % i == 0)
//                 break;
//             i++;
//         }
//         if(i == n)
//             return true;
//         else 
//             return false;
//    }
//}
bool prime(int n){
    int i = 2;
    for(i = 2;i <= n / i;i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int M,N,i,j = 0,n = 0;
    cin>>M>>N;
    for(i = 2;;i++){ 
       if(prime(i)){
           j++;
           if(j >= M && j <= N){
               n++;
               if(n <= 9){
                   if(j != N)
                       cout<<i<<" ";
                   else{
                       cout<<i;
                       break;
                   }
               } else if(n >= 10){
                   cout<<i<<endl;
                   n = 0;
               }
           }
           if(j >= N) break;
       }
    }
    return 0;
}
