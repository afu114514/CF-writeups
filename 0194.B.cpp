#include<bits/stdc++.h>
using namespace std;
long long n,t;
long long gcd(long long a,long long b)
{
	return (b==0?a:gcd(b,a%b));
}
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	while(n--)
	{
		cin>>t;
		cout<<(4*t)/(gcd(4,t+1))+1<<endl;
	}
	return 0;
}
