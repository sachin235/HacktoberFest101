// CHECK IF THE GIVEN NUMBER IS A STRONG/KRISHNAMURTHY/PETERSON/SPECIAL NUMBER

import java.util.Scanner;

public class StrongNumber {
  static int RecursiveFactorialFinder(int num) {
    return ((num == 0 || num == 1) ? 1 : (num * RecursiveFactorialFinder(num - 1)));
  }

  static boolean IsStrong(int num) {
    if (num == 0) return false;

    int orgNum = num;

    int digit;
    int sum = 0;

    while (num > 0) {
      digit = num % 10;
      sum += RecursiveFactorialFinder(digit);
      num /= 10;
    }

    return (sum == orgNum);
  }

  public static void main(String[] args) {
    System.out.println(
        "CHECKING IF AN ENTERED NUMBER IS A STRONG/KRISHNAMURTHY/PETERSON/SPECIAL NUMBER...\n");

    Scanner sc = new Scanner(System.in);

    System.out.print("Enter a number: ");
    int num = sc.nextInt();

    if (IsStrong(num)) System.out.println("\nThe entered number is a Strong number!");
    else System.out.println("\nThe entered number is NOT a Strong number!");
  }
}
