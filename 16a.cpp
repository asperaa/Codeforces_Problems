#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,m;

	cin>>n>>m;

	string s;
	char c='$';

	for(int i=0;i<n;i++)
	{
		cin>>s;

		if(s!=string(m,s[0]) || s[0]==c)
		{
			cout<<"NO";
			return 0;
		}

		c=s[0];
	}
	
	cout<<"YES";
	return 0;

}
