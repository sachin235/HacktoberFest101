import java.util.*;
public class ISC2016Q2 {
    public static void main(String[] args) {
        int M;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the order of the matrix:");
        M = in.nextInt();
        while( M<=3 || M >= 10) { 
            System.out.println("INVALID INPUT,try again:");
            M = in.nextInt();
        }
        Matrix obj = new Matrix(M);
        System.out.println("Enter the elements of the matrix:");
        obj.inputMatrix();
        System.out.println("ORIGINAL MATRIX:");
        obj.displayMatrix();
        System.out.println("REARRANGED MATRIX:");
        obj.rearangedMatrix();
        obj.displayMatrix();
        System.out.println("DIAGONAL ELEMENTS:");
        obj.displayDiagonalElements();
        in.close();
    }
}
class Matrix{

public void displayDiagonalElements() {
    for(int i=0;i<order;i++) {
        for(int j=0;j<order;j++)
            if(i==j || i+j == order-1) {
                System.out.print(Mat[i][j]+" "); sum_of_diagonals += Mat[i][j];}
            else
                System.out.print(" ");
        System.out.println();
        }
    System.out.println("SUM OF DIAGONAL ELEMENTS:"+sum_of_diagonals);
    }

public void rearangedMatrix() {
    int counter =0;
    for(int i=1;i<order-1;i++)
        for(int j=1;j<order-1;j++)
            non_boundary_elements[counter++]=Mat[i][j];
    Arrays.sort(non_boundary_elements); 
    counter = 0;
    for(int i=1;i<order-1;i++)
        for(int j=1;j<order-1;j++)
            Mat[i][j]=non_boundary_elements[counter++];
    }

public void displayMatrix() {
    for(int i=0;i<order;i++) {
        for(int j=0;j<order;j++)
            System.out.print(Mat[i][j]+" ");
        System.out.println();
        }
    }

public void inputMatrix() {
    Scanner in = new Scanner(System.in);
    for(int i=0;i<order;i++)
        for(int j=0;j<order;j++)
            Mat[i][j]=in.nextInt();
    }

Matrix(int M){
    order = M;
    Mat = new int[M][M];
    sum_of_diagonals = 0;
    non_boundary_elements = new int[(M-2)*(M-2)];
    }
    private int order;
    private int[][] Mat;
    private int sum_of_diagonals;
    private int[] non_boundary_elements;
    
}
