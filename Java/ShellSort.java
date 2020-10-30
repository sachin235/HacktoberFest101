import java.util.Scanner;

public class ShellSort {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        System.out.print("Enter the number of elements in the string: ");
        int n = ip.nextInt();
        int[] arr = new int[n];
        System.out.print("Enter " + n + " elements of the array: ");
        for(int i=0;i<n;i++){
            arr[i] = ip.nextInt();
        }
        System.out.print("Array before sorting: ");
        printArray(arr);
        
        // for shell sort (variation of insertion sort)
        shellSort(arr);
        System.out.print("\nArray after Shell sorting: ");
        printArray(arr); 
    }
    
    static void shellSort(int[] a){
        int i,n=a.length;
        int interval = 0;
        while(interval < n){
            interval = interval*3 + 1;
        }
        while(interval>0){
            for(int outer = interval; outer < n ; outer++){
                int val = a[outer];
                int inner = outer;
                while(inner>interval-1 && a[inner-interval]>=val){
                    a[inner] = a[inner - interval];
                    inner -= interval;
                }
                a[inner] = val;
            }
            interval = (interval-1)/3;
        }
    }
    
    static void printArray(int[] num){
        System.out.println("\nThe array of elements:");
        for(int i=0;i<num.length;i++){
            System.out.print(num[i] + " ");
        }
    }
}
