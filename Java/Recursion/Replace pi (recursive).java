import java.util.Scanner;

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.nextLine();
		System.out.println(solution.replace(input));
	}
}


public class solution {

	// Return the changed string
	public static String replace(String input){
        if(input.length()==1){
            return input;
        }
        
        String str=replace(input.substring(1));
        //strating from last and comparing with string
        if(input.charAt(0)=='p' && str.charAt(0)=='i'){
            return "3.14"+str.substring(1);
        }
        
        return input.charAt(0)+str;
	}
}
