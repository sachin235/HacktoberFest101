import java.util.Scanner;

public class runner {
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.nextLine();
		String output[] = solution.permutationOfString(input);
		for(int i = 0; i < output.length; i++) {
			System.out.println(output[i]);
		}
	}
}


public class solution {
	
	public static String[] permutationOfString(String input){
        if(input.length()==0){
            String ans[]={""};
            return ans;
        }
        
        String ans[]=permutationOfString(input.substring(1));
        
        String res[]=new String[ans.length*input.length()];
        
        int k=0;
        for(int i=0;i<ans.length;i++){
            for(int j=0;j<input.length();j++){
                res[k++]=ans[i].substring(0,j)+input.charAt(0)+ans[i].substring(j);
            }
        }
        
        return res;
	}
	
}
