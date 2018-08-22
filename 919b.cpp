#include <bits/stdc++.h>

using namespace std;

int sum(int n)
{
	int s=0;

	while(n!=0)
	{
		s+=n%10;
		n=n/10;
	}

	if(s==10)
		return 1;
	else
		return 0;
}

int main()
{
	int k;
	cin>>k;

	int i;
	for(i=1;k!=0;i++)
	{
		if(sum(i))
			k--;
	}
	i--;
	cout<<i;
}
		
		

