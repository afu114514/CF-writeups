#include<bits/stdc++.h>
using namespace std;
int n;
int x,y;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>n>>x>>y;
	if((x==n/2&&y==n/2)||(x==n/2&&y==n/2+1)||(x==n/2+1&&y==n/2)||(x==n/2+1&&y==n/2+1))
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	return 0;	
}
