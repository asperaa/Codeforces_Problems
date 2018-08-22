#include <bits/stdc++.h>

using namespace std;

#define MAX 510

int good[MAX][MAX];
char c[3]={'#','X','.'};

int S=0;
int K;
char xC[4]={0,1,0,-1};
char yC[4]={-1,0,1,0};


void run(int x,int y)
{
	if(good[x][y]!=1)return;
	if(S==K)return;

	S--;
	
	good[x][y]=2;
	for(int i=0;i<4;i++)
		run(x+xC[i],y+yC[i]);
}


int main()
{
	int n,m;
	cin>>n>>m>>K;
	memset(good,0,sizeof(good));

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			char gridp;
			cin>>gridp;

			good[i][j]=(gridp=='.');
			S+=good[i][j];
//			cout<<S<<endl;
		}
	}

	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			run(i,j);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cout<<c[good[i][j]];
		cout<<endl;
	}

	return 0;
}
