// Java program to demonstrate 
// size() method of collection 

import java.util.*; 

public class Example1 { 
	public static void main(String[] args) 
	{ 

		// Creating object of List<Integer> 
		List<Integer> Array_List = new ArrayList<Integer>(); 

		// add elements 
		Array_List.add(1); 
		Array_List.add(2); 
		Array_List.add(3); 
		Array_List.add(3); 

		// getting total size of list 
		// using size() method 
		int size = Array_List.size(); 

		// print the size of list 
		System.out.println("Size of list = " + size); 

		// print list 
		System.out.println("Array_List = " + Array_List); 
	} 
}
