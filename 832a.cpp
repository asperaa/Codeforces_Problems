#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int n,k;
	cin>>n>>k;

	if((n/k)%2!=0)
		cout<<"YES";
	else
		cout<<"NO";
}
