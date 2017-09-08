#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,s,t,y;

	cin>>n;

	int a[n+2],total=0;
	for(int i=2;i<=n+1;i++)
	{
		cin>>y;
		a[i]=a[i-1]+y;

	}

	cin>>s>>t;

	if(s>t)
		swap(s,t);

	
	cout<<a[n]<<endl;
	cout<<min(a[t]-a[s],a[n+1]-(a[t]-a[s]));
}
