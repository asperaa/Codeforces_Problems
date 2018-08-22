#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,k,t;
	cin>>n>>m>>k>>t;

	vector< pair<int,int> >p;
	for(int i=0;i<k;i++)
	{
		int r,c;
		cin>>r>>c;
		p.push_back(make_pair(r,c));
	}

	int cnt=0;
	for(int i=0;i<t;i++)
	{
		cnt=0;
		int flag=0;
		int r,c;
		cin>>r>>c;


		for(int j=0;j<k;j++)
		{
			if(p[j].first==r && p[j].second==c)
			{
				cout<<"Waste"<<endl;
				flag=1;
				break;
			}

			if(p[j].first<r)
				cnt++;
			else if(p[j].first==r && p[j].second<c)
				cnt++;
		}

		if(flag==0)
		{
		
			int newC=m*(r-1)+c-cnt;

			if(newC%3==0)
				cout<<"Grapes"<<endl;
			else if(newC%3==1)
				cout<<"Carrots"<<endl;
			else if(newC%3==2)
				cout<<"Kiwis"<<endl;
		}


	}


		
}






