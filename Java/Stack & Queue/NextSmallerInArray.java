import java.util.Arrays;
import java.util.Stack;
public class NextSmaller {

    // Find the next greater element for every array element
    public static int[] findNextSmallerElements(int[] input)
    {
        // base case
        if (input == null) {
            return input;
        }

        int[] result = new int[input.length];
        Arrays.fill(result, -1);

        // create an empty stack
        Stack<Integer> s = new Stack<>();

        // do for each element
        for (int i = 0; i < input.length; i++)
        {
            // loop till we have a smaller element on top or stack becomes empty.

            // Keep popping elements from the stack smaller than the current
            // element, and set their next smaller element to the current element

            while (!s.isEmpty() && input[s.peek()] > input[i]) {
                result[s.pop()] = input[i];
            }

            // push current "index" into the stack
            s.push(i);
        }

        return result;
    }

    public static void main(String[] args)
    {
        int[] input = { 2, 7, 3, 5, 4, 6, 8 };

        int[] result = findNextSmallerElements(input);
        System.out.println(Arrays.toString(result));
    }
}


