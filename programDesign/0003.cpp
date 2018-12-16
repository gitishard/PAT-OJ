#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[5] = {'A','B','C','D','E'};
    for(int i = 0; i < 5; ++i){
        //t确定每一行的第一个元素是谁
        int t = i;
        //j用来循环五次，因为一行有５个元素，每一行元素都是前一个元素在循环队列中的下一个
        for(int j = 0; j < 5; j++)
        {
            printf("%c ", str[t%5]);
            t++;
        }
        printf("\n");
    }   
    return 0;
}
