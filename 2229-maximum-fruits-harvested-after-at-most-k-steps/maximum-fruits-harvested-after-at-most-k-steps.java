public class Solution {
    public int maxTotalFruits(int[][] fruits, int startPos, int k) {
        int n = fruits.length;
        int maxFruits = 0;
        int windowSum = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            windowSum += fruits[right][1];

            while (left <= right && !canReach(fruits, left, right, startPos, k)) {
                windowSum -= fruits[left][1];
                left++;
            }

            maxFruits = Math.max(maxFruits, windowSum);
        }

        return maxFruits;
    }

    private boolean canReach(int[][] fruits, int l, int r, int startPos, int k) {
        int leftPos = fruits[l][0];
        int rightPos = fruits[r][0];

        int option1 = Math.abs(startPos - leftPos) + (rightPos - leftPos);
        int option2 = Math.abs(startPos - rightPos) + (rightPos - leftPos);

        return Math.min(option1, option2) <= k;
    }
}
