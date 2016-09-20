#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > g[1000];

class heap_map
{
	int *arr;
	//map<int ,int> mp;
	int *map;
	int size;
	
	public:
	heap_map(int);
	int extract_min();
	int getmin();
	int contains(int);
	
	void decrease_key(int,int);
	void delete_min();
	void minheapify(int);
	void insert(int);
	void swap(int *,int *);
	void prims();
	int prnt(int i)
	{
		return (i-1)/2;
	}
	int lc(int i)
	{
		return (2*i+1);
	}
	int rc(int i)
	{
		return (2*i+2);
	}
	void display(int );
	
			
};

int heap_map :: contains(int val)
{
	if(map[val]==-1)
	return 0;
	else
	return map[val];
}

 heap_map :: heap_map(int n)
{
	arr=new int[n];
	map=new int[n];
	for(int i=0;i<=n;i++)
	map[i]=-1;
	
	size=0;
}

int heap_map ::  extract_min()
{
	int root;
	root=arr[0];
	
	arr[0]=arr[size-1];
	//swap(&map[arr[0]],&map[arr[size-1]]);
	map[arr[size-1]]=map[arr[0]];
	map[arr[0]]=-1;
	size--;
	minheapify(0);
	
	return root;
}

int heap_map :: getmin()
{
	return arr[0];
}


void heap_map :: decrease_key(int i,int val)
{
	arr[i]=val;
	while(i!=0&&arr[i]<arr[prnt(i)])
	{
		swap(&arr[i],&arr[prnt(i)]);
		swap(&map[arr[i]],&map[arr[prnt(i)]]);
		i=prnt(i);
	}
}

void heap_map :: minheapify(int i)
{
	int s=i;
	if(lc(i)<size&&arr[i]>arr[lc(i)])
	s=lc(i);
	
	if(rc(i)<size&&arr[rc(i)]<arr[s])
	s=rc(i);
	
	if(s!=i)
	{
		swap(&arr[i],&arr[s]);
		swap(&map[arr[i]],&map[arr[s]]);
		minheapify(s);
	}
	
}


void heap_map :: swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
}

void heap_map :: insert(int val)
{
	int i=size;
	//mp.insert(make_pair(val,size));
	map[val]=size;
	arr[size]=val;
	size++;
	while(i!=0&&arr[prnt(i)]>arr[i])
	{
		swap(&arr[prnt(i)],&arr[i]);
		swap(&map[arr[prnt(i)]],&map[arr[i]]);
		
		
		//mp.find(arr[i])->second=prnt(i);
		//mp.find(arr[prnt(i)])->second=i;
		
		i=prnt(i);
		
		
	}
	
}
void heap_map :: display(int n)
{
	for(int  i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
		
	}
	cout<<endl;
	/*map<int ,int> :: iterator it=mp.begin();
	for(;it!=mp.end();it++)
	{
		cout<<it->first<<"  ";
		
	}
	cout<<endl;
	for(it=mp.begin();it!=mp.end();it++)
	{
		cout<<it->second<<"  ";
		
	}*/
	
	for(int  i=1;i<=size;i++)
	{
		cout<<map[i]<<"  ";
		
	}
	
	
}


void heap_map ::  prims()
{
}


int main()
{

	heap_map ds(20);
	int n,v;
	cin>>n;
	int k=n;
	while(n--)
	{
		cin>>v;
		ds.insert(v);
		
	}
		ds.display(k);
		int ch,ch2,ch3,pos;
	do{
	
			cout<<endl;
			cout<<"want to decrease= ";
			cin>>ch2;
			if(ch2==1)
			{
				cout<<endl<<"enter the ps to dec= ";
				cin>>pos>>ch3;
				ds.decrease_key(pos,ch3);
		}
		ds.display(k);	
		cout<<endl;
		cout<<"want to continue= ";
		cin>>ch;	
	}while(ch==1);
	
	
	
	
	/*
	int n,m,x,y,w;
	cin>>n>>m;
	while(m--)
	{
		cin>>x>>y>>w;
		g[x].push_back(make_pair(y,w));
		g[y].push_back(make_pair(x,w));
		
	}
	
	prims();
	*/
	
	
	
	
	return 0;
}

