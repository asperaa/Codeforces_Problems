#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,k;
	cin>>n>>k;

	if(k==0)
	{
		cout<<0<<" "<<0;
		return 0;
	}

	else if(n==k)
	{
		cout<<0<<" "<<0;
		return 0;
	}

	else if(2*k>=n-k)
	{
		cout<<1<<" "<<n-k;
		return 0;
	}

	else
	{
		cout<<1<<" "<<2*k;
		return 0;
	}
}

