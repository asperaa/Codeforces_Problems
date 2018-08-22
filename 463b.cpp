#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	int a[n+1];

	for(int i=1;i<n+1;i++)
	cin>>a[i];


	int cost=a[1];
	int enr=0;
	int tempenr=0;
	for(int i=1;i<n;i++)
	{
		tempenr=a[i]-a[i+1];

		if(enr+tempenr<0)
		{
			cost+=abs(enr+tempenr);
			enr=0;
		}

		else
			enr+=tempenr;
	}

	cout<<cost;

}




