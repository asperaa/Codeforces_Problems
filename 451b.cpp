#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int cnt=0,ind=0;
	if(a[1]<a[2])
	{
		for(int i=2;i<=n;i++)
		{
			if(a[i]>a[i+1])
			{
				cnt++;
				ind=i;
			}
		}

		if(cnt==0)
		{
			cout<<"Yes"<<endl;
			cout<<1<<" "<<1;
		}

		else if(cnt==1)
		{
			cout<<"Yes"<<endl;
			cout<<ind<<" "<<n;
		}

		else
		{
			cout<<"no"<<endl;
		}
	}

	else if(a[1]>a[2])
	{
		for(int i=2;i<=n;i++)
		{
			if(a[i]<a[i+1])
			{
				cnt++;
				ind=i;
			}
		}
		
		if(cnt==0)
		{
			cout<<"Yes"<<endl;
			cout<<1<<" "<<n;
		}

		else if(cnt==1)
		{
			cout<<"Yes"<<endl;
			cout<<ind<<" "<<n;
		}

		else
		{
			cout<<"no";
		}
	}
}
				
