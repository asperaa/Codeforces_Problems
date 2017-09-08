#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int n,k;

	cin>>n>>k;

	string s;
	cin>>s;

	set<char>c;

	for(int i=0;i<s.length();i++)
	{
		c.insert(s[i]);

	}

	vector<char>v2(c.begin(),c.end());

	vector<int>v;

	for(int i=0;i<v2.size();i++)
	{
		v.push_back(count(s.begin(),s.end(),v2[i]));
	}

	//for(int i=0;i<v.size();i++)
	//	cout<<v[i]<<endl;

	for(int i=0;i<v.size();i++)
	{
		if(v[i]>k)
		{
			cout<<"NO";
			return 0;
		}

	}

	cout<<"YES";

}





