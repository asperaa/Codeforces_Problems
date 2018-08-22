#include <bits/stdc++.h>

using namespace std;

int countWays(int a[],int m,int n)
{
	if(n==0)
		return 1;
	else if(n<0)
		return 0;
	else if(m<=0 && n>0)
		return 0;

	else
		return countWays(a,m-1,n)+countWays(a,m,n-a[m-1]);
}

int main()
{
	int m;
	cin>>m;

	int a[m];

	for(int i=0;i<n;i++)
		cin>>a[i];

	int n;
	cin>>n;

	cout<<"Ways "<<countWays(a,m,n)<<endl;
}