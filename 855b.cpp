#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	cin>>n;
	
//	long long a[3];
	long long p,q,r;
	cin>>p>>q>>r;

	vector<long long>v(n,0);
		for(int i=0;i<n;i++)
			cin>>v[i];
	vector<long long >:: iterator itx;
	vector<long long >:: iterator itm;
	
	itx=max_element(v.begin(),v.end());
	itm=min_element(v.begin(),v.end());

	long long maxx=*itx;
	long long minn=*itm;

	long long x=0;
	vector<long long > :: iterator it;
		if(p>0 && q>0 && r>0)
			x=(p+q+r)*(maxx);
		else if(p<0 && q<0 && r<0)
			x=(p+q+r)*(minn);
		else if(p>0 && q>0 && r<0)
			x=(p+q)*(maxx) + r*(*min_element(itx,v.end()));
		else if(p>0 && q<0 && r>0)
		{
			it=min(itx,v.end());
			x=p*maxx + q*(*it) + r*(*max_element(it,v.end()));
		}

		else if(p<0 && q>0 && r>0)
		{
			it=max_element(itm,v.end());
				
			x=p*minn + q*(*it) +r*(*it);
		}

		else if(p>0 && q<0 && r<0)
		{
			x=p*maxx+(q+r)*(*min_element(itx,v.end()));
		}

		else if(p<0 && q<0 && r<0)
		{
			x=(p+q)*minn + r*(*min_element(itm,v.end()));
		}

		else if(p<0 && q>0 && r<0)
		{
			it=max_element(itm,v.end());

			x=p*minn + q*(*it) +r*(*min_element(it,v.end()));
		}










	
		cout<<x<<endl;
					


	return 0;
}

