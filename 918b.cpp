#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	map<string,string>ma;

	for(int i=0;i<=n;i++)
	{
		string s;
		getline(cin,s);
		
		if(i==0)
			continue;
		//cout<<s<<endl;

		int pos=s.find(' ');
		//cout<<pos<<endl;
		string name=s.substr(0,pos);
		string ip=s.substr(pos+1);
		ma[ip]=name;
		//cout<<ma[ip]<<endl;
	}

	for(int i=0;i<m;i++)
	{
		string com;
		getline(cin,com);

		size_t pon=com.find(' ');
		string ins=com.substr(0,pon);
		string ia=com.substr(pon+1,com.length()-pon-2);
		cout<<com<<" #"<<ma[ia]<<endl;
	}

}

