#include<bits/stdc++.h>

using namespace std;
long long gcd(long long a,long long b)
{
	return (b?gcd(b,a%b):a);
}
long long a,b,n,t=1;
int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>a>>b>>n;
	while(n)
	{
		if(t&1)
		n-=gcd(n,a);
		else
		n-=gcd(n,b);
		t++;
	}
	cout<<(t&1)<<endl;
	return 0;
}
