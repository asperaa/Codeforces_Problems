#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long long int n;
	int flag=0;
	cin>>n;
	long long int r,q,c=0;
	while(n>0){

		r=n%10;
		if(r==4 || r==7)
			c++;
		n=n/10;
//		cout<<n<<endl;
	}

//	cout<<c<<endl;

	q=c;
	while(q>0){
	
//	cout<<"Init C "<<c<<endl;
		r=q%10;
		if(!(r==4 || r==7))
			flag=1;
			

		q=q/10;

//		cout<<c<<endl;
	}

	if(flag==1 || c==0)
		cout<<"NO";
	else
		cout<<"YES";


}
