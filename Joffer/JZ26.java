/**
public class TreeNode {
    int val = 0;
    TreeNode left = null;
    TreeNode right = null;

    public TreeNode(int val) {
        this.val = val;

    }
    
    输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。
    要求不能创建任何新的结点，只能调整树中结点指针的指向。

}
*/
class Solution {
    TreeNode pre = null;

    public TreeNode Convert(TreeNode pRootOfTree) {
        if(pRootOfTree == null) return pRootOfTree;
        InThreading(pRootOfTree);

        TreeNode head = pRootOfTree;
        while(head.left != null)
            head = head.left;
        return head;
    }
    //中序遍历
    public void InThreading(TreeNode root){
        if(root != null){
            InThreading(root.left);

            root.left = pre;
            if(pre != null){ 
                pre.right = root;
            }
            pre = root;

            InThreading(root.right);
        }
    }
}