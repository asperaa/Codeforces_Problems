#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,x;



	cin>>n>>x;
	
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{ 
		cin>>a[i];
		sum+=a[i];
	}

	if(x-sum==n-1)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}



