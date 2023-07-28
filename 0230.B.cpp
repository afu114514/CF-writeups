#include<bits/stdc++.h>
using namespace std;
long long n,k,t,ans=0;
long long i;
int main()
{
	cin>>t;
	while(t--)
	{
		scanf("%lld",&n);
		k=sqrt(n);
		
		for(i=2;i*i<=k;i++)
		if(k%i==0)
		break;
		cout<<((i*i>k&&k*k==n&&n>1)?"YES\n":"NO\n");

	}
	return 0;
}
