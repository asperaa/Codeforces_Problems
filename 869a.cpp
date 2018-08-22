#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];
	int b[n];

	unordered_set <int>f;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		f.insert(a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		f.insert(b[i]);
	}

	int cnt=0;
	int val=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{

			val=a[i]^b[j];
			
			
			//int *ia=find(a,a+n,val);
			//int *ib=find(b,b+n,val);
				
			if(f.find(val)!=f.end())
				cnt++;

		}

	}

	if(cnt%2==0)
		cout<<"Karen";
	else
		cout<<"Koyomi";


		
}

