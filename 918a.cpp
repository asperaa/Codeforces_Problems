#include <bits/stdc++.h>

using namespace std;

int fib(int n)
{
	
}

int main()
{
	int n;
	cin>>n;
	
	vector<char>v;
	
	int a[1001];
	a[0]=1,a[1]=1;
	set<int>fib;
	fib.insert(1);

	for(int i=2;i<1001;i++)
	{
		a[i]=a[i-1]+a[i-2];
		fib.insert(a[i]);
	}


	for(int i=1;i<=n;i++)
	{
		if(fib.find(i)!=fib.end())
			v.push_back('O');
		else
			v.push_back('o');
	}

	for(int i=0;i<n;i++)
		printf("%c",v[i]);
}

		

