#include<bits/stdc++.h>
using namespace std;
string a;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>a;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		a[i]+=32;
		if(a[i]!='a'&&a[i]!='o'&&a[i]!='e'&&a[i]!='y'&&a[i]!='i'&&a[i]!='u')
		cout<<'.'<<a[i];
	}
	return 0;
 }
