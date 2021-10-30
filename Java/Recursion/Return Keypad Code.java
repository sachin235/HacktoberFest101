import java.util.Scanner;

public class runner {
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int input = s.nextInt();
		String output[] = solution.keypad(input);
		for(int i = 0; i < output.length; i++) {
			System.out.println(output[i]);
		}
	}
}


public class solution {
    
	public static String[] keypad(int n){
        
        if(n==0){
            return new String[] {""};
        }
        
        String str[]=keypad(n/10);
        String pairs[]=keys(n%10);
     	
        String res[]=new String[str.length*pairs.length];
        int k=0;
        for(int i=0;i<str.length;i++){
            for(int j=0;j<pairs.length;j++){
                res[k++]=str[i]+pairs[j];
            }
        }
        return res;
	}
    
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
	
}
