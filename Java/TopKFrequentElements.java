/*
 * Find K most frequent elements in a given input array. The result should be ordered in the decreasing order of the frequency.
 * If multiple numbers have same frequency, the number which appears first in the array gets the preference.
 *
 * Input : [7,1,8,5,1,3,9,5,1,1,0,5,4,6,3] , k=4
 * Output : [1,5,3,7]
 *
 * Explanation: 1 appears most number of times(4 times) , followed by 5(3 times), followed by 3(2 times) and then 7(once).
 *
 * Approach: I have used HashMap to store the mapping of the number and their frequency.
 * I have used Priority Queue and modified it(overridden the compare method in the Comparator interface) to behave as max heap.
 * Priority Queue is helpful in these kind of problems where we are asked to return k elements based on some order.
 * Time complexity - k * log(n)
 * */


import java.util.HashMap;
import java.util.Map;
import java.util.PriorityQueue;
import java.util.Queue;

public class TopKFrequentElements {

  public static void main(String[] args) {
    int[] input = new int[]{7, 1, 8, 5, 1, 3, 9, 5, 1, 1, 0, 5, 4, 6, 3};
    int k = 4;
    int[] result = getKFrequentElements(input, k);
    System.out.println("The output is: ");
    for (int i = 0; i < k; i++) {
      System.out.print(result[i] + " ");
    }
  }

  public static int[] getKFrequentElements(int[] input, int k) {
    Map<Integer, Integer> integerFrequencyMap = new HashMap<>();
    for (int i = 0; i < input.length; i++) {
      integerFrequencyMap.put(input[i], integerFrequencyMap.getOrDefault(input[i], 0) + 1);
    }

    // Override the compare method in the comparator interface to return the result in the descending order(max heap)
    Queue<Map.Entry<Integer, Integer>> queue = new PriorityQueue<>(
        (e1, e2) -> e2.getValue() - e1.getValue());
    
    // populate the priority queue with the map key:value pairs.
    for (Map.Entry<Integer, Integer> entry : integerFrequencyMap.entrySet()
    ) {
      queue.add(entry);
    }

    // poll the priority queue and store the result in the result array.
    int[] result = new int[k];
    for (int i = 0; i < k; i++) {
      result[i] = queue.poll().getKey();
    }

    return result;
  }

}
