#include <stdio.h>
int main(int argc, char const *argv[])
{
    int g,s,b;
    int f = 0;
    int flag = 0;
    for(int i = 0; i < 999; i++)
    {
        g = i % 10;
        s = (i / 10) % 10;
        b = i / 100;
        
        if ((i % 3 == 0) && ((g == 5) || (s == 5) || (b == 5))) {
            printf("%d ", i);
            f++;
            flag = 1;
        }
        if(f % 5 == 0 && flag == 1){
            printf("\n");
            flag = 0;
        }
    }
       
    return 0;
}
