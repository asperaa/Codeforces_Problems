#include <bits/stdc++.h>

using namespace std;

void dfs(int start,vector<int>* visited,vector< vector<int> >* Graph)
{
	cout<<start<<" ";
	
	for(int i=0;i<Graph->at(start).size();++i)
	{
		if(visited->at(Graph->at(start)[i])==0)
		{
			visited->at(Graph->at(start)[i])=1;
			dfs(Graph->at(start)[i],visited,Graph);
		}
	}
}

int main()
{
	//declare the start vertex and the visited vector and Graph vector of vector
}