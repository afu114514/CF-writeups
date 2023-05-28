#include<bits/stdc++.h>
using namespace std;
string a;
int sum;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>a;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='4'||a[i]=='7')
		sum++;
	}
	if(sum==4||sum==7)
	{
		printf("YES");
	}
	else
	printf("NO");
	return 0;
}
