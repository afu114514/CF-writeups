#include<bits/stdc++.h>
using namespace std;
long long t,n,m;
char a[10];
int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		cout<<m*((1+n)*n-2+m+1)/2<<endl;
	}
	return 0;
}
