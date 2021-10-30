import java.util.Scanner;

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		System.out.println(solution.sumOfDigits(n));
	}
}


public class solution {

	public static int sumOfDigits(int input){
        if(input<9){
            return input;
        }
        
        int sum=input%10+sumOfDigits(input/10);
        return sum;
	}
}
