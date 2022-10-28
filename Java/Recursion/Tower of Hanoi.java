import java.util.Scanner;

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		solution.towerOfHanoi(n, 'a', 'b', 'c');
	}
}


public class solution {

	public static void towerOfHanoi(int disks, char a, char b, char c) {
        if(disks>0){
        //first a is source b is destination and c is auxiliary
            towerOfHanoi(disks-1,a,c,b);
            System.out.println(a+" "+c);
            //b is source c is destination and a is auxiliary
            towerOfHanoi(disks-1,b,a,c);
        }
	}
}
