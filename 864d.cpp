#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int>v(n+1,0);
	vector<int>b(n+1,0);
	vector<int>c;
	vector<bool>flag(n+1,0);

	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
		b[v[i]]++;
	}

	for(int i=1;i<=n;i++)
	{
		if(b[i]==0)
			c.push_back(i);
	}
	int cnt=c.size();

	sort(c.rbegin(),c.rend());
	for(int i=1;i<=n;i++)
	{
		if(c.empty())
			break;
		if(b[v[i]]>1)
		{
			if(c.back()<v[i] || flag[v[i]]==1)
			{
				b[v[i]]--;
				v[i]=c.back();
				c.pop_back();
			}
			else
				flag[v[i]]=1;
		}
	

	}

	cout<<cnt<<endl;

	for(int i=1;i<=n;i++)
		cout<<v[i]<<" ";
	cout<<endl;

	return 0;

}
