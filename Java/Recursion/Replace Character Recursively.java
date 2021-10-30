import java.util.Scanner;

public class Runner {
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.next();
		char c1 = s.next().charAt(0);
		char c2 = s.next().charAt(0);
		System.out.println(Solution.replaceCharacter(input, c1, c2));
	}
}

public class Solution {

	public static String replaceCharacter(String input, char c1, char c2) {
        if(input.length()==0){
            return input;
        }
        
        String str="";
        if(input.charAt(0)==c1){
            str=str+c2;
        }
        else{
            str=str+input.charAt(0);
        }
        
        return str+replaceCharacter(input.substring(1),c1,c2);
	}
}
