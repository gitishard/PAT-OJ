#include <iostream>
#include <vector>
#include <utility>
using namespace std;
pair<int,int> Floyed(vector<vector<int> >,vector<int>,int,int);
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
	//initialize array
	for(int i = 0; i < N; ++i){
		for(int j = 0; j < N; ++j){
			weight[i][j] = 0;
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
	rst = Floyed(weight,teams,C1,C2);
	cout << rst.first << " " << rst.second;
	return 0;
}
pair<int,int> Floyed(vector<vector<int> > weight,vector<int> teams,int C1,int C2){
	int roads = 0,rescue = 0;
	int N = teams.size();

	if(weight[C1][C2] != 0){
		rescue = teams[C1] + teams[C2];
		roads = 1;
	}
	for(int i = 0;i < N; ++i){
		for(int x = 0;x < N; ++x){
			for(int y = 0;y < N; ++y){
				if(weight[x][y] >= weight[x][i] + weight[i][y]){
					//update weight array
					weight[x][y] = weight[x][i] + weight[i][y];
					if((x == C1) && (y == C2)){
						if(weight[x][y] == (weight[x][i] + weight[i][y])){
							cout << x << " " << i << " "<<y << endl;
							//another shortest path
							roads += 1;
							if((teams[x]+teams[y]) < (teams[x]+teams[y]+teams[i]))
								rescue = teams[x]+teams[y]+teams[i];
						} else{
							//new path
							roads = 1;
							rescue = teams[x] + teams[y] + teams[i];
						}
					}
				}
			}//endfor
		}//endfor
	}//endfor
	return make_pair(roads,rescue);
}
