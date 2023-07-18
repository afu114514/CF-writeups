#include<bits/stdc++.h>
using namespace std;
long long n,t,m,ans=0;
long long a[10005];
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long x=1;
		while(x<=n)
		{
			x*=10;
		}
		cout<<(n-(x/10))<<endl;
	}
	return 0;
}
