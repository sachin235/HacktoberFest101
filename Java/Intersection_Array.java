/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.
 

Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000

*/
class Intersection_Array {
    public int[] intersect(int[] nums1, int[] nums2) {
        ArrayList<Integer> array = new ArrayList<Integer>();
    Map<Integer, Integer> map = new HashMap<Integer, Integer>();
    
    if(nums1.length<nums2.length){

        for(int ele : nums2)
        {
            if(map.get(ele)==null)
            {
                map.put(ele,1);
            }else
            {
                map.put(ele,map.get(ele)+1);
            }
        }
        
        for(int i=0;i<nums1.length;i++)
        {
            try{
            if(!(map.get(nums1[i])==0))
            {
                map.put(nums1[i], map.get(nums1[i])-1);
                array.add(nums1[i]);
            }
            }catch(RuntimeException e){}     
        }
    }
    else
    {
        for(int ele : nums1)
        {
            if(map.get(ele)==null)
            {
                map.put(ele,1);    
            }else
            {
                map.put(ele,map.get(ele)+1);
            }
        }
        for(int i=0;i<nums2.length;i++)
        {
           try{
            if(!(map.get(nums2[i])==0))
            {
                map.put(nums2[i], map.get(nums2[i])-1);
                array.add(nums2[i]);
            }
           }
            catch(RuntimeException e){}
    }
    }
    int[] nums3 = new int[array.size()];
    for(int i=0;i<array.size();i++)
    {
        nums3[i]=array.get(i);
    }
    return nums3;
        
    }
}
