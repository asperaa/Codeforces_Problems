#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k;
	string s;

	cin>>s;
	cin>>k;

	set<char>c;
	for(int i=0;i<s.length();i++)
		c.insert(s[i]);

	vector<char>v(c.begin(),c.end());

	vector<int>v1(v.size(),0);

	for(int i=0;i<c.size();i++)
	{
		for(int j=0;j<s.length();j++)
		{
			if(v[i]==s[j])
			{
				v1[i]++;
			}
		}
	}

	int diff=v.size()-k;

	int cnt=0;
	for(int i=0;i<v1.size();i++)
	{
		if(v1[i]>1)
			cnt+=v1[i]-1;

	}

	diff =abs(diff);
	if(cnt>diff)
		cnt=diff;

	if(k>s.length())
		cout<<"impossible";
	else if(c.size()>=k)
		cout<<0;
	else
		cout<<cnt;
}
