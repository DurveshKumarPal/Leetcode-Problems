//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    int j=0,sum=0,count=0;
while(j<N-1)
 {
     sum= sum+A[j];
     j++;
 }
 for(int i=1;i<=N;i++)
 {
     count+=i;
 }
 int ans = count-sum;
   return ans;
}