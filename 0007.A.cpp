#include<bits/stdc++.h>
using namespace std;
char a[10][10];
bool v1[10],v2[10];
int ans;
int main()
{
	for(int i=1;i<=8;i++)
	for(int j=1;j<=8;j++)
	{
		cin>>a[i][j];
	}
	for(int i=1;i<=8;i++)
	{
		bool f=1;
		for(int j=1;j<=8;j++)
		{
			if(a[i][j]!='B')
			f=0;
		}
		if(f)
		ans++;
	}
	for(int i=1;i<=8;i++)
	{
		bool f=1;
		for(int j=1;j<=8;j++)
		{
			if(a[j][i]!='B')
			f=0;
		}
		if(f)
		ans++;
	}
	if(ans==16)
	ans=8;
	cout<<ans<<endl;
	return 0;
}
