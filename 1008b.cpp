#include<bits/stdc++.h>

using namespace std;

int main()
{
	long n;
	long w,h;
    cin>>n;
	int a[n][2];
	for(long i=0;i<n;i++)
	{
		cin>>w>>h;
		a[i][0]=w;
		a[i][1]=h;
	}

	if(a[0][0]>a[0][1])
		swap(a[0][0],a[0][1]);

	for(long i=1;i<n;i++)
	{
		if(a[i][0]<=a[i-1][1] && a[i][0]<=a[i][1])
			swap(a[i][0],a[i][1]);
	}

	/*for(long i=0;i<n;i++)
	{
		
			cout<<a[i][0]<<" "<<a[i][1]<<"\n";
	}
	*/
	for(long i=0;i<n-1;i++)
	{
		if(a[i][1]<a[i+1][1])
		{
			cout<<"NO";
			return 0;
		}
	}

	cout<<"YES";

	return 0;

}


		





