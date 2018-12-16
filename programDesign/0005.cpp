#include <stdio.h>
int main(int argc, char const *argv[])
{
    for(int i = 0; i < 26; ++i){
        //for(int j = 0; j < num; ++j)
        for(int j = 30; j > i+3; j--)
           printf(" ");
        for(int j = 0; j < i; ++j)
            printf("%c ", 65 + j);
        printf("\n");
    }
    return 0;
}
