#include<bits/stdc++.h>
using namespace std;
int a[105],ans;

int main()
{
//	freopen("data.in","r",stdin);
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	sort(a,a+4);
	for(int i=0;i<4;i++)
	{
		if(a[i]==a[i+1])
		ans++;
	}
	printf("%d",ans);
	return 0;

}
