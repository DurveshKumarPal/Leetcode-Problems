class Solution {
    public int maxProfit(int[] prices) {
        int buy = prices[0];
        int sell = 0;
        int profit = 0;
        for(int i=1;i<prices.length;i++)
        {
            profit = Math.max(profit,prices[i]-buy);
            buy = Math.min(buy,prices[i]);
            
        }
        return profit;
    }
}