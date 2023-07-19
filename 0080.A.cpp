#include<bits/stdc++.h>
using namespace std;
long long t,n,k;
bool is_prime(long long a)
{
	if(a==1)
	return false;
	for(long long i=2;i*i<=a;i++)
	{
		if(a%i==0)
		return false;
	}
	return true;
	
}
int main()
{
	cin>>n>>k;
	for(long long i=n+1;i<k;i++)
	{
		if(is_prime(i))
		{
			cout<<"NO\n";
			return 0;
		}
	}
	if(is_prime(k))
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}
