import java.util.Scanner;

public class Runner {
	
	static Scanner s = new Scanner(System.in);
	
	public static int[] takeInput(){
		int size = s.nextInt();
		int[] input = new int[size];
		for(int i = 0; i < size; i++){
			input[i] = s.nextInt();
		}
		return input;
	}
	
	public static void main(String[] args) {
		int[] input = takeInput();
		int x = s.nextInt();
		int output[] = Solution.allIndexes(input, x);
		for(int i = 0; i < output.length; i++) {
			System.out.print(output[i] + " ");
		}
	}
}


public class Solution {

	public static int[] allIndexes(int input[], int x) {
        return allIndexes(input,x,0);
	}
    
      public static int[] allIndexes(int input[], int x,int startIndex){
	      if(startIndex == input.length){
	        int[] rv = new int[0];
	        return rv;
	      }
	      int[] roaIndex = allIndexes(input,x,startIndex + 1);
	      if(input[startIndex] == x){
	        int[] totalIndex = new int[(roaIndex.length) + 1];
	        totalIndex[0] = startIndex;
	        for(int i = 0;i < roaIndex.length;i++){
	          totalIndex[i+1] = roaIndex[i];
	        }
	        return totalIndex;
	      }
	      else{
	        return roaIndex;
} 
    }
}
