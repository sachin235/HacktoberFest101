import java.util.Scanner;

public class Runner {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		Solution.print(n);
	}
	
}
public class Solution {

	public static void print(int n){
		if(n == 1){
			System.out.print(n + " ");
            return ;
		}
		
		print(n - 1);
        System.out.print(n+" ");
	}

}
