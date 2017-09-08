#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string s,t;

	cin>>s;
	cin>>t;
	int i=0,j=0;
	for(<s.length() && j<t.length();j++)
	{
		if(s[i]==t[j]){
			i++;
		}
	}

	cout<<(i+1);
}

