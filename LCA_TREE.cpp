#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
 vector<int> g[N];  // store tree
int par[N];

void dfs(int vertex, int p=-1)
{
	par[vertex]=p;
	for(auto child:g[vertex])
	{
		if(child==p) continue;
		else
			dfs(child,vertex);
	}
}


vector<int> path(int vertex)
{
	vector <int > ans;
	while(vertex!=-1)
	{
		ans.push_back(vertex);
		vertex=par[vertex];
	}
	reverse(ans.begin(),ans.end());
	return ans;
}



int main()
{
	int n;
	cin>>n;
	for(auto i=0;i<n-1;i++)
	{
		int x,y;
		g[x].push_back(y); //putting edges in tree
		g[y].push_back(x);

	}
	dfs(1);
	int p,q;  //those two node which find lca
	cin>>p>>q; 
	vector <int> path_x = path(p);
	vector<int> path_y = path(q); 
	int mn_ln  = min(path_x.size(),path_y.size());
	int lca=-1;
	for(auto i=0;i<mn_ln;++i)
	{
		if(path_x[i]==path_y[i]) 
			lca=path_x[i];
		else 
			break;
	}
	cout<< lca;
	return 0;
}
