#include <bits/stdc++.h>

using namespace std;

vector<int>v[100005];

int main()
{
	int n,k,m,num;

	cin>>n>>k>>m;
	
	//cout<<n<<k<<m;
	for(int i=0;i<n;i++)
	{
		
		cin>>num;
	//	cout<<num;
		v[num%m].push_back(num);
	}

//	cout<<v[0][1]<<endl;
	for(int i=0;i<m;i++)
	{
	//	cout<<"no";
	//	cout<<v[i].size()<<endl;
		if(v[i].size()>=k)
		{
			cout<<"Yes\n";
			for(int j=0;j<k;j++)
				cout<<v[i][j]<<" ";

			cout<<"\n";
			return 0;
		}

				

	}

	cout<<"No"<<endl;
	return 0;
}
