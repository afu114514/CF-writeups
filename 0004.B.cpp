#include<bits/stdc++.h>
using namespace std;
long long d,s,k1=0,k2=0;
long long ans[105],a[105],b[105];
int main()
{
	cin>>d>>s;
	for(long long i=1;i<=d;i++)
	{
		cin>>a[i]>>b[i];
		k1+=a[i];
		k2+=b[i];
	}
	if(k1>s||s>k2)
	{
		cout<<"NO\n";
		return 0;
	}
	else
	{
		cout<<"YES\n";
		for(long long i=1;i<=d;i++)
		{
			cout<<min(b[i],s-k1+a[i])<<" ";
			s-=min(b[i],s-k1+a[i]);
			k1-=a[i];
		}
	}
	return 0;
}
