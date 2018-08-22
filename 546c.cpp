#include <bits/stdc++.h>

using namespace std;

queue<int>q1,q2;

int main()
{
	int n;
	cin>>n;

	int l;
	cin>>l;

	while(l--)
	{
		int c;
		cin>>c;
		q1.push(c);
	}

	int r;
	cin>>r;

	while(r--)
	{
		int d;
		cin>>d;
		q2.push(d);
	}

	int cnt=0;
	for(int i=1;i<=40000000;i++)
	{
		int x=q1.front();
		int y=q2.front();

		q1.pop();
		q2.pop();

		if(x>y)
		{
			q1.push(y);
			q1.push(x);
		}

		else
		{
			q2.push(x);
			q2.push(y);
		}

		cnt++;

		if(q1.empty())
		{
			cout<<cnt<<" "<<2;
			return 0;
		}

		if(q2.empty())
		{
			cout<<cnt<<" "<<1;
			return 0;
		}
	}

	cout<<-1;
}

