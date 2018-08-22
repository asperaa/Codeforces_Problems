#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>a(n,0);

	for(int i=0;i<n;i++)
		cin>>a[i];
		
	sort(a.rbegin(),a.rend());

	
	for(int i=0;i<n-2;i++)
	{
		if(a[i]<a[i+1]+a[i+2])
		{
			cout<<"YES";
			return 0;
		}
	
	}

	cout<<"NO";
}
