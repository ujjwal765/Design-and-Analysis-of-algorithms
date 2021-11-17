#include<iostream>
#include<vector>
using namespace std;
vector<int> a[100000];
int visited[100000];
void dfs(int k)
{
	if(!visited[k])
	{
		visited[k]=1;
		for(int i=0;i<a[k].size();i++)
		{
			if(!visited[a[k][i]])
				dfs(a[k][i]);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int p,q;
		cin>>p>>q;
		a[p].push_back(q);
	}
	int l,m;
	cin>>l>>m;
	dfs(l);
	if(visited[m]==1)
		cout<<"Yes Path Exists"<<endl;
	else
		cout<<"No Path Doesn't Exists"<<endl;
}