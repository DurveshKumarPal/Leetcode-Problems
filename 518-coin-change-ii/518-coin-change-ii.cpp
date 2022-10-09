class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        int t[coins.size()+1][amount+1];
        
        for(int j = 0 ; j < amount+1; j++)
            t[0][j] = 0;
        for(int i = 0 ; i < coins.size()+1; i++)
            t[i][0] = 1;
        
        for(int i = 1; i < coins.size()+1; i++)
        {
            for(int j = 1; j < amount + 1; j++)
            {
                if(j >= coins[i-1])
                {
                    t[i][j] = t[i][j - coins[i-1]] + t[i-1][j];
                }
                else
                {
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[coins.size()][amount];
        
    }
};