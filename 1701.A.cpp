#include<bits/stdc++.h>
using namespace std;
long long t,a,b,c,d;

int main()
{
		//freopen("data.in","r",stdin);
		//freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		if(a&&b&&c&&d)
		cout<<"2"<<endl;
		else if(!a&&!b&&!c&&!d)
		cout<<"0"<<endl;
		else
		cout<<"1"<<endl;
	}
	return 0;
}
