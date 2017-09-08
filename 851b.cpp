#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long ax,ay,bx,by,cx,cy;
	
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	long long d1=abs(bx-ax)*abs(bx-ax) +abs(by-ay)*abs(by-ay);
	long long d2=abs(cx-bx)*abs(cx-bx) +abs(cy-by)*abs(cy-by);
	long long l=(by-ay)*(cx-bx)-(cy-by)*(bx-ax);
	if(d1==d2 && l!=0)
		cout<<"Yes";
	else
		cout<<"No";

	return 0;
} 
