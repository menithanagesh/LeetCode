class Solution {
    public int maxProfit(int[] prices) {
        int min = Integer.MAX_VALUE;
        int profit =0;
        int maxProfit =0;
        for(int i:prices){
            if(i<min){
                min=i;
            }
            profit = i-min;
            maxProfit = Math.max(maxProfit,profit);
        }
        return maxProfit;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna