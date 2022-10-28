import java.util.Scanner;

public class runner {
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int input = s.nextInt();
		solution.printKeypad(input);
	}
}


public class solution {

     public static String[] keys(int n){
        if(n == 2) {
			return new String[] {"a","b","c"};
		}
		else if(n == 3) {
			return new String[] {"d","e","f"};
		}
		else if(n == 4) {
			return new String[] {"g","h","i"};
		}
		else if(n == 5) {
			return new String[] {"j","k","l"};
		}
		else if(n == 6) {
			return new String[] {"m","n","o"};
		}
		else if(n == 7) {
			return new String[] {"p","q","r","s"};
		}
		else if(n == 8) {
			return new String[] {"t","u","v"};
		}
		else {
			return new String[] {"w","x","y","z"};
		}		
    }
    
	public static void printKeypad(int input){
        printKeypad(input,"");
	}
    
    public static void printKeypad(int input,String output){
        if(input==0){
			System.out.println(output);
            return ;
        }
        
        String str[]=keys(input%10);
        
        for(int i=0;i<str.length;i++){
            printKeypad(input/10,str[i]+output);
        }
    }
    
}
