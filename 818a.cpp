#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	 long long int n,k,p,w;
	
	cin>>n>>k;
	
	p=n;
	long long int d=0,c=0,l=0;
	d=p/(2*(k+1));

	l=n-(d+k*d);
	c=k*d;
	cout<<d<<" "<<c<<" "<<l;

}


