/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    /*
    判断B是不是A的子结构
    １，任何一方不为空
    ２．需要在A的整体，左子树，右子树中分别判断，有其中一个含有就行．
            每次判断的是一个完整的子树结构，即A为空则A完而B没有，则返回false,若B为空则B已经匹配完，返回true
            若一个完整的子结构判断过程中未完成即局部不匹配，则从A的下一个结点继续判断一个完整子结构
    */
    bool isSubtree(TreeNode* a, TreeNode* b){
        if(b == NULL) return true;//Ａ中包含B
        if(a == NULL) return false;//A doesn't contain B
        if(a->val == b->val)
            return isSubtree(a->left, b->left) && isSubtree(a->right, b->right);
        else
            return false;
    }
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(pRoot1 == NULL || pRoot2 == NULL)
            return false;
        return isSubtree(pRoot1,pRoot2) || HasSubtree(pRoot1->left,pRoot2) || HasSubtree(pRoot1->right, pRoot2);
    }
};
