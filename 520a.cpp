#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <ctype.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	set<char>s;
	
	char c;
	while(n--)
	{
		cin>>c;
		s.insert(tolower(c));
	}

	if(s.size()==26)
		cout<<"YES";
	else
		cout<<"NO";



}


