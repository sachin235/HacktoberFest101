package Recursion2;

public class PrintSusequences {

	public static void main(String[] args) {
		String str="xyz";
		check(str,"");
	}
	
	public static void check(String input,String output) {
		
		if(input.length()==0) {
			System.out.println(output);
			return;
		}
		
		//we choose not to include first character
		
		check(input.substring(1),output);
		
		//we choose to include
		
		check(input.substring(1),output+input.charAt(0));
	}

}
