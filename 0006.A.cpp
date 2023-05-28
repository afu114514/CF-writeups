#include<bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
	for(int i=1;i<=4;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+5);
	if(a[1]+a[2]>a[3]||a[2]+a[3]>a[4])printf("TRIANGLE\n");
	else if(a[1]+a[2]==a[3]||a[2]+a[3]==a[4]) printf("SEGMENT\n");
	else printf("IMPOSSIBLE\n");
	return 0;
}
