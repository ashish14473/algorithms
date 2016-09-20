#include<bits/stdc++.h>
using namespace std;

vector<int> v[1000];
int vi[1000];
int c;
//vector<int> :: iterator j;
void DFS(int i)
{
	vi[i]=1;

	
	printf("%d  ",i);
	for(int j=0;j<v[i].size();j++)
	{
		if(vi[v[i][j]]==0)
		DFS(v[i][j]);
		
	}
}

int main()
{
	int n,m,x,y;
	scanf("%d%d",&n,&m);
	
	for(int i=0;i<=n;i++)
	vi[i]=0;
	
	while(m--)
	{
		scanf("%d%d",&x,&y);
		v[x].push_back(y);	
	}	
	
	for(int i=1;i<=n;i++)
	{
		printf("%d  ",i);
		for(int j=0;j<v[i].size();j++)
		{
			printf("%d  ",v[i][j]);
		}
		printf("\n");
	}
	/*cout<<v[1][0]<<" ";
	cout<<v[1][1]<<endl;*/
	
	for(int i=1;i<=n;i++)
	{
			if(vi[i]==0)
			DFS(i);
	}
	//cout<<endl;
	//cout<<c;
	
	return 0;
}
