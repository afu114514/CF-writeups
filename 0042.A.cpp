#include<bits/stdc++.h>
using namespace std;
long long n,v,s;
long long a[50],b[50];
long double ans=114514;
int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>n>>v;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	for(long long i=1;i<=n;i++)
	{
		cin>>b[i];
		ans=min(ans,(long double)b[i]/(long double)a[i]);
	}
	printf("%Lf\n",min((long double)v,ans*(long double )s));
	return 0;
}
