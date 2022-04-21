class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid ;
        while(start<=end)
        {
             mid = (start + end)/2;
            if(nums[mid]==target)
            {
               
                return mid;
                
            }
            if(nums[mid]<target)
            {
                
                start = mid+1;
            }
            else
                end=mid-1;
        }
        return -1;
        
    }
};


/*class Solution {
  public:
  int search(vector<int>& nums, int target) {
    int pivot, left = 0, right = nums.size() - 1;
    while (left <= right) {
      pivot = left + (right - left) / 2;
      if (nums[pivot] == target) return pivot;
      if (target < nums[pivot]) right = pivot - 1;
      else left = pivot + 1;
    }
    return -1;
  }
};*/