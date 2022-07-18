class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mlt=1,length=nums.size(),mltZero=0,numberZero=0;
    vector<int> ans;
    bool isZero=false,isNotAllZero=false;
    
    for(int i=0;i<length;++i){
        if(nums[i]==0){
            isZero=true;
            numberZero++;
            continue;
            
        }
        else{
            isNotAllZero=true;
             mlt*=nums[i];
        }
       
    }
    
    if(isZero && isNotAllZero==false && numberZero >=2){
        mlt=0;
    }
    
    for(int i=0;i<length;++i){
        if(numberZero>=2){
            ans.push_back(0);
        }
        else{
            if(nums[i]==0){
            ans.push_back(mlt);
        }
        else{
            if(isZero){
                 ans.push_back(0);
            }
            else{
                int value=mlt/nums[i];
           ans.push_back(value);
            }
            
        }
        }
        
        
    }
    
    return ans;
}
        
    
};