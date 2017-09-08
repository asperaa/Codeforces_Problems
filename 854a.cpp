#include <bits/stdc++.h>

using namespace std;


int gcd(int a,int b)
{
	int arem;
	if(b==0)
		return a;
	else
	{
		arem=a%b;
		return gcd(b,arem);
	}
}

int main()
{
	int n;
	cin>>n;

	int a=0,b=0;
	for(int i=1;i<=n-i;i++)
	{
		if(gcd(i,n-i)==1)
		{
			a=i;
			b=n-i;
		}
	}

	cout<<a<<" "<<b;
}


