package Recursion;

public class ChecksortedBetter {

	public static void main(String[] args) {
		int a[]= {1,2,3,4,0};
		
		System.out.println(check(a,0));
	}
	
	public static boolean check(int a[],int index){
		if(index>=a.length-1) {
			return true;
		}
		
		if(a[index]>a[index+1]) {
			return false;
		}
		
		return check(a,index+1);
	}

}
