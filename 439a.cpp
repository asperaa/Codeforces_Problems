#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;

	int a[n];

	for(int i=0;i<n;i++)
		cin>>a[i];
	
	int cnt=0,maxC=0,time=0;
	for(int i=0;i<n;i++)
	{
		/*if(i==n-1)
		{
			if(time+a[i]<=d)
			{
				time+=a[i];
				cnt++;
			}
			while(time<=d)
			{
			
				time+=5;
				maxC++;

			//	cout<<"oh\n";
			}*/
				
		
			
		if(time+a[i]<=d)
		{
			if(i!=(n-1))
			{
				time=time + a[i]+10;
				maxC+=2;
				cnt++;
	//			cout<<"on"<<endl;
			}

			if(i==(n-1))
			{
				cnt++;
				time=time+a[i];
				while(time+5<=d)
				{
					time+=5;
					maxC++;
				}
				
			}

			
		}

		else
			break;
	
}
	
	//cout<<time<<endl;
	if(cnt!=n)
		cout<<-1;
	else
		cout<<maxC;
}
