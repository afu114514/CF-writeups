#include<bits/stdc++.h>
using namespace std;
int k,l,m,n,d,ans;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>k>>l>>m>>n>>d;
	for(int i=1;i<=d;i++)
	{
		if(i%k==0||i%l==0||i%m==0||i%n==0)
		ans++;
	}
	printf("%d",ans);
	return 0;
}
