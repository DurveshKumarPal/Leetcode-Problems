class Solution {
    public boolean isPowerOfFour(int n) {
        if(n<=0)
        {
return false;
        }
        if(n == 1)
        {
            return true;
        }
        double follr = Math.log(n)/Math.log(4);
        
        return follr == Math.floor(follr);
    }
}