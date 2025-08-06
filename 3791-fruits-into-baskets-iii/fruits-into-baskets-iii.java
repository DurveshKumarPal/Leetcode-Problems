class Solution {
    private int[] seg;
    private int n;
    
    public int numOfUnplacedFruits(int[] fruits, int[] baskets) {
        n = baskets.length;
        seg = new int[4 * n];
        build(baskets, 0, n - 1, 1);
        int unplaced = 0;
        for (int f : fruits) {
            if (queryFirst(f, 0, n - 1, 1) == -1) {
                unplaced++;
            }
        }
        return unplaced;
    }
    
    private void build(int[] B, int lo, int hi, int idx) {
        if (lo == hi) {
            seg[idx] = B[lo];
            return;
        }
        int mid = (lo + hi) / 2;
        build(B, lo, mid, 2 * idx);
        build(B, mid + 1, hi, 2 * idx + 1);
        seg[idx] = Math.max(seg[2 * idx], seg[2 * idx + 1]);
    }
    
    private int queryFirst(int target, int lo, int hi, int idx) {
        if (seg[idx] < target) return -1;
        if (lo == hi) {
            seg[idx] = -1;  // consume the basket
            return lo;
        }
        int mid = (lo + hi) / 2;
        int res;
        if (seg[2 * idx] >= target) {
            res = queryFirst(target, lo, mid, 2 * idx);
        } else {
            res = queryFirst(target, mid + 1, hi, 2 * idx + 1);
        }
        seg[idx] = Math.max(seg[2 * idx], seg[2 * idx + 1]);
        return res;
    }
}
