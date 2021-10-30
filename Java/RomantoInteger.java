//Problem (Leetcode #13):

/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.



Example 1:

Input: s = "III"
Output: 3
Example 2:

Input: s = "IV"
Output: 4
Example 3:

Input: s = "IX"
Output: 9


 */


import java.util.HashMap;
import java.util.Scanner;

class RomantoInteger {


    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String roman = scn.next();
        HashMap<Character, Integer> romanIntMap = new HashMap<>();
        romanIntMap = createHash(romanIntMap);
        int result = 0;
        //loop over string
        for(int i = 0; i < roman.length() - 1; i++){
            char curr = roman.charAt(i);
            char next = roman.charAt(i+1);
            if(romanIntMap.get(curr) < romanIntMap.get(next))
                result -= romanIntMap.get(curr);
            else
                result += romanIntMap.get(curr);

        }
        result += romanIntMap.get(roman.charAt(roman.length() - 1));
        System.out.println(result);

    }

    private static HashMap<Character, Integer> createHash(HashMap<Character, Integer> romanIntMap) {
        romanIntMap.put('I', 1);
        romanIntMap.put('V', 5);
        romanIntMap.put('X', 10);
        romanIntMap.put('L', 50);
        romanIntMap.put('C', 100);
        romanIntMap.put('D', 500);
        romanIntMap.put('M', 1000);
        return romanIntMap;
    }

}
