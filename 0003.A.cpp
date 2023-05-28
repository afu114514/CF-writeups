#include<bits/stdc++.h>
using namespace std;
string s1,s2,t[10];
int ans,t1,t2;
int main()
{
	cin>>s1>>s2;
	t1=abs(s1[0]-s2[0]);
	t2=abs(s1[1]-s2[1]);
		
	ans=max(t1,t2);
	for(int i=1;i<=t1;i++)
	{
		if(s1[0]<s2[0])
		t[i]+='R';
		if(s1[0]>s2[0])
		t[i]+='L';
	}
	for(int i=1;i<=t2;i++)
	{
		if(s1[1]<s2[1])
		t[i]+='U';
		if(s1[1]>s2[1])
		t[i]+='D';
	}
	printf("%d\n",ans);
	for(int i=1;i<=ans;i++)
	{
		cout<<t[i]<<endl;
	}
	return 0;
} 
