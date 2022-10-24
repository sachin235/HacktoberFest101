import java.util.Scanner;

public class TransposeMatrix {
    public static void main(String[] args) {
        System.out.print("Enter the order of matrix: ");
        Scanner input = new Scanner(System.in);
        int i = input.nextInt();
        int j = input.nextInt();
        int[][] arr = new int[i][j];
        for (int row = 0; row < i; row++) {
            System.out.print("Enter the elements in row " + (row + 1) + ": ");
            for (int col = 0; col < i; col++) {
                arr[row][col] = input.nextInt();
            }
        }
        transpose(arr);
    }

    static void transpose(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        int[][] result = new int[n][m];
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                result[row][col] = matrix[col][row];
            }
        }
        // Printing the transpose of the matrix
        System.out.println("Transpose of the matrix: ");
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                System.out.print(result[row][col] + " ");
            }
            System.out.println();
        }
    }
}


/*        SAMPLE OUTPUT
Enter the order of matrix: 3 3
Enter the elements in row 1: 1 2 3
Enter the elements in row 2:  4 5 6
Enter the elements in row 3: 7 8 9
Transpose of the matrix: 
1 4 7
2 5 8
3 6 9           */
