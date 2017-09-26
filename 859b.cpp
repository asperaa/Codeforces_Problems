#include <bits/stdc++.h>

using namespace std;

bool ps(int n)
{
	if(n<0)
		return false;
	
	int root=round(sqrt(n));

	return n==root*root;
}

int main()
{
	int n;
	cin>>n;

	int p=n;
	int num=0;
	while(1)
	{
		if(ps(p))
		{
			num=p;
			break;
		}
		p--;
	}

	int divv=(int)round(sqrt(p));

	int peri=0;

//cout<<p<<endl;	
    double ex=(double)(n-p)/divv;

	//cout<<ceil(ex);
	peri=4*divv+2*(int)ceil(ex);

	cout<<peri;
}


