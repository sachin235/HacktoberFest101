package Recursion;

import java.util.Scanner;

public class SumofNaturalNumbers {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println(sum(sc.nextInt()));
	}
	
	public static int sum(int num) {
		if(num==1) {
			return 1;
		}
		return num+sum(num-1);
	}

}
