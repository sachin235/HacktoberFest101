package Recursion2;

public class subsequences {

	public static void main(String[] args) {
		String str="xyz";
		
		String ans[]=findsubsequences(str);
		
		for(int i=0;i<ans.length;i++) {
			System.out.println(ans[i]);
		}
	}
	
	public static String[] findsubsequences(String str) {
		if(str.length()==0) {
			String ans[]= {""};
			return ans;
		}
		
		String smallAns[]=findsubsequences(str.substring(1));
		
		String ans[]=new String[smallAns.length*2];
		
		for(int i=0;i<smallAns.length;i++) {
			ans[i]=smallAns[i];
		}
		
		for(int i=0;i<smallAns.length;i++) {
			ans[i+smallAns.length]=str.charAt(0)+smallAns[i];
		}
		
		return ans;
		
	}

}
