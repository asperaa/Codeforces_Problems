#include <bits/stdc++.h>

using namespace std;


bool sortbysec(const pair<long long,long long>&a, const pair< long long,long long >&b)
{
	long long a1=a.second-a.first;
	long long b1=b.second-b.first;

	return a1>b1;
}
int main()
{
	int n,f;
	cin>>n>>f;
	


	vector<pair<long long,long long > >p;
	
	int valid=0;
	for(int i=0;i<n;i++)
	{
		int k,l;
		cin>>k>>l;

		if(k==0||l==0)
			continue;
		p.push_back(make_pair(min(k,l),min(2*k,l)));
		
		valid++;
	}
		
	n=valid;	
	sort(p.begin(),p.end(),sortbysec);
	
	
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		if(f>0)
		{
			sum+=p[i].second;
			f--;
		}

		else
			sum+=p[i].first;

	}


	cout<<sum;

}









