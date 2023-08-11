#include<bits/stdc++.h>
using namespace std;
long long t;
long long a,b,c,d,e,f,p;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d>>e>>f;
		p=abs(c-a)+abs(d-b);
		cout<<(((a!=c&&b!=d)||((e<min(a,c)||e>max(a,c))||(f<min(b,d)||f>max(b,d))))?p:p+2)<<endl;
	}
	return 0;
}
