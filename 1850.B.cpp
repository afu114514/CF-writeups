#include<bits/stdc++.h>
using namespace std;
long long t,n,a,b;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long ans=-1,id;
		for(long long i=1;i<=n;i++)
		{
		cin>>a>>b;
		
		if(a<=10)
		{
			if(ans<b)
			{
				ans=b;
				id=i;
			}
		}
		}
		cout<<id<<endl;
	}
	
	return 0;
}
