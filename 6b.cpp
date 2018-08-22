#include <bits/stdc++.h>

using namespace std;
int xC[]={0,1,0,-1};
int yC[]={1,0,-1,0};

int main()
{
	int n,m;
	cin>>n>>m;

	char p;
	cin>>p;
	
	map<char,int>vis;

	char a[n+2][m+2];

	memset(a,'d',sizeof(a));

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];

			if(a[i][j]!='.' && a[i][j]!=p)
				vis[a[i][j]]=1;
		//	cout<<vis[a[i][j]]<<endl;
		}
	}

	int cnt=0;

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]==p)
			{		
				for(int k=0;k<4;k++)
				{
					char newP=a[i+xC[k]][j+yC[k]];
				
					vis[newP]++;

					if(newP!='.' && newP!=p && vis[newP]==2 && newP!='d')
						cnt++;
				}
			}

		}

	}

	cout<<cnt;

}
				



