#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;

	cin>>s;
	
	int len=s.length();

	vector<int>pa(len+1,0);
	vector<int>pb(len+1,0);
	
	for(int i=0;i<len;i++)
	{
		if(s[i]=='a')
		{
			pa[i+1]=pa[i]+1;
			pb[i+1]=pb[i];
		}
		
		else
		{
			pa[i+1]=pa[i];
			pb[i+1]=pb[i]+1;
		}


	}
	

	int cnt=0,maxx=0;

/*	for(int i=1;i<=len;i++)
	{
		maxx=max(maxx,pa[i]+pb[len]-pb[i]);
		maxx=max(maxx,pb[i]+pa[len]-pa[i]);
	}
*/
	for(int i=1;i<=len;i++)
	{
		for(int j=i;j<=len;j++)
		{
			cnt=pa[len]-pa[j]+pa[i]+pb[j]-pb[i-1];
			maxx=max(cnt,maxx);
		}
	}

	cout<<maxx;


		
	
}
		

