class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0, end=nums.size()-2;
        int mid=0;
        
        while(start<=end)
        {
            mid = (start+end)>>1;
            if(nums[mid]==nums[mid^1])
            start = mid+1;
            
            else{
                end = mid-1;
            }
            
        }
        return nums[start];
            
        
        }
};