#include<bits/stdc++.h>
using namespace std;
long long n,a,b,c;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		if(a+b>=10||a+c>=10||b+c>=10)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
