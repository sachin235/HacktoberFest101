// [LeetCode #204] Count Primes
// Given an integer n, return the number of prime numbers that are strictly less than n.
// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0
 

// Constraints:

// 0 <= n <= 5 * 106

class Solution {
    
    // Time complexity -- n(loglogn) : sieve of eratothenese
    public int countPrimes(int n) {
        int primes[]= new int[n];
        for(int i=2; i<Math.sqrt(n); i++){
            if(primes[i]==0){
                for(int j=2; i*j<n; j++){
                    primes[i*j]=1;
                }
            }
        }
        int count=0;
       for(int i=2; i<n; i++){
           if(primes[i]==0)
               count++; 
       }
        return count;
    }
}
