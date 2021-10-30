public class BinarySearch {

    public static void main(String[] args) {
	// write your code here
        int[] arr = {1, 2 ,3, 4, 5, 6,8,9};
        int target = 9;
        System.out.println(binarySearch(arr,target));
    }

    static int binarySearch(int[] arr, int target ){
        int start = 0;
        int end = arr.length - 1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(arr[mid] > target){
                end = mid - 1;
            }
            else if(arr[mid]< target){
                start = mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
}
