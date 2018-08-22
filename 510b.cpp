#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int xC[]={1,-1,0,0};
int yC[]={0,0,1,-1};
int ind=0,n,m,cnt=0;
char maze[MAX][MAX];
set< pair<int,int> >visited;

bool dfs(int x,int y,int xp,int yp)
{
		
	
	
	visited.insert(make_pair(x,y));
	
//	cout<<cnt++<<endl;	



		for(int i=0;i<4;i++)
		{
		
			int xnext=x+xC[i];
 			int ynext=y+yC[i];

		
		
		if(visited.find(make_pair(xnext,ynext))==visited.end() && xnext>=1 && ynext>=1 && xnext<=n && ynext<=m && maze[xnext][ynext]==maze[x][y])
		{
			
			
			if(dfs(xnext,ynext,x,y))
				return true;
			
		
		}

		else if(visited.find(make_pair(xnext,ynext))!=visited.end() && xnext!=xp && ynext!=yp && maze[xnext][ynext]==maze[x][y])
		{
			cout<<"Children: "<<xnext<<" "<<ynext<<" ";
			cout<<"Parents: "<<x<<" "<<y<<endl;
			return true;
			
		}
		

		}

		return false;

	
					


	
}
		

int main()
{
	cin>>n>>m;
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			char c;
			cin>>c;
			maze[i][j]=c;
		}
	}
	
/*	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cout<<maze[i][j]<<" ";
		cout<<endl;
	}
*/
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(visited.find(make_pair(i,j))==visited.end())
			{
				if(dfs(i,j,-1,-1))
				{
					cout<<"Yes";
					return 0;
				}
				cnt=0;	
			}
		}
	}


	cout<<"No";

	
	return 0;
}

	
		
