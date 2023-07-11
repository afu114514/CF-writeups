#include<bits/stdc++.h>
using namespace std;
long long t,n,a[105];
long long f(long long n)
{
	if(n==1)
	return 1;
	else
	return n+f(n/2);
}
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<f(n)<<endl;
	}
	return 0;
}
