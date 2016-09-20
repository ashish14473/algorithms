//used to calculate large powers fast

#include<iostream>
#include<cmath>
using namespace std;

Function exp-by-squaring-iterative(x, n)
    if n < 0 then
      x := 1 / x;
      n := -n;
    if n = 0 then return 1
    y := 1;
    while n > 1 do
      if n is even then 
        x := x * x;
        n := n / 2;
      else
        y := x * y;
        x := x * x;
        n := (n – 1) / 2;
    return x * y

int main()
{	
	unsigned long long int x,n,y=1;
	cin>>x;
	cin>>n;
	
	
	
	cout<<pow(x,n);
	return 0;
}
