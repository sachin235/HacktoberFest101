import java.util.Scanner;

public class Runner {

	static Scanner s = new Scanner(System.in);

	public static void main(String[] args) {
		int n = s.nextInt();
		int input[] = new int[n];
		for(int i = 0; i < n; i++) {
			input[i] = s.nextInt();
		}
		int x = s.nextInt();
		System.out.println(Solution.checkNumber(input, x));
	}
}


public class Solution {
	
	public static boolean checkNumber(int input[], int x) {
        if(input.length==1 && input[0]!=x){
            return false;
        }
        
        if(input[0]==x){
            return true;
        }
        
        int arr[]=new int[input.length-1];
        
        for(int i=1;i<input.length;i++){
            arr[i-1]=input[i];
        }
        
        return checkNumber(arr,x);
	}
}
