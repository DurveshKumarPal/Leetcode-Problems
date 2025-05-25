class Solution {
    public int maxProfit(int[] prices) {
       
int ans =0;
int buy =prices[0];
int sell=0;
int profit = 0;
        for (int i = 0; i < prices.length; i++) {
//            for (int j = i+1; j < prices.length; j++) {
            if(prices[i]<buy){
                buy=prices[i];
            }


            profit = Math.max(profit,prices[i]-buy);
//            }
        }

        return profit;
    }
}