#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n,c=0,h=0,e=0;
	cin>>n;

	while(n--){
		
		cin>>e;

		if(e==-1){

			if(h==0)
				c++;
			else
				h--;
		}

		else
			h+=e;
	}

	cout<<c;




}



