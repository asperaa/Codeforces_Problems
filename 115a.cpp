#include <bits/stdc++.h>

using namespace std;
int deep=0;
vector<int>v[2001];

void dfs(int u,int step)
{
	deep=max(step,deep);

	for(int i=0;i<v[u].size();i++)
	{
		int ver=v[u][i];
		dfs(ver,step+1);
	}
}

int main()
{
	int n;
	cin>>n;
	
	vector<int>root;
	for(int i=1;i<=n;i++)
	{
		int u;
		cin>>u;

		if(u==-1)
			root.push_back(i);
		else
			v[u].push_back(i);
	}
	
	for(int k=0;k<root.size();k++)
		dfs(root[k],1);

	
	cout<<deep;
}
