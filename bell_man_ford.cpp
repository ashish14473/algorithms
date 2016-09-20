#include<bits/stdc++.h>

using namespace std;
int u[100];
int v[100];
int w[100];
int parent[100];
int di[100];

int main()
{
	int m,n;
	
	scanf("%d%d",&n,&m);
	int x,y,wt;
	for(int i=1;i<=n;i++)
	{
		di[i]=999;
	}
	
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d%d",&x,&y,&wt);
		u[i]=x;
		v[i]=y;
		w[i]=wt;
	}
	int s;
	cout<<"enter source vertex= ";
	cin>>s;
	di[s]=0;
	for(int j=1;j<n;j++)
	{
		for(int j=1;j<=m;j++)
		{
			if(di[u[j]]>=999&&di[v[j]]>=999)
			continue;
				di[v[j]]=min(di[v[j]],di[u[j]]+w[j]);
			
		}
			
	}
	
	for(int i=1;i<=n;i++)
	cout<<di[i]<<" ";
	
	
	
	return 0;
}
