import java.util.ArrayList;
import java.util.Queue;
class TreeNode {
    int val = 0;
    TreeNode left = null;
    TreeNode right = null;

    public TreeNode(final int val) {
        this.val = val;

    }

}

public class Solution {
    public ArrayList<Integer> PrintFromTopToBottom(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<TreeNode>();
        ArrayList<Integer> list = new ArrayList<Integer>();
        if(root == null)
            return list;
        q.add(root);
        while(!q.isEmpty()){
            TreeNode node = q.poll();
            list.add(node.val);
            if(node.left != null)
                q.add(node.left);
            if(node.right != null)
                q.add(node.right);
        }
        return list;
}