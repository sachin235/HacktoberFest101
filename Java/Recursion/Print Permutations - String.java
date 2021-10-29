import java.util.Scanner;

public class runner {
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.nextLine();
		solution.permutations(input);
	}
}


public class solution {

	public static void permutations(String input){
        permutations(input,"");
	}
    
    public static void permutations(String input,String output){
        if(input.length()==0){
            System.out.println(output);
            return ;
        }
        for(int i=0;i<input.length();i++){
            permutations(input.substring(0,i)+input.substring(i+1),output+input.charAt(i));
            
            // input.substring(0,1) elements from left if element from first index or more is taken as first char
            // substring(i+1) from right
        }
    }
}
