#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,t,p=1;
	
	cin>>n>>k>>t;
	
	if(t<=k)
		cout<<t;
	else if(t>=k && t<=n)
		cout<<k;

	else if(t>n)
		cout<<k-(t-n);

	return 0;
	
}
