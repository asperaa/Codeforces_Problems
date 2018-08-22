#include <bits/stdc++.h>

using namespace std;

void BFS(int s,vector< vector<int> >neighbours,int V)
{
	    vector<bool>visited(V,false);
		
	//	for(int k=0;k<V;k++)
	//		visited[k]=false;


		list<int>queue;
		queue.push_back(s);
		
		visited[s]=true;
		

		vector<int> :: iterator it;
		while(!queue.empty())
		{
			
			int p=queue.front();
			queue.pop_front();

			cout<<p<<" ";

			for(it=neighbours[p].begin();it!=neighbours[p].end();++it)
			{
				if(!visited[*it])
				{
					visited[*it]=true;
					
					queue.push_back(*it);
				}
			}

			
		}
		
		
}

int main()
{
	//declare the vector of vectors for graphs
}
