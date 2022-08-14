class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // set<vector> st;
        // for(int i=0; i<nums.size();i++)
        // {
        //     st.insert(nums[i]);
        // }
        if(nums.size()<=2)
            return nums.size();
        
        int count = 2;
        // int n = nums.size();
        for(int i=2;i<nums.size();i++)
        {
         if (nums[i]!=nums[count-2] || nums[i]!=nums[count-1])
             {
               
             nums[count]=nums[i];
              count++;
            
            }
        }
            
     return count;   
    }
};