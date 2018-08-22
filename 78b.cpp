#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	string c="ROYGBIV";
	
	vector<char>s;
	for(int i=0;i<n;i++)
	{
		if(i<=6)
		s.push_back(c[i]);

		else
		{
			s.push_back(s[i-4]);
		}
	}
	
	for(int i=0;i<n;i++)
	cout<<s[i];
}


