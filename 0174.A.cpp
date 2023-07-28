#include<bits/stdc++.h>
using namespace std;
double n,m;
double sum=0;
double a[105],b[105];
int main()
{
	scanf("%lf%lf",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&b[i]);
		sum+=b[i];
	}
	sum+=m;
	sum/=n;
	for(int i=1;i<=n;i++)
	{
		a[i]=sum-b[i];
		if(a[i]<0)
		{
			printf("-1");
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%.6lf\n",a[i]);
	}
	return 0;
} 
