#include<bits/stdc++.h>
using namespace std;
int n,a[100005],s=0;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	printf("%.10lf",s*1.0/n);
	return 0;
}
