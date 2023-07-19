#include<bits/stdc++.h>
using namespace std;
string a;
int sum;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>a;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='h'&&sum==0)
		sum++;
		if(a[i]=='e'&&sum==1)
		sum++;
		if(a[i]=='l'&&(sum==2||sum==3))
		sum++;
		if(a[i]=='o'&&sum==4)
		sum++;
	}
	if(sum==5)
	printf("YES");
	else
	printf("NO");
	return 0;
 }
