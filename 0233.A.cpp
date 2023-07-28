#include<bits/stdc++.h>
using namespace std;


long long n;
int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>n;
	if(n&1)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	else
	{
		for(long long i=1;i<=n;i+=2)
		{
			cout<<i+1<<" "<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
