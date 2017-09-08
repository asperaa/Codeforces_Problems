#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	cin>>s;

	int c=0;
	c=min(abs(s[0]-'a'),26-abs(s[0]-'a'));
	for(int i=0;i<s.length()-1;i++){
		c+=min(abs(s[i+1]-s[i]),26-abs(s[i+1]-s[i]));
				}
	cout<<c;
	}

