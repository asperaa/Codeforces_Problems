#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=0;i<n-1 && a[i+1]>a[i];i++);
	for(;i<n-1 && a[i]==a[i+1];i++);
	for(;i<n-1 && a[i]>a[i+1];i++);

	if(i==n-1)cout<<"YES";
	else cout<<"NO";
		

}



