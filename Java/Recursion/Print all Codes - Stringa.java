//Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to print the list of all possible codes that can be generated from the given string.


import java.util.Scanner;

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.next();
		solution.printAllPossibleCodes(input);
	}
}

public class solution {

	public static void printAllPossibleCodes(String input) {
        printAllPossibleCodes(input,"");
	}
    
    public static void printAllPossibleCodes(String input,String output){
        	if(input.length()==0){
                System.out.println(output);
                return ;
            }
        	
        	printAllPossibleCodes(input.substring(1),output+(char)(input.charAt(0)-'0'+'a'-1));
        
        	if(input.length()>=2){
            
                char x=(char)((input.charAt(0)-'0')*10+(input.charAt(1)-'0')+'a'-1);
                
                if(x>='a' && x<='z'){
                     printAllPossibleCodes(input.substring(2),output+x);
                }
               
            }
        
    }
}
