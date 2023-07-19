#include<bits/stdc++.h>
using namespace std;
long long t,a,b;


int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a>b)
		swap(a,b);
		if(a==1&&b==1)
		cout<<0<<endl;
		else
		cout<<2*a+b-2<<endl;
		
	}
	return 0;
}
