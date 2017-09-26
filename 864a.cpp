#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int>v(n,0);

	for(int i=0;i<n;i++)
		cin>>v[i];
	set<int>s(v.begin(),v.end());

	vector<int>v1(s.begin(),s.end());

	if(v1.size()==2)
	{
		int c1=count(v.begin(),v.end(),v1[0]);
		int c2=count(v.begin(),v.end(),v1[1]);

		if(c1==n/2 && c2==n/2)
			{
				cout<<"YES\n";
				cout<<v1[0]<<" "<<v1[1]<<endl;
				return 0;
			}
		else
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}

	else
	{
		cout<<"NO\n";
		return 0;
	}

}
