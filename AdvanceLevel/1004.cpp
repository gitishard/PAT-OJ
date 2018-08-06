#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Node {
	int root_ID;
	int subNode_num;
	vector<int> subNodes;
};

int main(int argc, char* argv[]){
	int N, M, root_ID, subNode_num, subID;
	vector<int> rst;
	//input the number of nodes and no-leaf nodes
	cin >> N >> M;
	vector<Node> node = vector<Node>(M);

	//input the information of no-leaf nodes
	for(int i = 0;i < M; ++i){
		cin >> root_ID >> subNode_num;
		node[i].root_ID = root_ID;
		node[i].subNode_num = subNode_num;
		
		for(int j = 0;j < subNode_num; ++j){
			cin >> subID;
			node[i].subNodes.push_back(subID);
		}//endfor
	}//endfor
	
	//caculate the number of node hasing no child

	return 0;
}
