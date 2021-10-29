import java.util.Scanner;

public class Runner {
	
	static Scanner s = new Scanner(System.in);
	
	public static int[] takeInput(){
		int size = s.nextInt();
		int[] input = new int[size];
		for(int i = 0; i < size; i++){
			input[i] = s.nextInt();
		}
		return input;
	}
	
	public static void main(String[] args) {
		int[] input = takeInput();
		int x = s.nextInt();
		System.out.println(Solution.firstIndex(input, x));
	}
}


public class Solution {

	public static int firstIndex(int input[], int x) {
        return firstIndex(input,0,x);
	}
    
    public static int firstIndex(int input[],int len,int x){
        if(len>=input.length){
            return -1;
        }
        
        if(input[len]==x){
            return len;
        }
        
        int pos=firstIndex(input,len+1,x);
        
        return pos;
    }
	
}
