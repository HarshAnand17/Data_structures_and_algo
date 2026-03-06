import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
public class Solution {
    public static List<Integer> getValidKeyCount(List<Long> keys) {
        long maxKey = 0L;
        if (keys == null || keys.isEmpty()) {
            return new ArrayList<>();
        }
        for (Long key : keys) {
            if (key != null && key > maxKey) {
                maxKey = key;
            }
        }
        int limit = (int) Math.sqrt(maxKey);
        boolean[] isPrime = new boolean[limit + 1];
        if (limit > 0) {
            Arrays.fill(isPrime, true);
            isPrime[0] = false;
            isPrime[1] = false;
        }
        for (int p = 2; p * p <= limit; p++) {
            if (isPrime[p]) {
                for (int i = p * p; i <= limit; i += p) {
                    isPrime[i] = false;
                }
            }
        }
        int[] primeCounts = new int[limit + 1];
        if (limit > 0) {
            primeCounts[0] = 0;
            for (int i = 1; i <= limit; i++) {
                primeCounts[i] = primeCounts[i - 1];
                if (isPrime[i]) {
                    primeCounts[i]++;
                }
            }
        }
        List<Integer> result = new ArrayList<>();
        for (Long key : keys) {
            if (key == null || key < 4) {
                result.add(0);
            } else {
                int sqrtKey = (int) Math.sqrt(key);
                result.add(primeCounts[sqrtKey]);
            }
        }
        return result;
    }
    public static void main(String[] args) {
        List<Long> keys1 = new ArrayList<>(Arrays.asList(5L, 11L));
        System.out.println("Input: " + keys1);
        System.out.println("Output: " + getValidKeyCount(keys1));

        List<Long> keys2 = new ArrayList<>(Arrays.asList(100L, 1000L));
        System.out.println("Input: " + keys2);
        System.out.println("Output: " + getValidKeyCount(keys2));
        
        List<Long> keys3 = new ArrayList<>(Arrays.asList(3L, 4L, 24L, 25L));
        System.out.println("Input: " + keys3);
        System.out.println("Output: " + getValidKeyCount(keys3));
    }
}