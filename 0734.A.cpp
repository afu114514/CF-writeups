#include<bits/stdc++.h>
using namespace std;
char a[100005];
int n,t;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]=='A')
		t++;
	}
	if(t>n-t)
	printf("Anton");
	else if(t<n-t)
	printf("Danik");
	else
	printf("Friendship");
	return 0;

}
