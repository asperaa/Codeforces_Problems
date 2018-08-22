#include <bits/stdc++.h>

using namespace std;



int main()
{
	int n;
	cin>>n;

	int a,b,c;
	cin>>a>>b>>c;

	int dist=0;

	int minn=min(a,min(b,c));
	
	if(n==1)
	{
		cout<<0<<endl;
		return 0;
	}

	else if(minn==a)
		dist+=(n-1)*a;
	else if(minn==b)
		dist+=(n-1)*b;
	else
	{
		int mina=min(a,b);
		if(mina==a)
			{
				dist+=a;
			}

		else
			dist+=b;
		
		if(n>2)
		dist+=(n-2)*c;
	}


	cout<<dist<<endl;

}
