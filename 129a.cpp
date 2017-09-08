#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}

	for(int i=0;i<n;i++){
		cont=sum-a[i];
		if(cont%2==0)
			c++;
	}

	cout<<c;
}
