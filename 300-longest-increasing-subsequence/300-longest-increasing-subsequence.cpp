class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>L;// to maintain a strictly increasing subsequence as long as possible
        L.push_back(nums[0]);
        for(int i=1;i<n;i++)
            if(L.back()<nums[i]) L.push_back(nums[i]);
            else
            {
                auto itr=lower_bound(L.begin(),L.end(),nums[i]);// binary search
                *itr=nums[i];//to decrease a value in the subsequence, make it more possible to be longer
            }
        return L.size();
    }
};