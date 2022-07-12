class Solution {
public:

	int solve(int i,int j,vector<vector<int>>& matrix,int n,int m,int last,vector<vector<int>>& dp){
		if(i<0 || i>=n || j<0 || j>=m) return 0;
		
		if(last >= matrix[i][j]) return 0;
		if(dp[i][j]!=-1) return dp[i][j];
		int up = 1 + solve(i-1,j,matrix,n,m,matrix[i][j],dp);
		int down = 1 + solve(i+1,j,matrix,n,m,matrix[i][j],dp);
		int right = 1 + solve(i,j+1,matrix,n,m,matrix[i][j],dp);
		int left = 1 + solve(i,j-1,matrix,n,m,matrix[i][j],dp);
		
		return dp[i][j] = max(up,max(down,max(left,right)));
	}
	
	int longestIncreasingPath(vector<vector<int>>& matrix) {
		int maxi = -1e9;
		int n=matrix.size(),m=matrix[0].size();
		vector<vector<int>> dp(n,vector<int>(m,-1));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				maxi = max(maxi,solve(i,j,matrix,n,m,-1,dp));
			}
		}
		return maxi;
	}
};