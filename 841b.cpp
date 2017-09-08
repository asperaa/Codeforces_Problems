#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n,o=0,e=0,om=0,em=0;
	cin>>n;

	vector<int>v;
	int c;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		v.push_back(c);
	}

	
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" "<<endl;
while(v.size()>0)
{
	for(int i=0;i<v.size();i++)
	{
		o+=v[i];

		if(o%2==1)
		{
			v.erase(v.begin()+i);
			i--;
		}

		else
		{

			o-=v[i];
			if(o==0)
				continue;
			else{
				om++;
				break;
			}
		}

	}

	for(int i=0;i<v.size();i++)
	{
		e+=v[i];

		if(e%2==0)
		{
			v.erase(v.begin()+i);
			i--;
		}

		else
		{
			e-=v[i];
			if(e==0)
				continue;
			else
			{
				em++;
				break;
			}
		}

	}




}


	cout<<om<<endl;

	cout<<em<<endl;

	if(om>em)
		cout<<"First";
	else
		cout<<"Second";

}



	
