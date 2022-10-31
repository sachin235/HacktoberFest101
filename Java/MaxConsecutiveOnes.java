class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int start = 0, max = 0;
        
        for(int end=0;end<nums.length;end++){
            if(nums[end]==0){
                start = end+1;
                continue;
           }
            max = end-start+1 > max ? end-start+1 : max;
        }
        
        return max;
        
    }
}