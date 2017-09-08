#include <iostream>

using namespace std;

int main()
{
	int n,m,x,y;
	cin>>n;

	int a[n+2];

	for(int i=1;i<n+1;i++)
		cin>>a[i];

	cin>>m;

	for(int i=0;i<m;i++)
	{
		cin>>x>>y;

		
		a[x-1]+=y-1;
		a[x+1]+=a[x]-y;
		a[x]=0;
	}

	for(int j=1;j<n+1;j++)
		cout<<a[j]<<endl;
}
