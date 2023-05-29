#include<bits/stdc++.h>
using namespace std;
char a[3][3];

int main()
{
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	{
	cin>>a[i][j];
	}
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	{
		if(a[i][j]!=a[3-i-1][3-j-1])
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	

	return 0;
}
