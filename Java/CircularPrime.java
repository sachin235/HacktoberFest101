import java.util.*;
public class ISC2016Q1 {
    public static void main(String[] args) {
    int N;
    Scanner in = new Scanner(System.in);
    System.out.println("Enter the value of N");
    N = in.nextInt();
    circularPrime obj = new circularPrime(N);
    obj.digitExtraction();
    obj.circularNumberGenerator();
    System.out.println("OUTPUT");
    obj.circularPrimeTest();
    in.close();
    }
}

class circularPrime {
    
    public void circularPrimeTest() {
        flag = true;
        for(int i=0;i<number_length;i++) {
            if(!isPrime(circular_numbers[i])){ // checking whether each circular number is prime or not
                flag = false;
                break;
            }
        }
        for(int j=0;j<number_length;j++) {
            System.out.println("        "+circular_numbers[j]);
        }
        if(flag==true)
            System.out.println(number+"  IS A CIRCULAR PRIME");
        else
            System.out.println(number+"  IS NOT A CIRCULAR PRIME");
    }
    
 public void circularNumberGenerator() {
     int temp,k;
     for(int i=0;i<number_length;i++) {
         temp = 0;
         k = number_length-1;
         for(int j=0;j<number_length;j++)
                        temp = temp + digits_of_number[(i+j)%number_length]*(int)Math.pow(10,k--); // generating circular numbers
             circular_numbers[i]=temp;
        }
   }

public void digitExtraction() {
    int temp = number;
    for(int i=number_length-1; i>=0; i--) {
        digits_of_number[i] = temp%10;
        temp /=10;
        }
   }

private boolean isPrime(int n) {
    flag = true;
    if (n==1)
        return false;
  else {
      for(int i = 2; i<=n/2;i++)
              if(n%i==0) {
                  flag=false;
                  break;
              }
      return(flag);
    }
  }

circularPrime(int N){
    int temp=1;
    number = N;
    number_length = 0;
    while (temp <= number) {  // int length = String.valueOf(number).length(); can be also used
      number_length++;
      temp *= 10;
      }
    digits_of_number = new int[number_length];
    circular_numbers = new int[number_length];
  }

 private boolean flag;
 private int number;
 private int number_length;
 private int[] digits_of_number;
 private int[] circular_numbers;
 }

