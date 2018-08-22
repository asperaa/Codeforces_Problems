#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;

	int a[n];

	int cur=0;

	for(int i=0;i<n;i++)
		cin>>a[i];

	int num=0;

	int j=0;
	while(cur<t)
	{
		cur+=86400-a[j];
		j++;
		num++;
	}

	cout<<num;
}
