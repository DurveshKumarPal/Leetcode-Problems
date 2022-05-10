class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {

        int s=0,e=nums.size()-1,mid;
        int first=-1,sec=-1;    //if not found then return -1;
        while(s<=e)
        { //first occurance
            mid=s+(e-s)/2;
            if(nums[mid]==t){
                 first=mid;     //possible ans;that element may present to its left as well
                e=mid-1;
                
            }
            else if(nums[mid]>t)    //ans will lie to left
                e=mid-1;
            else 
                s=mid+1;
                
               
            
        }
          s=0,e=nums.size()-1;
        while(s<=e){                //last occurance
            mid=s+(e-s)/2;
            if(nums[mid]==t){
                 sec=mid;        //possible ans;that element may present to its left as well
                s=mid+1;         //there may be more target at right;
                
            }
            else if(nums[mid]>t)        //ans will lie to left
                e=mid-1;
            else 
                s=mid+1;
                
               
            
        }
        return {first,sec};
    }
};