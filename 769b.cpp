#include <bits/stdc++.h>

using namespace std;

bool ok(const pair<int,int>&a,const pair<int,int>&b)
{
	return (a.first>b.first);
}

int main()
{
	int n,cnt=0,flag=0;
	cin>>n;

	vector<int>q(n+1,0);
	q[1]=1;

	vector< pair<int,int> >res;
	vector< pair<int,int> >ans;
	
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=0;i<n;i++)
	{
		res.push_back(make_pair(a[i],i+1));
	}
		
	

	sort(res.begin()+1,res.end(),ok);

	for(int i=0;i<n-1;i++)
	{
		int rec=res[i].first;
		int nxt=i+1;
		while(rec>0 && nxt<n)
		{
			

			if(q[res[nxt].second]==0)
			{
				ans.push_back(make_pair(res[i].second,res[nxt].second));
				cnt++;
				rec--;
				q[res[nxt].second]=1;
			}

			nxt++;

		}

		if(accumulate(q.begin()+1,q.end(),0)==n)
		{
			flag=1;
			break;
		}
		
	}

	
	

	if(flag!=1)
	{
		cout<<-1;
		return 0;
	}

	cout<<cnt<<endl;

	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i].first<<" "<<ans[i].second<<endl;
	}

	return 0;

}


