#include<bits/stdc++.h>

using namespace std;
vector<int> v[1000];
stack<int> s;
int visited[10]; 
void toposort(int i)
{
	visited[i]=1;
	for(int j=0;j<v[i].size();j++)
	{
		if(visited[v[i][j]]==0)
		{
			toposort(v[i][j]);
		}
		
	}
	s.push(i);
	
	
}
void displaysort(int n)
{
	int c;
	for(int i=0;i<n;i++)
	{
		c=s.top();
		s.pop();
		printf("%d   ",c);
	}
}





int main()
{
	int x,y,n,m;
	scanf("%d%d",&n,&m);
	while(m--)
	{
		scanf("%d%d",&x,&y);
		v[x].push_back(y);
	}
	for(int i=1;i<=n;i++)
	{
		sort(v[i].begin(),v[i].end());
	}
	
	for(int i=1;i<=n;i++)
	{
		printf("%d   ",i);
		for(int j=0;j<v[i].size();j++)
		{
			printf("%d  ",v[i][j]);
		}
		cout<<endl;
	}
	
	
	
	for(int i=0;i<n;i++)
	{
		if(visited[i]!=1)
		{
			toposort(i);
		}
	}
	
	displaysort(n);
	
	return 0;
}
