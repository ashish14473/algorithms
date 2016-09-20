#include<bits/stdc++.h>

using namespace std;
vector<pair<int ,int> > v[1000];
int main()
{
	int x,y,z;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%d",&x,&y,&z);
		v[x].push_back(make_pair(y,z));
		//v[y].push_back(make_pair(x,z));
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d--> ",i);
		for(int j=0;j<v[i].size();j++)
		{
			printf("(%d ,%d)-->  ",v[i][j].first,v[i][j].second);
		}
		printf("\n");
	}
	return 0;
}
