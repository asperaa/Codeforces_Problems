#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n][2];

	for(int i=0;i<n;i++)
		cin>>a[i][0]>>a[i][1];

	int curC=a[0][1];
	int totC=a[0][0]*a[0][1];

	for(int i=1;i<n;i++)
	{
		if(a[i][1]<curC)
			curC=a[i][1];
		totC+=a[i][0]*curC;
	}

	cout<<totC;
}
		

