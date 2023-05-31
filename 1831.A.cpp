#include<bits/stdc++.h>
using namespace std;
long long t,n,a;	
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(long long i=1;i<=n;i++)
		{
			cin>>a;
			cout<<n+1-a<<" ";
		}
		cout<<endl;
	}
	return 0;
}
