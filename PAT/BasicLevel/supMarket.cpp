#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>
#include<iostream>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define OVERFLOW -1
#define INF 32767
using namespace std;
const int MAXVEX = 100;
typedef char Vextype;
typedef struct {
    Vextype vexs[MAXVEX][MAXVEX];//顶点信息
    int adj[MAXVEX][MAXVEX];//节点间知否有边
    int dis[MAXVEX][MAXVEX];//边的长度
    int f[MAXVEX];//各单位去超市的频率
    int n,e;//顶点数和边数
}Mgraph;
void CreatMgraph(Mgraph *G){
    int i,j,k;
    printf("请输入单位数：\n");
    scanf("%d",&(G->n));
    printf("请输入单位间的路径数：\n");
    scanf("%d",&(G->e));
    printf("请输入单位的名称：\n");
    for(i = 0;i < G->n;i++){
        printf("请输入第%d个单位的名字：\n",i);
        scanf("%s",&G->vexs[i]);
    }
    for(i = 0;i < G->n;i++){//结构体初始化
        for(j = 0;j<G->n;j++){
            G->adj[i][j] = 0;
            G->dis[i][j] = 0;
            G->f[i] = 0;
        }
    }
    for(k = 0;k < G->e; k++) {
        printf("请输入相通的两个单位(i,j):\n");
        scanf("%d,%d",&i,&j);
        printf("请输入相通的两个单位的距离:\n");
        scanf("%d",&(G->dis[i][j]));
        G->adj[i][j] = 1;
        G->adj[j][i] = 1;
        G->dis[j][i] = G->dis[i][j];
    }
    for(k = 0;k < G->n;k++){
        printf("请输入第%d个单位去超市的相对频率：",k);
        scanf("%d",&(G->f[k]));
    }
    for(i = 0;i < G->n;i++){//以距离和频率之和作为权值
        for(j = 0;j<G->n;j++){
            G->dis[i][j] *= G->f[i];
            if(G->adj[i][j] == 0 && i != j)
                 G->dis[i][j] = INF;
        }
    }
}

void Floyed(Mgraph *G) {//带权有向图求最短路径算法floyed算法
   int A[MAXVEX][MAXVEX],path[MAXVEX][MAXVEX];
   int i,j,k,pre;
   int count[MAXVEX];
   for(i= 0;i < G->n; i++) {
    for(j = 0;j <G->n;j++){
        A[i][j] = G->dis[i][j];
        path[i][j] = -1;
        count[i] = 0;
     }
   }
   for(k= 0;k < G->n; k++) {//k代表运算步骤
    for(i = 0;i <G->n;i++){
        for(j = 0;j < G->n;j++){
            if(A[i][j]>(A[i][k]+A[k][j])){//从i经j到k的一条路径更短
                A[i][j] = A[i][k] + A[k][j];
                path[i][j] = k;
            }
        }    
      }
   }
   cout<<endl<<"Floyed algorithm :"<<endl;
   for(i = 0;i < G->n;i++){
    for(j = 0;j < G->n; j++){
        if(i!= j){
            cout<<""<<i<<"->"<<j<<";";
            if(A[i][j] == INF){
                if(i!=j)
                    cout<<"no path"<<endl;
            } else {
                cout<<"The Length of Path is:"<<A[i][j]<<endl;
                cout<<"Path is:"<<i<<"*";
                pre = path[i][j];
                while(pre != -1){
                    cout<<pre<<endl;
                    pre = path[pre][j];
                }
                cout<<j<<endl;
            }
         }
      }
   }

    //一下为选择总体最优过程，然后确址；
    for(i = 0;i < G->n; i++){
        for(j = 0;j < G->n;j++){
            if(A[i][j] == INF)
                count[i] = 0;
            else
                count[i] = 1;
        }
    }
    for(i =0;i < G->n;i++){
        if(count[i]){
            for(j = 0;j < G->n;j++){
                if(i!=j)
                    A[i][i] +=A[j][i];
            }
        }
    }
    k = 0;
    for(i = 0;i < G->n;i++){
        if(count[i])
            if(A[k][k] > A[i][i])
                k = i;
    }
    cout<<"超市的最佳地址为："<<G->vexs[k]<<endl;
 }
int main(){
    Mgraph *Gh = NULL;
    Gh = (Mgraph*)malloc(sizeof(Mgraph));
    CreatMgraph(Gh);
    Floyed(Gh);
    system("pause");
    return 0;
 }
