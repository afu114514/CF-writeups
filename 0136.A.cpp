#include<bits/stdc++.h>
using namespace std;
int n,t;
int a[105];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		a[t]=i;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
