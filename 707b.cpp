#include <bits/stdc++.h>

using namespace std;

vector< pair<int,int> >G[100005];
vector<int>fi(100005,0);

int main()
{
	int n,m,k;
	cin>>n>>m>>k;

	for(int i=0;i<m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		
		G[u].push_back(make_pair(v,w));
		G[v].push_back(make_pair(u,w));
	}

	if(k==0)
	{
		cout<<-1;
		return 0;
	}

	int flor[k];
	for(int i=0;i<k;i++)
	{
		cin>>flor[i];
		fi[flor[i]]=1;
	}

	long long  minn=10000000000;
	for(int i=0;i<k;i++)
	{


		for(int j=0;j<G[flor[i]].size();j++)
		{
			if(!fi[G[flor[i]][j].first])
			{
				if(G[flor[i]][j].second<minn)
					minn=G[flor[i]][j].second;
			}
		}
	}

	if(minn==10000000000)
		cout<<-1;
	else
		cout<<minn;

}
