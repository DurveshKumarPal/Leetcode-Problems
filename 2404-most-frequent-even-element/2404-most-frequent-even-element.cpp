class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
//         int prev,curr=0;
//         int ans;
//         for(int i=0;i<n;i++)
//         {
//             if(i%2==0)
//             {
//                 if(prev==curr)
//                     count++;
                
//                 else
//                     prev=i;
//             }
//         }
        
        
//         int maxcount=0;
//   int element_having_max_freq =-1;
//   for(int i=0;i<nums.size();i++)
//   {
//     int count=0;
//     for(int j=0;j<nums.size();j++)
//     {
//         if(nums[i]%2==0)
//         {
//       if(nums[i] == nums[j])
//         count++;
//         }
//     }
 
//     if(count>maxcount)
//     {
//       maxcount=count;
//       element_having_max_freq = nums[i];
//     }
     
//   }
       
 
//   return element_having_max_freq;
// }
        
		// 
         map<int,int>mp;
        for(auto it :nums )
            if(it%2==0) mp[it]++;
        int maxi = INT_MIN , val=-1;
        for(auto it : mp) if(it.second>maxi) maxi= it.second , val=it.first;
        return val;
    }
        
};