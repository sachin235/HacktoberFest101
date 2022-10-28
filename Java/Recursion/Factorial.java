package Recursion;

import java.util.*;
public class Factorial {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println(fact(sc.nextInt()));
	}
	
	public static int fact(int num){
		if(num==0) {
			return 1;
		}
		
		int smallans=fact(num-1);
		return smallans*num;
	}

}
