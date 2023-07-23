#include<bits/stdc++.h>
using namespace std;
long long t,n,m,k,x,y,op,v;	
int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k>>x>>y;
		op=(x+y)&1,v=0;
		while(k--)
		{
			cin>>x>>y;
			if(op==((x+y)&1))
			v=1;
		}
		cout<<(v?"NO":"YES")<<endl;
	}
	return 0;
}
