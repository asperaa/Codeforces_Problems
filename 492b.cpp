#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n,l;
	cin>>n>>l;
	
	vector<int>v(n,0);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());

	double minn=0;


		for(int i=0;i<n-1;i++)
		{
			if(v[i+1]-v[i]>minn)
				minn=v[i+1]-v[i];
		}
		

		double can=minn/2;
		
		cout<<fixed;
		cout<<setprecision(10);
		cout<<max(can,max((double)(l-v[n-1]),(double)(v[0]-0)));

		return 0;

}
