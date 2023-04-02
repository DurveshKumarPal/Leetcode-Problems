//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int n){
        int count=0,sum,num=n;
        while(n)
        {
             sum = n%10;
           
            if( sum!=0 && num%sum==0 )
            count++;
             n/=10;
        }
        
    
        return count;
    }
    // int count = 0;
    //     int N = n;
    //     while(n) {
    //         int digit = n % 10;
    //         if(digit != 0 && N % digit == 0)
    //             count++;
    //         n /= 10;
    //     }
    //     return count;
    // }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends