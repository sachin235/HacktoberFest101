import java.util.Scanner;

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		System.out.println(solution.countZerosRec(n));
	}
}


public class solution {

	public static int countZerosRec(int input){
        if(input<=9){
            return 0;
        }
        
        if(input%10==0){
            return 1+countZerosRec(input/10);
        }
        else{
            return countZerosRec(input/10);
        }
	}
    
}
