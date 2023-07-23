#include<bits/stdc++.h>
using namespace std;
long long n;
void dfs(long long n)
{
	cout<<n<<" ";
	bool v=0;
	if(n==1)
	{
		return;
	}
	else
	{
		for(long long i=2;i<=sqrt(n);i++)
		{
			if(n%i==0&&v==0)
			{
				dfs(n/i);
				v=1;
			}
		}
	}
	if(v==0)
	cout<<1;
	return ;
}
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	dfs(n);
}
