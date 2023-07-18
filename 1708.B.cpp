#include<bits/stdc++.h>
using namespace std;
int t;
long long l,r,n;
int ans[100005];
int main()
{
	cin>>t;
	while(t--)
	{
	
		cin>>n>>l>>r;
		bool v=true;
		for(int i=1;i<=n;i++)
		{
				
				if(r/i*i<l)
				{
					v=false;
					printf("NO\n");
					break;
				}
				ans[i]=r/i*i;
		}
		if(v)
		{
			printf("YES\n");
			for(int i=1;i<=n;i++)
			{
				printf("%d ",ans[i]);
			}
			printf("\n");
		}
	}
	return 0;	
}
