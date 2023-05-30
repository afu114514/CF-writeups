#include<bits/stdc++.h>
using namespace std;
int n,a[105];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++)
	{
		if(a[i]>a[1])
		{
			printf("%d",a[i]);
			return 0;
		}
	}
	printf("NO");


	return 0;
}
