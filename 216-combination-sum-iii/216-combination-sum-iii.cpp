class Solution {

    vector<vector<int>>result;
      void  combsum(int start,int n,vector<int> &temp,int k)
        {
        
        if(k==temp.size())
        {
            if(n==0)
            {
                result.push_back(temp);         //to add the vector temp into vector result
                return ;
                
            }
        }
        for(int i=start;i<=9;++i)
        {
            temp.push_back(i);
            combsum(i+1,n-i,temp,k);
            temp.pop_back();
            
        }
          
        }
    public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        int start = 1;
        combsum(start,n,temp,k);
        return result;
      
    }
};