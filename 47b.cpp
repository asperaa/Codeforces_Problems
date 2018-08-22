#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s[3];

	for(int i=0;i<3;i++)
		cin>>s[i];


	//cout<<s[0];
	for(int i=0;i<3;i++)
	{
	//	cout<<"p";
		if(s[i][1]=='>')
		{
//			cout<<"ok";
			s[i][1]='<';
			char temp=s[i][2];
			s[i][2]=s[i][0];
			s[i][0]=temp;
		}
	}

//	for(int i=0;i<3;i++)
//		cout<<s[i]<<endl;

	vector<int>sm(3,0);
	vector<int>l(3,0);

	for(int i=0;i<3;i++)
	{
		if(s[i][0]=='A')
			sm[0]++;
		if(s[i][2]=='A')
			l[0]++;

		if(s[i][0]=='B')
			sm[1]++;
		if(s[i][2]=='B')
			l[1]++;
		if(s[i][0]=='C')
			sm[2]++;
		if(s[i][2]=='C')
			l[2]++;
	}

	if(sm[0]==1&&sm[1]==1&&sm[2]==1)
	{
		cout<<"Impossible";
		return 0;
	}
	
//	for(int i=0;i<3;i++)
//		cout<<sm[i];
	char ans[3];
	for(int i=0;i<3;i++)
	{
		if(sm[i]==2)
			ans[0]='A'+i;
		if(sm[i]==1)
			ans[1]='A'+i;
		if(sm[i]==0)
			ans[2]='A'+i;
	}


	for(int i=0;i<3;i++)
		cout<<ans[i];

}

