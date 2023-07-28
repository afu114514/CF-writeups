#include<bits/stdc++.h>
using namespace std;
char a[105];
int n,t;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>n>>t;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(t--)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]=='B'&&a[i+1]=='G')
			{
			swap(a[i],a[i+1]);
			i++;
		}
		}
	}
	for(int i=1;i<=n;i++)
	cout<<a[i];
	return 0;

}
