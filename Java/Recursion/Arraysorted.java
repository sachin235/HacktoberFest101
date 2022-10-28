package Recursion;

public class Arraysorted {

	public static void main(String[] args) {
		int array[]= {1,21,3};
		
		System.out.println(checksorted(array));
	}
	
	
	public static boolean checksorted(int array[]) {
		if(array.length<=1) {
			return true;
		}
		
		if(array[0]>array[1]) {
			return false;
		}
		
		int temp[]=new int[array.length-1];
		
		for(int i=1;i<array.length;i++) {
			temp[i-1]=array[i];
		}
		
		boolean smallAns=checksorted(temp);
		return smallAns;
		
	}

}
