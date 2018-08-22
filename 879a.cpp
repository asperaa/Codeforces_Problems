#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	vector< pair<int,int> >v;
	v.push_back(make_pair(0,0));

	for(int i=0;i<n;i++)
	{
		int s,d;
		cin>>s>>d;
		v.push_back(make_pair(s,d));
	}

	vector<int>a(n+1,0);

	for(int i=1;i<=n;i++)
	{
		int c=1;
		int d=v[i].first;
		while(d<=a[i-1])
		{
			d=v[i].first+c*v[i].second;
			c++;
		}

		a[i]=d;
	}

	cout<<a[n];

}

