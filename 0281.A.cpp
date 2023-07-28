#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{
//	freopen("data.in","r",stdin);
	cin>>s;
	if(s[0]>='a'&&s[0]<='z')
	s[0]-=32;
	cout<<s;
	return 0;

}
