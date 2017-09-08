#include <iostream>
#include <string>

using namespace std;

int main()
{
	char d;
	cin>>d;

	string s="qwertyuiopasdfghjkl;zxcvbnm,./";

	
	string u;
	cin>>u;

	for(int i=0;i<u.length();i++)
	{
		cout<<s[s.find(u[i])+(d=='L')-(d=='R')];

	}

}


