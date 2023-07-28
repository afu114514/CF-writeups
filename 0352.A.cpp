#include<bits/stdc++.h>
using namespace std;
long long n;
long long a=0,b=0,t;

int main()
{
//	freopen("data.in","r",stdin);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>t;
		if(t==5)
		a++;
		else
		b++;
	}
	if(b==0)
	{
		cout<<"-1";
		return 0;
	}
	for(long long i=1;i<=a/9*9;i++)
	{
		cout<<"5";
	}
	for(long long i=1;i<=(a<9?1:b);i++)
	cout<<"0";
	return 0;

}
