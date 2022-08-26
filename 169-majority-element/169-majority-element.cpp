class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = nums[nums.size()/2];
        return ans;
    }
};