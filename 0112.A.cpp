#include<bits/stdc++.h>
using namespace std;

char s1[105],s2[105];
int l1,l2;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>s1>>s2;
	l1=strlen(s1);
	l2=strlen(s2);
	for(int i=0;i<l1;i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z')
		s1[i]+=32;
	}
	for(int i=0;i<l2;i++)
	{
		if(s2[i]>='A'&&s2[i]<='Z')
		s2[i]+=32;
	}
	int ans=strcmp(s1,s2);
	printf("%d",ans==0?0:(ans>0?1:-1));
	return 0;

}
