// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    //const int N=1e5+10;
    bool vis[100010];
    vector<int> g[100010];
    
    bool dfs(int vertex,int par,vector<int> g[],bool vis[]){
       vis[vertex] =true;
    bool isLoopExist =false;
    for(auto child:g[vertex])
    {
        if(vis[child]&& child ==par) continue;
        if(vis[child]) return true;
        
        isLoopExist |=dfs(child,vertex,g,vis);
    }
    return isLoopExist;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        bool vis[V+10];
        for(int i=0;i<=V;++i)
        {
            vis[i]=0;
        }
         for(auto i=0;i<V;++i)
        {
            if(vis[i]) continue ;
            if(dfs(i,-1,adj,vis))
            {
               return true;
            }
         
        }
           return false;
    
 
    }
    
   
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends