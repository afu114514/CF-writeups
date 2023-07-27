#include<bits/stdc++.h>
using namespace std;
double ans=1e9,x[5005],y[5005],z[5005];
double dis(long long  a,long long  b)
{
	return sqrt(((x[a]-x[b])*(x[a]-x[b]))+((y[a]-y[b])*(y[a]-y[b]))+((z[a]-z[b])*(z[a]-z[b])));
}
long long n;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i]>>z[i];
	}
	for(long long i=2;i<=n;i++)
	{
		for(long long j=2;j<i;j++)
		{
			ans=min(ans,dis(1,i)+dis(1,j)+dis(i,j));
		}
	}
	printf("%.10lf",ans/2);
	return 0;
}
