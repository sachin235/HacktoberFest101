/*
[LeetCode #120] Triangle
Given a triangle array, return the minimum path sum from top to bottom.

For each step, you may move to an adjacent number of the row below. More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.
*/
class Solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        int distance[]= new int[triangle.size()+1];
        for(int level=triangle.size()-1; level>=0; level--){
            for(int curr=0; curr<triangle.get(level).size(); curr++){
                distance[curr]= Math.min(distance[curr], distance[curr+1])+ triangle.get(level).get(curr);
            }
        }
        return distance[0];
    }
}
