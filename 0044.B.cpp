#include<bits/stdc++.h>
using namespace std;
long long n,a,b,c,ans=0;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n>>a>>b>>c;
	for(long long i=0;i<=c;i++)
	for(long long j=0;j<=b;j++)
	{
		if((2*n-4*i-2*j>=0)&&(2*n-4*i-2*j<=a))//the loop must be c&b,for a is the smallest 
		ans++;	
	}
	cout<<ans<<endl;
	return 0;
}
