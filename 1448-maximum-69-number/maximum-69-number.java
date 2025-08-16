class Solution {
    public int maximum69Number (int num) {
        int ans = 0;
        int ans2 =0;
        int ChngNo = 0;
        int orgNum = 0;
        int temp = 0;
        int revnum = 0;
        
        while (num > 0) {
            int revnum2 = num % 10;
            revnum = revnum * 10 + revnum2;
            num/=10;
        }
        orgNum = revnum;
        boolean bchnge = false;
        while (orgNum > 0) {
            ChngNo = orgNum % 10;
            orgNum/=10;
            if((ChngNo == 6 )&& (bchnge == false))
            {
                ans = ans * 10 + 9;
                bchnge  = true;
            }else {
                ans = ans * 10 + ChngNo;
            }

        }
        temp =  ans;
        // ans =0;
        // while (temp > 0) {
        //     int val = temp % 10;
        //     ans = ans * 10 + val;
        //     temp /= 10;
        // }
        // return Math.max(ans,ans2);
        return ans;
    }
}