#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<pair<int,int>>v;

	int d;
	for(int i=1;i<=n;i++)
	{
		cin>>d;

		v.push_back(make_pair(i,d));
	}


