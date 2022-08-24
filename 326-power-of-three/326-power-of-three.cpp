class Solution {
public:
    bool isPowerOfThree(int n) {
        bool flag ;
        if(n==1)
            return true;
        if(n<=0) return false;
        if(n%3==0) return isPowerOfThree(n/3);
        flag = false;
       // return flag;
        return false;
    //     int b = n;
    //     int a = 3;
    // // computing power
    // double p = log10(b) / log10(a);
    // // checking to see if power is an integer or not
    // if (p - (int)p == 0) {
    //     cout<<"YES";
    // }
    // else{
    //     cout<<"NO";
    // }
    // return false;
    }
};