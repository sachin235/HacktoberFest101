package Recursion;
import java.util.*;
public class Fibonacci {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println(fibo(sc.nextInt()));
	}
	
	public static int fibo(int x) {
		if(x==0 || x==1) {
			return x;
		}
		return fibo(x-1)+fibo(x-2);
	}
}

