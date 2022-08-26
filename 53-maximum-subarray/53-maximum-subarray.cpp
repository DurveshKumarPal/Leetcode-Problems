class Solution {
public:
    int maxSubArray(vector<int>& a) {
    int maxsum=0;
    int cursum =0;
        maxsum = a[0];

    for(int i=0;i<a.size(); i++)
        {
            cursum +=a[i];
            if(cursum>maxsum)
            {
              maxsum = cursum;
            }
            if(cursum<0) cursum = 0;    
         }
        return maxsum;
    }
};