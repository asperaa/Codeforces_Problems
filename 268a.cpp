#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,c=0;
	cin>>n;
	int a[n][2];

	for(int i=0;i<n;i++)
		for(int j=0;j<2;j++)
			cin>>a[i][j];

	for(int i=0;i<n;i++)
		for(int f=0;f<n;f++){
			if(a[i][0]==a[f][1])
				c++;
		}

	cout<<c;

}

