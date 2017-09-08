#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin>>n;

	vector < vector <int> > t(4);

	int c;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		t[c].push_back(i+1);
	}

	int w=min(t[1].size(),min(t[2].size(),t[3].size()));

	cout<<w<<endl;

	for(int i=0;i<w;i++)
		cout<<t[1][i]<<" "<<t[2][i]<<" "<<t[3][i]<<endl;

	return 0;
	


}

