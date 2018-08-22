#include <bits/stdc++.h>

using namespace std;

int main()
{
	string t;
	cin>>t;


	vector<string>s={"Danil", "Olya", "Slava", "Ann" ,"Nikita"};
	
	int cnt=0;
	for(int i=0;i<t.length();i++)
	{
		for(string j:s)
		{
			cnt+=(t.substr(i,j.size())==j);
		}
	}

	if(cnt==1)
		cout<<"Yes";
	else
		cout<<"No";

}

