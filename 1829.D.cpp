#include<bits/stdc++.h>
using namespace std;
long long t,n,m,v;

bool dfs(long long n,long long m)
{

	if(n==m)
	return true;
	if(n<m||n%3)
	return false;
	else 
	{
		return	dfs(n/3,m)||dfs(2*n/3,m);
	}
}
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		
		cout<<(dfs(n,m)?"YES\n":"NO\n");		
	}
	return 0;
}
