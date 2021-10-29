import java.util.Scanner;

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.nextLine();
		System.out.println(solution.addStars(input));
	}
}


public class solution {
	public static String addStars(String s) {
        if(s.length()==1){
            return s;
        }
        
        String str=addStars(s.substring(1));
        
        if(s.charAt(0)==str.charAt(0)){
            return s.charAt(0)+"*"+str.charAt(0)+str.substring(1);
        }
        
        return s.charAt(0)+str;
	}
}
