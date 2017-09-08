#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	vector< pair< int,int > >v(m);

	for(int i=0;i<m;i++)
	{
		cin>>v[i].second>>v[i].first;
	}

	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());

	int mat=0,matb=0,i=0;
	for(i=0;i<m;)
	{
		mat+=(v[i].first)*v[i].second;
		matb+=v[i].second;

		if(matb>n)
			break;
		++i;
		if(matb<n && i==m)
		{
			cout<<mat;
			return 0;
		}
	}

	mat-=v[i].first*v[i].second;
	matb-=v[i].second;

	mat+=(n-matb)*v[i].first;

	cout<<mat;
}


	

