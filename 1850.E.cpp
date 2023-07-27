#include<bits/stdc++.h>
using namespace std;
void solve (long long a,long long b,long long c)
{
	long long l=0,r=0x3f3f3f3f;
	long long mid=(l+r)/2;
	while(l<r)
	{
		if(a*mid*mid+b*mid+c<0)
		{
			l=mid;
		}
		else if(a*mid*mid+b*mid+c>0)
		{
			r=mid;
		}
		else
		{
			cout<<mid<<endl;
			return ;
		}
		mid=(l+r)/2;
	}
}
long long t,n,C;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>t;
	while(t--)
	{
		cin>>n>>C;
		long double a,b=0,c=0,s;
		a=4*n;
		for(long long i=1;i<=n;i++)
		{
			cin>>s;
			b+=s;
			c+=s*s;
		}
		c-=C;
		b*=4;
		printf("%.0Lf\n",(sqrt(b*b-4*a*c)-b)/(2*a));
	}
	return 0;
}
