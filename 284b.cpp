#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin>>n;

	char c;
	map<char,int>m;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		++m[c];
	}

	//cout<<m['F'];
	if(m['I']>1)
		cout<<0;
	else if(m['I']==1)
		cout<<1;
	else
		cout<<m['A'];
}
		
