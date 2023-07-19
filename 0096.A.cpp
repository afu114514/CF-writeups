#include<bits/stdc++.h>
using namespace std;
string s;
int t=1;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==s[i-1])
		t++;
		else
		t=1;
		if(t==7)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;

}
