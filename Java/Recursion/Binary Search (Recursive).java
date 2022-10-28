import java.util.Scanner;

public class runner {
	static Scanner s = new Scanner(System.in);
	public static int[] takeInput() {
		int size = s.nextInt();
		int arr[] = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = s.nextInt();
		}
		return arr;
	}
	
	public static void main(String[] args) {
		int[] input = takeInput();
		int element = s.nextInt();
		System.out.println(solution.binarySearch(input, element));
	}
}


public class solution {

	// element - number to be searched
	public static int binarySearch(int input[], int element) {
        return binarySearch(input,element,0,input.length-1);
	}
    
    public static int binarySearch(int input[],int element,int l,int r){
        
        if(l<=r){
            
              int mid=(l+r)/2;
        
         if(input[mid]==element){
            return mid;
        }
        
        else if(input[mid]>element){
            return binarySearch(input,element,l,mid-1);
        }
        else{
            return binarySearch(input,element,mid+1,r);
          }
        }
      
        
        return -1;
        
    }
}
