#include<bits/stdc++.h>

using namespace std;
int t,n;
int b[105];
int m;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
		}
		for(int j=1;j<=n;j++)
		{
			cin>>m>>s;
			for(int i=0;i<m;i++)
			{
				if(s[i]=='D')
				{
					b[j]++;
					if(b[j]==10)
					b[j]=0;
				}
				
				if(s[i]=='U')
				{
					b[j]--;
					if(b[j]==-1)
					b[j]=9;
				}
				
				
			}
			printf("%d ",b[j]);
		}
		printf("\n");
	}
	return 0;
}
