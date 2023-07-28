#include<bits/stdc++.h>
using namespace std;
long long n;
const long long mod=1000000007;
void mul(long long f[2],long long a[2][2])
{
	long long c[2];
	memset(c,0x00,sizeof(c));
	for(long long j=0;j<2;j++)
		for(long long k=0;k<2;k++)
		c[j]=(c[j]+f[k]*a[k][j])%mod;
	memcpy(f,c,sizeof(c));
}
void mulself(long long a[2][2])
{
	long long c[2][2];
	memset(c,0x00,sizeof(c));
	for(long long i=0;i<2;i++)
		for(long long j=0;j<2;j++)
			for(long long k=0;k<2;k++)
				c[i][j]=(c[i][j]+a[i][k]*a[k][j])%mod;
	memcpy(a,c,sizeof(c));			
}
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	long long f[2]={1,0};
	long long a[2][2]={{3,1},{1,3}};
	for(;n;n>>=1)
	{
		if(n&1)
		mul(f,a);
		mulself(a);
	}
	cout<<f[0]<<endl;
	return 0;
}
