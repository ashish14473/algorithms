#include <bits/stdc++.h>
using namespace std;
vector<pair<string,int> > v;
 
bool cmp(const pair<string,int> &p,const pair<string,int> &k)
{
	return (p.second>k.second);
}
int main() 
{
	map<string,int> maps;
	int arr[1000];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
 
	sort(arr,arr+n);
	string s;
	int flag=0;
	for(int i=0;i<m;i++)
	cin>>s,maps[s]++;
 
	for(map<string,int> :: iterator it=maps.begin();it!=maps.end();it++)
	v.push_back(make_pair(it->first,it->second));
 
 
 
	/*for(int i=0;i<v.size();i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}*/
 
 
 
 
	sort(v.begin(),v.end(),cmp);
	long int ms=0,mxs=0;
 
	for(int i=0,j=(n-1);i<v.size();i++,j--)
	{
	//	cout<<arr[i]<<" "<<arr[j]<<endl;
		ms=ms+v[i].second*arr[i];
		mxs=mxs+v[i].second*arr[j];
 
	}
 
	cout<<ms<<" "<<mxs;
 
 
 
 
 
	return 0;
}

