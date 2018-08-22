#include <bits/stdc++.h>

using namespace std;

long long sumOD(string n)
{
	long long sum=0;
	for(int i=0;i<n.length();i++)
		sum+=n[i]-'0';

	return sum;

}

long long sumO(long long n)
{
	long long sum=0;

	if(n<10)
	{
		return n;
	}
	while(n>0)
	{

		int r=n%10;
		sum+=r;
		n=n/10;
	}

	return sum;
}	
int main()
{
	ios_base::sync_with_stdio(0);
	string n;
	cin>>n;
	long long sum=sumOD(n);
	long long cnt=1;

	if(n.length()==1)
	{
		cout<<0;
		return 0;
	}

	if(sum<10)
	{
		cout<<1;
		return 0;
	}
	while(1)
	{
		sum=sumO(sum);
		cnt++;	
		
		if(sum/10==0)
			break;

		
	}

	cout<<cnt;	

}

