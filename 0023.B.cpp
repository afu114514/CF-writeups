#include<bits/stdc++.h>
using namespace std;
long long t,n;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<max(0ll,n-2)<<endl;
	}
	
	return 0;
}
