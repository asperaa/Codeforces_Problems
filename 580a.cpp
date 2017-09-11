#include <bits/stdc++.h>

using namespace std;
long long a[100000],k,maxx;
int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
		cin>>a[i];
	k=1;	
//	maxx=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]>=a[i-1])
			k++;
		else
		{
			maxx=max(maxx,k);
			k=1;
		}
	}
	maxx=max(maxx,k);
	cout<<maxx<<endl;
}

