class Solution {
    public double soupServings(int N) {
        if (N >= 4800) return 1.0;  // Optimization threshold
        int n = (N + 24) / 25;      // Round up to nearest 25 ml unit
        Double[][] dp = new Double[n + 1][n + 1];
        return helper(n, n, dp);
    }
    
    private double helper(int a, int b, Double[][] dp) {
        if (a <= 0 && b <= 0) return 0.5;
        if (a <= 0) return 1.0;
        if (b <= 0) return 0.0;
        if (dp[a][b] != null) return dp[a][b];
        
        dp[a][b] = 0.25 * (
            helper(a - 4, b, dp) +
            helper(a - 3, b - 1, dp) +
            helper(a - 2, b - 2, dp) +
            helper(a - 1, b - 3, dp)
        );
        return dp[a][b];
    }
}
