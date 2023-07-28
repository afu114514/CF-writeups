#include<bits/stdc++.h>
using namespace std;
long long n,k,a,b,x,y;
long double d(long long  a,long long  b,long long  x,long long  y)
{
	return sqrt((a-x)*(a-x)+(b-y)*(b-y));
}
int main()
{
	cin>>n>>k;
	long double ans=0.00;
	cin>>a>>b;
	for(long long i=1;i<n;i++)
	{
		cin>>x>>y;
		ans+=d(a,b,x,y);
		a=x,b=y;
	}
	printf("%.10Lf\n",(k*ans)/50.0);
	return 0;
}
