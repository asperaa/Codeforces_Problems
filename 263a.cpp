#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	int a[5][5],r=0,c=0,cnt=0;

	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			cin>>a[i][j];

	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++){
			
			if(a[i][j]==1){
				r=i;
				c=j;
			}

		}

	cnt=abs(r-2) + abs(c-2);

	cout<<cnt;

}



