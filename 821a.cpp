#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n,flag=0,dflag=0;
	cin>>n;

	int a[n][n];

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){

			if(a[i][j]!=1){
					flag=0;
				for(int s=0;s<n;s++)
					for(int t=0;t<n;t++){

						if(a[i][j]==a[i][s] + a[t][j])
							flag=1;
						}
			}
			if(flag==0 && a[i][j]!=1)
				dflag=1;


		}

	if(dflag==1)
		cout<<"No";
	else
		cout<<"Yes";

 }
