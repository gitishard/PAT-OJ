#include <cstdio>
#include <cstring>
int main(int argc, char const *argv[])
{
    /*
        输入：N,输入数据的个数
        输出：有效年龄的个数　年龄最大的名　年龄最小的名   
    */
   int N, count = 0;
   char *max, *min, *max_d = "0000/00/00", *min_d = "2014/09/06", name[6], date[11];
   scanf("%d", &N);
   for(int i = 0; i < N; i++){
       scanf("%s%s", name, date);
       //年龄合法 1814/9/6 ~ 2014/9/6
       if((strcmp("1814/09/06", date) <= 0) && (strcmp(date, "2014/09/06") <= 0)){
           count++;
       
           //年龄合法后判断最大最小
           if(strcmp(date, max_d) < 0){
               max_d = date;
               max = name;
           }
           if(strcmp(date, min_d) > 1){
               min_d = date;
               min = name;
           }
       }
   }
   printf("%d %s %s\n", count, max, min);
    return 0;
}
