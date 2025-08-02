class Solution {
   public long minCost(int[] basket1, int[] basket2) {
        Map<Integer, Integer> freq1 = new HashMap<>();
        Map<Integer, Integer> freq2 = new HashMap<>();
        TreeSet<Integer> allFruits = new TreeSet<>();

        int n = basket1.length;
        int globalMin = Integer.MAX_VALUE;

        for (int i = 0; i < n; i++) {
            freq1.put(basket1[i], freq1.getOrDefault(basket1[i], 0) + 1);
            freq2.put(basket2[i], freq2.getOrDefault(basket2[i], 0) + 1);
            allFruits.add(basket1[i]);
            allFruits.add(basket2[i]);
            globalMin = Math.min(globalMin, Math.min(basket1[i], basket2[i]));
        }

        List<Integer> surplus1 = new ArrayList<>();
        List<Integer> surplus2 = new ArrayList<>();

        for (int fruit : allFruits) {
            int f1 = freq1.getOrDefault(fruit, 0);
            int f2 = freq2.getOrDefault(fruit, 0);
            int total = f1 + f2;

            if (total % 2 != 0) return -1; // Impossible

            int ideal = total / 2;

            if (f1 > ideal) {
                for (int i = 0; i < f1 - ideal; i++) surplus1.add(fruit);
            } else if (f2 > ideal) {
                for (int i = 0; i < f2 - ideal; i++) surplus2.add(fruit);
            }
        }

        // Now we swap smallest from surplus1 with largest from surplus2
        Collections.sort(surplus1);
        Collections.sort(surplus2, Collections.reverseOrder());

        long cost = 0;
        for (int i = 0; i < surplus1.size(); i++) {
            int a = surplus1.get(i);
            int b = surplus2.get(i);
            cost += Math.min(Math.min(a, b), 2 * globalMin);
        }

        return cost;
    }
}