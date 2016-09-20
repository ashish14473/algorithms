#include<bits/stdc++.h>

using namespace std;
int p[404][404];
int d[404][404];
int main()
{
	int n,m,x,y,w;
	cin>>n>>m;
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					d[i][j]=999;
				}
			}
	
	while(m--)
	{
		cin>>x>>y>>w;
		p[x][y]=w;
		d[x][y]=w;
	}
		
		for(int k=1;k<=n;k++)
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					if(d[i][j]!=999)
					{
						if(d[i][j]>d[i][k]+d[k][j])
						d[i][j]=d[i][k]+d[k][j];
						
					}
				}
			}
		}
		
		int q;
		while(q--)
		{
			cin>>x>>y;
			if(d[x][y]>400)
			cout<<-1<<endl;
			else
			cout<<d[x][y]<<endl;
			
		}
	return 0;
}
