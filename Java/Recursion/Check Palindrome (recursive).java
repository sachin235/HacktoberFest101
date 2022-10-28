import java.util.Scanner;

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.nextLine();
		System.out.println(solution.isStringPalindrome(input));
	}
}


public class solution {

	public static boolean isStringPalindrome(String input) {
        return isStringPalindrome(input,0,input.length()-1);
	}
    
    public static boolean isStringPalindrome(String input,int l,int r){
        if(l>=r || input.length()==1){
            return true;
        }
        
        if(input.charAt(l)!=input.charAt(r)){
            return false;
        }
        else{
            return isStringPalindrome(input,l+1,r-1);
        }
    }
}
