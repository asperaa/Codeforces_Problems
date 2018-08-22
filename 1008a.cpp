#include<bits/stdc++.h>

using namespace std;

int check(char c)
{
	return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

char s[101];

int main()
{
	scanf("%s",s);
    cout<<s[strlen(s)];
	for(int i=0;i<strlen(s);i++)
	{
		if(check(s[i])!=1 && s[i]!='n' && check(s[i+1])!=1)
		{
			cout<<"NO";
			return 0;
		}
	}

	cout<<"YES";


	return 0;


					

		

}
