#include<bits/stdc++.h>
using namespace std;
long long 	n,t;
struct node{
	long long x,a;
}s[1005];
long long ans=0;
bool cmp(node m,node n)
{
	return m.x<n.x; 
}	
int main()
{
	cin>>n>>t;
	for(long long i=1;i<=n;i++)
	{
		cin>>s[i].x>>s[i].a;
	}
	sort(s+1,s+1+n,cmp);
	for(long long i=2;i<=n;i++)
	{
		if(2*(s[i].x-s[i-1].x)>s[i].a+s[i-1].a+2*t)
		ans+=2;
		else if(2*(s[i].x-s[i-1].x)==s[i].a+s[i-1].a+2*t)
		ans+=1;
		
	}
	cout<<ans+2<<endl;
	return 0;
}
