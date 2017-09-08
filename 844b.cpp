#include <bits/stdc++.h>

using namespace std;

long long unsigned nChoosek( unsigned n, unsigned k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    long long int result = n;
	
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}


int main()
{
	int n,m;

	cin>>n>>m;

	int a[n][m];

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];

	vector<int> r1(n,0),c1(m,0),r0(n,0),c0(m,0);

	//cout<<r1[2];
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==0)
				r0[i]++;
			else
				r1[i]++;
		}
	}

	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i][j]==0)
				c0[j]++;
			else
				c1[j]++;
		}
	}

/*	for(int i=0;i<m;i++)
		cout<<c1[i]<<" ";

	for(int i=0;i<m;i++)
		cout<<c0[i]<<" ";

	for(int i=0;i<n;i++)
		cout<<r1[i]<<" ";

	for(int i=0;i<n;i++)
		cout<<r0[i]<<" ";
*/
	long long int p1=0,p2=0,p3=0,p4=0;

	for(int i=0;i<n;i++)
	{
		for(int j=r1[i];j>1;j--)
		{
			p1+=nChoosek(r1[i],j);
		}

		for(int j=r0[i];j>1;j--)
		{
			p2+=nChoosek(r0[i],j);
		}

	}

	for(int i=0;i<m;i++)
	{
		for(int j=c1[i];j>1;j--)
		{
			p3+=nChoosek(c1[i],j);
		}

		for(int j=c0[i];j>1;j--)
			p4+=nChoosek(c0[i],j);
	}
	
	cout<<p1+p2+p3+p4+(n*m)<<endl;

//	cout<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<endl;


}
