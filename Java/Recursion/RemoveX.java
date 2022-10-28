package Recursion2;

public class RemoveX {

	public static void main(String[] args) {
		String s="xxxxa";
		System.out.println(removeX(s));
	}
	
	public static String removeX(String s) {
		if(s.length()==0) {
			return s;
		}
		
		String ans="";
		if(s.charAt(0)!='x') {
			ans=ans+s.charAt(0);
		}
		
		return ans+removeX(s.substring(1));
		
	}

}
