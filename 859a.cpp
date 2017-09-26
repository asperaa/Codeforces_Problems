#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int r,maxx=0;
	while(n--)
	{
		cin>>r;
		if(r>maxx)
			maxx=r;
	}

	if(maxx<=25)
		cout<<0;
	else
		cout<<maxx-25;

	return 0;
}
