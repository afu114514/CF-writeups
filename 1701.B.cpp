#include<bits/stdc++.h>
using namespace std;
long long t,n;

int main()
{
		//freopen("data.in","r",stdin);
		//freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<"2"<<endl;
		for(long long i=1;i<=n;i+=2)
		{
			for(long long j=i;j<=n;j*=2)
			cout<<j<<" ";
		}
	}
	return 0;
}
