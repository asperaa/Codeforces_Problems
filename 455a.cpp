#include <bits/stdc++.h>

using namespace std;

long long arr[100000];
int main()
{
	int n;
	cin>>n;

	for(int i=0;i<=100000;i++)
		arr[i]=0;
	for(int i=0,x;i<n;i++)
	{
		cin>>x;
		arr[x]+=x;
	}

	for(int i=2;i<=100000;i++)
	{
		arr[i]=max(arr[i-1],arr[i]+arr[i-2]);
	}

	cout<<arr[100000];
}

