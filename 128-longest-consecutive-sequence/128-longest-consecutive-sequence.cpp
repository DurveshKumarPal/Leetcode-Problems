class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    map<int,int>m;
    int n=nums.size();
        if(n==0)return 0;
        for(auto e:nums)
            m[e]++;
        int ans=0;
        int prev =-1e9;
        int maxi =-19e+5;
        for(auto e:m)
        {
            if(e.first ==prev+1)
            ans++;
        
        else
            ans=0;
            
        maxi =max(maxi,ans);
        prev=e.first;
    
    }
    return maxi + 1;
    }
 };
