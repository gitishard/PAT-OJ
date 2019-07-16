/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	void findM(TreeNode * root, vector<int> & output, int &frequent, int &parent, int &thisfrequency) {
        /*
            frequent是输出数组中出现频率最大的数
            thisfrequent是当前遍历的结点的频率
            遍历方式采用先序遍历，用左子树最后一个结点对frequent, parent进行初始化
        */
		if (root != NULL) {
            if(root->left == NULL)
                if(frequent == 0){
                    frequent = 1;
                    parent = root->val;
                }
			findM(root->left, output, frequent, parent, thisfrequency);
        /*
            对frequent,parent初始化后，
            如果当前频率大于结果中的最大频率，清空输出数组，把当前结点加入输出数组中并更新频率
            如频率不变则输出结果中加入当前节点
        */
            if (root->val > parent) {
                if (thisfrequency > frequent) {
                    output.clear();
                    output.push_back(parent);
                    frequent = thisfrequency;
                }
                else if(thisfrequency == frequent){
                    output.push_back(parent);
                }
                thisfrequency = 1;
                parent = root->val;
            }
            else {
                thisfrequency++;
            }
            findM(root->right, output, frequent, parent, thisfrequency);
        }
	}

	vector<int> findMode(TreeNode* root) {
		vector<int> output;
		int frequent = 0;
		if (root == NULL)
			return output;
		int thisfrequency = 0;
        int parent;
		findM(root, output, frequent, parent, thisfrequency);
        if(thisfrequency > frequent){
            output.clear();
            output.push_back(parent);
        }
        else if(thisfrequency == frequent)
            output.push_back(parent);
        return output;
	}
};
