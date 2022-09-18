class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int min_=INT_MAX;
        int pro=0;
        
        for(int i=0;i<prices.size();i++)
        {
            min_ =min(min_,prices[i]);
            pro = max(pro,prices[i]-min_);
        }
        return pro;
    }
};