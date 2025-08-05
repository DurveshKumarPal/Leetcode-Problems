class Solution {
    public int numOfUnplacedFruits(int[] fruits, int[] baskets) {
         int n = fruits.length;
        int unpaced = n;
        boolean[] used = new boolean[n];
        
        for (int i = 0; i < fruits.length; i++) {
            for (int j = 0; j < baskets.length; j++) {
                if (!used[j] && baskets[j] >= fruits[i]) {
                    used[j] = true;
                    unpaced--;
                    break;
                }

            }
        }
            return unpaced;
    }

}