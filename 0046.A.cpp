#include<bits/stdc++.h>
using namespace std;
int n;
int v[105];
int main()
{
	scanf("%d",&n);
	int t=1;
	for(int i=1;i<=n-1;i++)
	{
		t+=i;
		if(t>n)
		t-=n;
		printf("%d ",t);
	}
	

	return 0;
}
