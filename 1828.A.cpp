#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long t,n;

int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(long long i=1;i<=n;i++)
		{
			cout<<i*2<<" ";
		}
		cout<<endl;
	}
	return 0;
}
