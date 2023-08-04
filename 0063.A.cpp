#include<bits/stdc++.h>
using namespace std;
string a[105],b[105];
long long n;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(long long i=1;i<=n;i++)
	{
		if(b[i]=="rat")
		cout<<a[i]<<endl;
	}
	for(long long i=1;i<=n;i++)
	{
		if(b[i]=="woman"||b[i]=="child")
		cout<<a[i]<<endl;
	}
	for(long long i=1;i<=n;i++)
	{
		if(b[i]=="man")
		cout<<a[i]<<endl;
	}
	for(long long i=1;i<=n;i++)
	{
		if(b[i]=="captain")
		cout<<a[i]<<endl;
	}
	
	return 0;
}
