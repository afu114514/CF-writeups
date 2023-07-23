#include<bits/stdc++.h>
using namespace std;
long long n,ans=1;
int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>n;
	if(n==0)
	{
		cout<<ans<<endl;
		return 0;
	}
	else
	while(--n)
	{
		ans=(ans*3)%1000003;
	}
	cout<<ans<<endl;
	return 0;
}
