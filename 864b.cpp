#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	string s;
	cin>>s;
	set<char>se;
	vector<int>v;
	for(int i=0;i<s.length();i++)
	{
		while(s[i]>='a' && s[i]<='z')
		{
			se.insert(s[i]);
			i++;
		}

		v.push_back(se.size());
		se.clear();
	}

	cout<<*max_element(v.begin(),v.end())<<endl;

	return 0;
}





