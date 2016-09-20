#include<bits/stdc++.h>
using namespace std;
vector<int> v[10009];
int vi[10009];
static int flag=0;
int count1=0,c=0;
void  is_contain_cycle(int i)
{
	vi[i]=1;
	if(flag==1)
	return;
	
	
	for(int j=0;j<v[i].size();j++)
	{
		
		if(vi[v[i][j]]==1)
		{
			flag=1;
			return;
		}
		if(vi[v[i][j]]==2)
		{
			continue;
		}
		
		
		 is_contain_cycle(v[i][j]);
	}
	vi[i]=2;
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
		printf("%d   ",i);
		for(int j=0;j<v[i].size();j++)
		{
			printf("%d  ",v[i][j]);
		}
		cout<<endl;
	}
	
	
	for(int i=1;i<=n;i++)
	{
	if(vi[i]==0)
		is_contain_cycle(i);
	
	}
	if(flag==1)
	printf("\ngraph contains cycle");
	
	else
	printf("\ngraph donot contains cycle");
	
	
	return 0;
}
