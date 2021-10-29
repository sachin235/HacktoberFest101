import java.util.Scanner;

public class Main {
	
	static Scanner s = new Scanner(System.in);
	
	public static void main(String[] args) {
    	String input = s.next();
    	System.out.println(Solution.removeConsecutiveDuplicates(input));
    }
}

public class Solution {

	public static String removeConsecutiveDuplicates(String s) {
        if(s.length()==1){
            return s;
        }
        
        String str=removeConsecutiveDuplicates(s.substring(1));
        
        if(str.charAt(0)==s.charAt(0)){
            return s.charAt(0)+str.substring(1);
        }
        
        return s.charAt(0)+str;
	}

}
