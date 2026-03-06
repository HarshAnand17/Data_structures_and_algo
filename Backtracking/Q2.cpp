import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution {
    public static int calculateBullishTrends(List<Integer> stockPrices, int k) {
        if (stockPrices == null || stockPrices.size() < k || k <= 0) {
            return 0;
        }
        if (k == 1) {
            return stockPrices.size();
        }
        int bullishTrendCount = 0;
        for (int i = 0; i <= stockPrices.size() - k; i++) {
            boolean isBullish = true;
            for (int j = i; j < i + k - 1; j++) {
                if (stockPrices.get(j) >= stockPrices.get(j + 1)) {
                    isBullish = false;
                    break;
                }
            }
            if (isBullish) {
                bullishTrendCount++;
            }
        }
        return bullishTrendCount;
    }

    public static void main(String[] args) {
        List<Integer> prices = new ArrayList<>(Arrays.asList(5, 3, 5, 7, 8));
        int k = 3;
        System.out.println("Stock Prices: " + prices);
        System.out.println("K: " + k);
        System.out.println("Number of Bullish Trends: " + calculateBullishTrends(prices, k));

        List<Integer> prices2 = new ArrayList<>(Arrays.asList(1, 2, 3, 1, 2, 3, 4));
        int k2 = 3;
        System.out.println("\nStock Prices: " + prices2);
        System.out.println("K: " + k2);
        System.out.println("Number of Bullish Trends: " + calculateBullishTrends(prices2, k2));
        
        List<Integer> prices3 = new ArrayList<>(Arrays.asList(5, 4, 3, 2, 1));
        int k3 = 2;
        System.out.println("\nStock Prices: " + prices3);
        System.out.println("K: " + k3);
        System.out.println("Number of Bullish Trends: " + calculateBullishTrends(prices3, k3));
    }
}