import java.util.Scanner;

public class Runner {

	static Scanner s = new Scanner(System.in);

	public static void main(String[] args) {
		int n = s.nextInt();
		int input[] = new int[n];
		for(int i = 0; i < n; i++) {
			input[i] = s.nextInt();
		}
		System.out.println(Solution.sum(input));
	}
}

public class Solution {

	public static int sum(int input[]) {
        
		if(input.length==1){
            return input[0];
        }
        
        int a[]=new int[input.length-1];
        
        for(int i=1;i<input.length;i++){
         	a[i-1]=input[i];   
        }
        return input[0]+sum(a);
	}
}
