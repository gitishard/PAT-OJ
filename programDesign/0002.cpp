#include <cstdio>
#include <cmath>
int main(int argc, char const *argv[])
{
    /*
        0~180，每隔5度，输出该度的正弦和余弦   
    */
   double du = 0;
   double pi = 3.1415926;
   while(du <= 180){
       printf("x = %lf, sin(x) = %lf, cos(x) = %lf\n", du, sin(du * pi / 180), cos(du * pi / 180));
       du += 5;
   }
    return 0;
}
