#include<bits/stdc++.h>

using namespace std;
const int N=1e5+10;
vector<int>g[N];
int depth[N],height[N];

void dfs(int vertex,int parent=0)
{
	// take an action on vettex after entering the vertex
	for(int child: g[vertex]){

		// Take an action on child before entering the child node
		if(child == parent)continue;
		depth[child]=depth[vertex]+1;
		dfs(child,vertex);
		height[vertex]=max(height[vertex],height[child]+1);
		//take action on child after exiting the child node

	}
	// Take an action on vertex before exiting the vertex
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n-1;++i)
	{
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);

	}
	dfs(1);
	for(int i=1;i<=n;++i)
	{
		cout<<depth[i]<<" "<<height[i]<<endl;

	}

	return 0;
}
