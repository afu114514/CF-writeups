#include<bits/stdc++.h>
using namespace std;
long long n,ans,mmin=0x3f3f3f3f;
long long a[100005];

int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++)
	{
		if(abs(a[i%n+1]-a[(i-1)%n+1])<=mmin)
		{
			mmin=abs(a[i%n+1]-a[(i-1)%n+1]);
			ans=i;
		}
	}
	cout<<ans%n+1<<" "<<(ans-1)%n+1<<endl;
	return 0;
}
