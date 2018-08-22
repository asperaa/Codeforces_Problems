#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n,m,k;
	cin>>n>>m>>k;

	int a[n][m];

	char c;

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin>>c;
			a[i][j]=c;
		}

	int cnt=0,rc=0;
	for(int i=0;i<n;i++)
	{
		rc=0;
		for(int j=0;j<m;j++)
		{
			if(a[i][j]=='.')
			{
				rc++;
			}

			else if(a[i][j]=='*')
				rc=0;

			if(rc==k)
			{
				cnt++;
				j=j-k+1;
				rc=0;

				//cout<<"got one"<<endl;
			}


		}
	}

	for(int j=0;j<m;j++)
	{
		rc=0;

		for(int i=0;i<n;i++)
		{
			if(a[i][j]=='.')
				rc++;
			else if(a[i][j]=='*')
				rc=0;

			if(rc==k)
			{
				cnt++;
				i=i-k+1;	
				rc=0;
	//			cout<<"got one"<<endl;

			}
		}
	}

	cout<<cnt;

}

