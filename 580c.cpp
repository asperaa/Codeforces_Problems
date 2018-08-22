#include <bits/stdc++.h>

using namespace std;
int cnt=0;
//int rcnt=0;
vector<int>child[100001];
int cats[100001];

void dfs(int s,int m)
{
	

	if(cats[s]==1)
		rcnt++;
		
	if(child[s].size()==0)
		{
			cout<<"Hey\n";
			cout<<rcnt<<endl;
			if(rcnt<=m)
			{
				cout<<rcnt<<endl;
				cnt++;
				//if(cats[s]==1)
				rcnt-=cats[s];
				return;
			}

			else
				{
					rcnt-=cats[s];
					return;
				}
		}

	for(int i=0;i<child[s].size();i++)
	{
		cout<<"Yes\n";
	/*	if(cats[child[s][i]]==1)
		{
			rcnt++;
			cout<<rcnt<<endl;
		}
		
	*/
		dfs(child[s][i],m,cats[child[s][i]]);
	
	}
}

int main()
{
	int n,m;
	cin>>n>>m;

	for(int i=1;i<=n;i++)
		cin>>cats[i];

	for(int i=1;i<=n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		child[u].push_back(v);
	}
	dfs(1,m,cats[1]);
	cout<<cnt;
	
	
}
		
