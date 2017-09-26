#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	string s[n];

	for(int i=0;i<n;i++)
		cin>>s[i];
	int flag=0;
	for(int i=0;i<n;i++)
	{
		flag=0;
		if(i==0)
		{
			cout<<"NO"<<endl;
			continue;
		}

		for(int j=i-1;j>=0;j--)
		{
			if(s[i]==s[j])
			{
				cout<<"YES"<<endl;
				flag=1;
				break;
			}
		}
		
		if(flag==0)
			cout<<"NO"<<endl;
	}

	return 0;
}


