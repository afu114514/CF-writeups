#include<bits/stdc++.h>
using namespace std;
long long t,n,k;
long long gcd(long long a,long long b)
{
	return (b==0)?a:gcd(b,a%b);
}
int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
//	cin>>t;
//	while(t--)
//	{
		cin>>n;
		for(int i=0;i<n;i++)
		{	
			for(int j=i;j<n;j++)
			cout<<"  ";
			for(int j=0;j<i;j++)
			cout<<j<<" ";
			for(int j=i;j>=0;j--)
			cout<<j<<((j!=0)?" ":"");
			
			cout<<endl;
		}
		for(int j=0;j<=n;j++)
		cout<<j<<" ";
		for(int j=n-1;j>=0;j--)
		cout<<j<<((j!=0)?" ":"");
		cout<<endl;
		for(int i=n-1;i>=0;i--)
		{
			
			for(int j=i;j<n;j++)
			cout<<"  ";
			for(int j=0;j<i;j++)
			cout<<j<<" ";
			for(int j=i;j>=0;j--)
			cout<<j<<((j!=0)?" ":"");
		
			cout<<endl;
		}
//	}
	return 0;
}
