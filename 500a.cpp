#include <bits/stdc++.h>

using namespace std;

void dfsutil(int v,vector<bool> &visited,vector< vector<int> >neighbours)
{
	visited[v]=true;
	
	vector<int> :: iterator it;
//	cout<<v<<endl;
	for(it=neighbours[v].begin();it!=neighbours[v].end();++it)
	{
		if(!visited[*it])
			dfsutil(*it,visited,neighbours);
	}
}

vector<bool> dfs(vector< vector<int> >neighbours,int V)
{
	vector<bool>visited(V+1,false);

//	for(int i=1;i<=V;i++)
//		if(!visited[i])
			dfsutil(1,visited,neighbours);

//		for(int i=1;i<V;i++)
//				cout<<visited[i]<<endl;
	return visited;
}

int main()
{
	int n,t;
	cin>>n>>t;

	int a[n];

	for(int i=1;i<n;i++)
		cin>>a[i];
	int x=1;

	while(x<t)
	{
		x+=a[x];
	}

	if(x==t)
		cout<<"YES";
	else
		cout<<"NO";
}
