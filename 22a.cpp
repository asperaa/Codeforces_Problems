#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main()
{

	vector<int>v;
	int n;
	int c;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>c;
		v.push_back(c);
	}
	
	set<int>s(v.begin(),v.end());

	vector<int>v1(s.begin(),s.end());
	
	
	if(v1.size()==1)
		cout<<"NO";
	else
		cout<<v1[1];
}
