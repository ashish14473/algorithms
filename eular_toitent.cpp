#include<bits/stdc++.h>
//gives total coprime integer upto n
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int totient[n + 1];
        for (int i = 1; i <= n; ++i) totient[i] = i;
        for (int i = 2; i <= n; ++i)
         if (totient[i] == i)
          for (int j = i; j <= n; j += i)
           totient[j] -= totient[j] / i;
           
           for(int i=1;i<n+1;i++)
           {
           	cout<<totient[i]<<"   ";
           }

	return 0;
}
