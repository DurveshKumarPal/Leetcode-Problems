//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int num = n;
        int p=0;
        string ans;
        int digit = (int)log10(num)+1;
        while(n>0)
        {
            int temp = n%10;
            p += pow(temp,digit);
            n=n/10;
        }
        if(p==num)
        {
            ans = "Yes";
        }
        else
        ans = "No";
     
     return ans;   
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends