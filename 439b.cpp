#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,x;
	cin>>n>>x;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	sort(a,a+n);

	long long sum=0;

	for(int i=0;i<n;i++)
	{
		sum+=a[i]*x;

		if(x>1)
			x--;
	}

	cout<<sum;
}
