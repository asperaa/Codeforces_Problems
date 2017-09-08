#include <bits/stdc++.h>

using namespace std;

int main()
{
	int R,d;

	cin>>R>>d;

	int n;

	cin>>n;
	
	int c=0;
	int x,y,r;

	while(n--)
	{
		cin>>x>>y>>r;

		double dist=sqrt(x*x+y*y);

		if(dist<=R-r && dist>=(R-d)+r)
			c++;
	}

	cout<<c;
}
