#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);

	unordered_set<int>holes;

	for(int i=0;i<m;i++)
	{
		int h;
		scanf("%d",&h);
		holes.insert(h);
	}

	
	int a[k][2];

	for(int i=0;i<k;i++)
		for(int j=0;j<2;j++)
			scanf("%d",&a[i][j]);

	int bone=1,flag=0;

	if(holes.find(1)!=holes.end())
	{
		printf("%d",bone);
		return 0;
	}
		
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(bone==a[i][j])
			{
				if(j==0)
				{
					bone=a[i][j+1];
					j++;

				}
				else
					bone=a[i][j-1];
				if(holes.find(bone)!=holes.end())
				{
					flag=1;
					break;
				}

			}

			
		}

		if(flag==1)
			break;

		
	}

	printf("%d",bone);



}
