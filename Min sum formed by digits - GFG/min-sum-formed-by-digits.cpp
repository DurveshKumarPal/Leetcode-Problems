// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
     long long int a=0,b=0;
        int i=0;
        
         sort(arr,arr+n);
       long long int x=0,y=0;
       for(int i=0;i<n;i++){
           if(i%2==0)x=(x*10)+arr[i];
           else y=(y*10)+arr[i];
       }
        
        return x+y;
            
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends