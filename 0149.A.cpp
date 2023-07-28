#include<bits/stdc++.h>

using namespace std;
long long n,ans=0,t=0;
long long a[15];

int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=12;i++)
	cin>>a[i];
	sort(a+1,a+1+12);
	for(long long i=12;i>=1;i--)
	{
		if(t>=n)
		break;
		t+=a[i];
		ans++;
	}
	
	cout<<(t>=n?ans:-1)<<endl;
	return 0;
}
