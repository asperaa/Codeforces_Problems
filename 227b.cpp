#include <bits/stdc++.h>

using namespace std;


int main()
{
	long long n;
	cin>>n;

	long long a[n+1];
	
	long long p[n+1],v[n+1],cp=0,cv=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		p[a[i]]=i;
		v[a[i]]=n-i+1;
	}
	
	long long m;
	cin>>m;

	long long b[m];
	for(int i=0;i<m;i++)
		cin>>b[i];

	for(int i=0;i<m;i++)
	{
		cp+=p[b[i]];
		cv+=v[b[i]];
	}
		

//	cout<<"ok";	
	cout<<cp<<" "<<cv;





}
