class Solution {
    public int maxScore(int[] cardPoints, int k) {
        
    int sum =0;
        int lSum = 0;
        int rSum = 0;
        for(int i=0;i<k;i++)
        {
            lSum = lSum + cardPoints[i];
        }
        sum = lSum;
        int rightIndex = cardPoints.length-1;
        for(int j=k-1;j>=0;j--)
        {
            lSum = lSum - cardPoints[j];
            rSum = rSum + cardPoints[rightIndex];
            rightIndex--;
            sum = Math.max(sum,lSum+rSum);
        }

        return sum;
    }
}