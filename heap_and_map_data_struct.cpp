#include<bits/stdc++.h>

using namespace std;

class data_struct
{
	int *arr;
	int capacity;
	int size;
	map <char,int> m;
	public:
	data_struct(int);
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
	void minheapify(int);
	void insert(int);
	int exrtmin();
	int getmin();
	void  decreasekey(int,int);
	void  swap(int *,int *);
	void display();
};

data_struct ::data_struct (int cap)
{
	capacity=cap;
	arr=new int[cap];
	size=0;
}

void data_struct :: decreasekey(int i,int val)
{
	arr[i]=val;
	while(i!=0&&arr[i]<arr[prnt(i)])
	{
		swap(&arr[i],&arr[prnt(i)]);
		i=prnt(i);
	}	
}


void data_struct :: swap(int * a,int * b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void data_struct :: minheapify(int i)
{
	int s=i;
	if(lc(i)<size&&arr[i]>arr[lc(i)])
	s=lc(i);
	if(rc(i)<size&&arr[rc(i)]<arr[s])
	s=rc(i);
	
	if(s!=i)
	{
		swap(&arr[i],&arr[s]);
		minheapify(s);
	}
}
void data_struct ::  insert(int val)
{
	int i=size;
	size++;
	arr[i]=val;
	while(i!=0&&arr[i]<arr[prnt(i)])
	{
		swap(&arr[i],&arr[prnt(i)]);
		i=prnt(i);
	}
	this->display();
}
int data_struct :: exrtmin()
{
	int root;
		root=arr[0];
		arr[0]=arr[size-1];
		size--;
		minheapify(0);
	return root;
}
void  data_struct :: display()
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}




