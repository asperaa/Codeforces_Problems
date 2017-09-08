#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a,int b){

	int arem;

	if(b==0)
		return a;
	else{
		arem=a%b;
		return gcd(b,arem);
	}
}

int main()
{
	int a,b,nu=0,dr=6,ma;
	cin>>a>>b;
	ma=max(a,b);

	nu=(6-(ma-1));

	int cd=gcd(nu,dr);

	nu=nu/cd;
	dr=dr/cd;

	cout<<nu<<"/"<<dr;
}
