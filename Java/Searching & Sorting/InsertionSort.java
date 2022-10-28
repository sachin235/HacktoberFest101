import java.util.Scanner;

public class InsertionSort {
  
    public static void insertionSort(int arr[],int n){
        
        int i, key, j;
        for(i=1;i<n;i++){
            key = arr[i]; 
            j = i - 1; 

            while (j >= 0 && arr[j] > key) 
            { 
                    arr[j + 1] = arr[j]; 
                    j = j - 1; 
            } 
            arr[j + 1] = key;
        }
    }
    
    public static void printArray(int arr[],int n){
        
        int i;
        for(i=0;i<n;i++){
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String args[]) {
        
        Scanner ip = new Scanner(System.in);
        
        int num,i;
        System.out.print("Enter the number of elements in the array: ");
        num = ip.nextInt();
        int[] array;
        array = new int[num];
        System.out.print("Enter the elements in the array: ");
        for(i=0;i<num;i++){
            array[i] = ip.nextInt();
        }
        
        insertionSort(array,num);
        System.out.print("\nThe Sorted array is: ");
        printArray(array,num);
    }
}
