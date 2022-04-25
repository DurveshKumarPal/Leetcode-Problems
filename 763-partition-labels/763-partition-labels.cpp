class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        unordered_map<char,int> M;
        string str;
       // cin>>str;
        for(int i=0;i<s.size();i++)
        {
            char ch= s[i];
            M[ch]=i;
        }
        vector <int>ans;
        int prev =-1;
        int maxi =0;
        
        
        for(int i=0;i<s.size();i++)
        {
            maxi = max(maxi,M[s[i]]);
            
            if(maxi ==i)
            {
                ans.push_back(maxi-prev);
                prev = maxi;
                
            }
        }
       return ans;
    }
};