#include <cstdio>
#include <cstring>
void assign(char*a,char*b,int len){
    for(int i = 0;i < len; ++i){
        a[i] = b[i];
    }//endfor
}
int main(int argc, char const *argv[])
{
    /*
        输入：N,输入数据的个数
        输出：有效年龄的个数　年龄最大的名　年龄最小的名  
    */
   int N, count = 0;
   char max[6], min[6], max_d[11] = "2014/09/06", min_d[11] = "1814/09/06", name[6], date[11];
   scanf("%d", &N);
   for(int i = 0; i < N; i++){
       scanf("%s%s", name, date);
       //年龄合法 1814/9/6 ~ 2014/9/6
       if((strcmp("1814/09/06", date) <= 0) && (strcmp(date, "2014/09/06") <= 0)){
           count++;
           //年龄合法后判断最大最小,如果合法年龄只有一人，最大最小是一个
           if(strcmp(date, max_d) <= 0){
               assign(max_d,date,11);
               assign(max,name,6);
           }
           if(strcmp(date, min_d) >= 0){
               assign(min_d,date,11);
               assign(min,name,6);
           }
       }
   }
   if(count == 0)
      printf("0\n");
   else
      printf("%d %s %s\n", count, max, min);
    return 0;
}
