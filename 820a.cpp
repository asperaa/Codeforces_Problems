#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int c,v0,v1,a,l,n=1;
	cin>>c>>v0>>v1>>a>>l;
	c-=v0;
	while(c>0){
		
		if(v0+n*a<=v1){
			c-=v0+n*a;
			c+=l;
			n++;
		}

		else{
			c-=v1;
			c+=l;
			n++;
		}

	
	}

	cout<<n;

}


