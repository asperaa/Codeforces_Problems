#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s;
	getline(cin,s);

	set<char>d;

	for(int i=0;i<s.length();i++){
		if(isalpha(s[i]))
			d.insert(s[i]);
	}

	cout<<d.size();
	
}
