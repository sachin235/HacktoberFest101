import java.util.Scanner;

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.nextLine();
		System.out.println(solution.convertStringToInt(input));
	}
}



public class solution {

	public static int convertStringToInt(String input){
        if(input.length()==0){
            return 0;
        }
        
        int num=(input.charAt(0)-'0')*(int)Math.pow(10,input.length()-1)+convertStringToInt(input.substring(1));
        return num;
        
	}
}
