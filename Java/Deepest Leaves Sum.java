/*
[LeetCode #1302] Deepest Leaves Sum
Given the root of a binary tree, return the sum of values of its deepest leaves.
*/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {
    public int deepestLeavesSum(TreeNode root) {
        if(root==null)
            return 0;
        Queue<TreeNode> q= new LinkedList<>();
        q.offer(root);
        int size=0;
        int sum=0;
        while(!q.isEmpty()){
            TreeNode curr= q.poll();
            sum+=curr.val;
            //System.out.println(curr.val+ " "+ sum);
            if(curr.left!=null)
                q.offer(curr.left);
            if(curr.right!=null)
                q.offer(curr.right);
            if(size==0){
                size= q.size()-1;
                if(size<0){
                    return sum;
                }
                sum=0;
            }
            else{
                size--;
            }
        }
        return sum;
    }
}
