Description :
You will be given a string, and you have to print the first unique character of the string, i.e., the non-repeating character of the string.

Note : 
1️⃣ The string may contain duplicates.
2️⃣ If there is no unique character, then print -1.

Input : The input will be in the following format:
🌟 The first line will be a string.

Output : The output should be in the following format:
🌟 Print the first unique character of the string or -1 if no unique character is found.

Sample Input-1 :
abcdabdef

Sample output-1 :
c
Explanation :
The input is a string "abcdabdef". The output is character c from input string as c is the only character which is not repeated in the string.

Sample input-2 :
aabb

Sample output-2 :
-1
Explanation :
The input is a string "aabb". The output is -1 as there is no non-repeating character present in the input string.
  
SOLUTION : 

import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

public class Source {

    public static void main(String arg[]) {

        Scanner in = new Scanner(System.in);
        String str = in.nextLine();
        Character firstUniqueChar = null;

        Map<Character, Integer> characterCount = new LinkedHashMap<Character, Integer>();
        for (Character ch : str.toCharArray()) {
            if (!characterCount.containsKey(ch)) {
                characterCount.put(ch, 1);
            } else {
                characterCount.put(ch, characterCount.get(ch) + 1);
            }
        }

        for (Character ch : characterCount.keySet()) {
            if (characterCount.get(ch) == 1) {
                firstUniqueChar = ch;
                break;
            }
        }

        if (firstUniqueChar == null) {
            System.out.println("-1");
        } else {
            System.out.println(firstUniqueChar);
        }

    }
}
