#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int k,r;
	cin>>k>>r;

	int minn=10;

	for(int i=1;i<10;i++){

		if((i*k)%10==0 || (i*k)%10==r){
	
			if(i<minn)
				minn=i;
	}
	
	}
	cout<<minn;

}


	
	
