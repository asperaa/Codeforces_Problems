#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int a[5],sum=0;

	for(int i=1;i<5;i++)
		cin>>a[i];
	
	string s;
	cin>>s;

	for(int i=0;i<s.length();i++){
		sum+=a[s[i]-'0'];

	}

	cout<<sum;

}

