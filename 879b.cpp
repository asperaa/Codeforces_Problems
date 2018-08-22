#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,k;
	cin>>n>>k;

	queue<int>q;
	
	int maxx=0;
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;

		maxx=max(p,maxx);
		q.push(p);
	}
	
	if(k>=n-1)
	{
		cout<<maxx;
		return 0;
	}

	long long int cnt=0;
	
	int b=q.front();
	q.pop();
	while(cnt<k)
	{
	
		int c=q.front();
		q.pop();

		if(b>c)
		{
			cnt++;
			q.push(c);
		}

		else
		{
			cnt=1;

			q.push(b);
			b=c;
		}

	}


	cout<<b;
}
