#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	cout<<setprecision(8);
	cout<<fixed;

	 float maxx=100000;
	 float ans=maxx;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;

		float c=(float)a/(float)b;
		
		if(c<ans)
			ans=c;
	}

	cout<<ans*m;
}


