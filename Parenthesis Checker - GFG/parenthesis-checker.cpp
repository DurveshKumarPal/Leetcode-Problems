//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    bool matching (char a,char b)
    {
        return (a=='('&& b==')')||(a=='{'&& b=='}')||(a=='['&& b==']');
    }
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<int> st;
        // if(x.size()==1) return false;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='('||x[i]=='{'||x[i]=='[')
            {
            st.push(x[i]);
            }
            else{
                if(st.empty()==true)
                return false;
                else if(matching(st.top(),x[i])==false)
                return false;
                else
                st.pop();
            }
        }
        return (st.empty()==true);
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends