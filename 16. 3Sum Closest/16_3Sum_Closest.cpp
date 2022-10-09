class Solution {
public:
    int threeSumClosest(vector<int>& nums, int ta) {
        
        int mini = INT_MAX;
        int ans ;
        
        sort(nums.begin(), nums.end());
        
        for(int k =0 ; k<nums.size(); k++){
            int t = ta - nums[k];
            int i =0;
            int j = nums.size()-1;
            while(i<j && i!=k && k!=j ){
                int f = nums[i]+  nums[j];
                
                if(abs(f-t)<mini && i!=k && j!=k ){
                    mini = abs(f-t);
                    ans = f+nums[k];
                }
                
                if(f ==t){
                    return ta;
                }
                else if( f>t){
                    j--;
                }
                else{
                    i++;
                }
            }
        }
      return ans;
    }
};
