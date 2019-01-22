/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        return createBTree(pre, 0, pre.size()-1, vin, 0, vin.size()-1);
    }
    TreeNode* createBTree(vector<int> pre,int startPre,int endPre,vector<int> vin,int startIn,int endIn){
        if(startPre > endPre || startIn > endIn)
            return NULL;
        
        TreeNode* root = new TreeNode(pre[startPre]);//add value to the node
        for(int i = startIn; i <= endIn; ++i){
            if(vin[i] == pre[startPre]){
                //在后序遍历中找当前结点的值(子树的根结点)
                /*
                    所有节点的值在先序遍历中取，左右子树的范围判定后序中找
                    左子树：
                    先序列来说：每次先序的start+1,end是以前的start＋该结点左子树的结点个数（i-startIn）
                    后：start不变，ｉ减一
                    右子树：
                    先：start是原先的start加左子树的节点数加1(startpre+i-sratIn+1),end不变
                    后：start = I+1, end 不变
                */
                root->left = createBTree(pre, startPre+1, startPre+i-startIn, vin, startIn, i-1);
                root->right = createBTree(pre, startPre+i-startIn+1,endPre, vin,i+1,endIn);
                break;//一但找到就退出，后面的遍历没有必要
            }
        }
        return root;
    }
};
