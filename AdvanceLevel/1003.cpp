#include <iostream>
#include <vector>
#include <utility>
using namespace std;

pair<int,int> dijkstra(int, int, vector<vector<int> >,vector<int>);

int inf = 10000;
int main(int argc, char* argv[]){
	int N,M,C1,C2;
	cin >> N >> M >> C1 >> C2;

	pair<int,int> rst;
	vector<int> teams(N);
	vector<vector<int> > weight(N);
	//create 2-D array
	for(int i = 0; i < N; ++i){
		weight[i].resize(N);
	}
	//initialize weight array
	for(int i = 0; i < N; ++i){
		for(int j = 0; j < N; ++j){
			if(i == j)
				weight[i][j] = 0;
			else
				weight[i][j] = inf;
		}
	}

	for(int i = 0; i < N; ++i){
		cin >> teams[i];
	}

	for(int i = 0; i < M; ++i){
		int x,y,w;
		cin >> x >> y >> w;
		weight[x][y] = w;
		weight[y][x] = w;
	}

	//find the shortest path and maxium number of team
	//rst = Floyed(weight,teams,C1,C2);
	rst = dijkstra(C1,C2,weight,teams);
	cout << rst.first << " " << rst.second;
	return 0;
}
pair<int,int> dijkstra(int start, int end, vector<vector<int> > weight, vector<int> teams){
	int u;
	int N = teams.size();
	vector<int> dist(N,inf);
	vector<int> pathNum(N,0);
	vector<int> teamNum(N,0);
	vector<bool> flag(N,false);

	//initialize array flag and dist which the distance between C1 and i
	//flag[start] = true;
	pathNum[start] = 1;
	teamNum[start] = teams[start];
	//for(int i = 0; i < N; ++i)
	//	dist[i] = weight[start][i];
	dist[start] = 0;

	for(int i = 0;i < N; ++i){
		int min = inf;	
		//find the shortest node which has not been visited so far
		for(int j = 0;j < N; ++j){
			if(flag[j] == false && dist[j] < min){
				u = j;
				min = dist[j];
			}
		}//endfor

		//add u to shortest path
		flag[u] = true;

		//caculate shortest distance and teams
		for(int k = 0;k < N; ++k){
			if(flag[k] == false && dist[u] + weight[u][k] < dist[k]){
				pathNum[k] = pathNum[u];
				teamNum[k] = teams[k] + teamNum[u];
				dist[k] = dist[u] + weight[u][k];
			} else if(flag[k] == false && dist[u] + weight[u][k] == dist[k]){
				pathNum[k] += pathNum[u];
				if(teamNum[k] < teamNum[u] + teams[k])
					teamNum[k] = teamNum[u] + teams[k];
			}
		}
	}//endfor
	return make_pair(pathNum[end],teamNum[end]);
}
/*
pair<int,int> Floyed(vector<vector<int> > weight,vector<int> teams,int C1,int C2){
	int roads = 0,rescue = 0;
	int N = teams.size();
	vector<vector<int> > midteam(N);
	for(int i = 0; i < N; ++i){
		weight[i].resize(N);
	}

	for(int i = 0;i < N;++i)
		midteam[i][i] = teams[i];

	for(int i = 0;i < N; ++i){
		for(int x = 0;x < N; ++x){
			for(int y = 0;y < N; ++y){
				if(weight[x][i] != -1 && weight[i][y] != -1){
					if(weight[x][y] >= weight[x][i] + weight[i][y]){
						//update weight array
						weight[x][y] = weight[x][i] + weight[i][y];
						midteam[x][y] = midteam[x][i] + midteam[i][y]; 

						if((x == C1) && (y == C2)){
							if(weight[x][y] == (weight[x][i] + weight[i][y])){
								if(weight[x][i] != 0 && weight[i][y] != 0){
									//another shortest path
									roads += 1;
									if(rescue < (midteam[x][i] + midteam[i][y]))
										rescue = midteam[x][i] + midteam[i][y];
									//if(rescue < (teams[x]+teams[y]+teams[i]))
									//	rescue = teams[x]+teams[y]+teams[i];
								}
							} else {
								//new path
								roads = 0;
								rescue = midteam[x][i] + midteam[i][y];
								//rescue = teams[x] + teams[y] + teams[i];
							}
						}
					}
				}
			}//endfor
		}//endfor
	}//endfor
	if(weight[C1][C2] != -1)
		roads += 1;
	if(rescue == 0 || roads == 0){
		if(weight[C1][C2] != -1){
			rescue = teams[C1] + teams[C2];
			roads = 1;
		}
	}
	return make_pair(roads,rescue);
}
*/
