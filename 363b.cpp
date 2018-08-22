#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	
	cin>>n>>k;
	int a[n+1];
	a[0]=0;

	vector<int>s(n+1,0);
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	
	int least=s[k],ind=1;
	for(int i=0;i<=n-k;i++)
	{
		if(least>=s[i+k]-s[i])
		{
			least=s[i+k]-s[i];
			ind=i+1;
		}
	}

	cout<<ind;

}
