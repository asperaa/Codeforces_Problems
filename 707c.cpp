#include <bits/stdc++.h>

using namespace std;

int main()
{
long long int n;

	cin>>n;

long long int k,m;

	if(n<3)
	{
		cout<<-1;
		return 0;
	}

	else if(n%2==0)
	{
		k=n*n/4 +1;
		m=n*n/4-1;

		cout<<k<<" "<<m;
		return 0;
	}

	else
	{
		k=(n*n+1)/2;
		m=(n*n-1)/2;

		cout<<k<<" "<<m;
		return 0;
	}

}
