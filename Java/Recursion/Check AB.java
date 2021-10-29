import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.next();
		System.out.println(Solution.checkAB(input));
	}

}

public class Solution {

	public static boolean checkAB(String input) {
        if(input.length()==0){
            return true;
        }
        
        if(input.charAt(0)!='a'){
            return false;
        }
        
        if(input.length()>=3 && input.substring(0,3).equals("abb")){
            return checkAB(input.substring(3));
        } 
        
        return checkAB(input.substring(1));
	}
}
