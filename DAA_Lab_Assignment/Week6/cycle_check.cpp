#include<iostream>
#include<vector>
using namespace std;
vector<int> G[100000];
int flag;
void dfs(int u,int visited[])
{
	if(visited[u]==-1)
	{
		flag=1;
		return;
	}
	visited[u]=-1;
	for(int v: G[u])
	{
		if(visited[v]!=1)
			dfs(v,visited);
	}
	visited[u]=1;
}
int main()
{
	int nodes,edges;
	cin>>nodes>>edges;
	while(edges--)
	{
		int x,y;
		cin>>x>>y;
		G[x].push_back(y);
	}
	int visited[nodes+1];
	for(int i=1;i<=nodes;i++)
		visited[i]=0;
	for(int i=1;i<=nodes;i++)
	{
		if(!visited[i])
			dfs(i,visited);
		if(flag==1)
			break;
	}
	if(flag)
		cout<<"Cycle exists"<<endl;
	else
		cout<<"Cycle doesn't exists"<<endl;
}