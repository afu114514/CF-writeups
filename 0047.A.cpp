#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=32;i++)
	{
		if(i*(i+1)/2==n)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}
