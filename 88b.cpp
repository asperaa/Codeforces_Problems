#include <bits/stdc++.h>

using namespace std;

int u[26]={};
char ok;

int main()
{
	int n,m,x;
	cin>>n>>m>>x;
	
	string s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];


	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(s[i][j]=='S')
				ok=s[i][j]='+';
			else
				u[s[i][j]-'a']=1;
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(s[i][j]!='+')
			{
				
				for(int r=0;r<n;r++)
				{
					for(int c=0;c<m;c++)
					{
						if(s[r][c]=='+')
						{
							int dist=(i-r)*(i-r)+(j-c)*(j-c);
							
							if(dist<=x*x)
								u[s[i][j]-'a']=2;
						}
					}
				}
			}
		}
	}


	int cnt;
	cin>>cnt;

	int ans=0;
	for(int i=0;i<cnt;i++)
	{
		char c;
		cin>>c;

		if(islower(c) && !u[c-'a']){cout<<-1;return 0;}
		if(isupper(c) && !ok){cout<<-1;return 0;}
		if(isupper(c) && !u[c-'A']){cout<<-1;return 0;}
		if(isupper(c) && u[c-'A']!=2)ans++;
	}

	cout<<ans;



	
}

