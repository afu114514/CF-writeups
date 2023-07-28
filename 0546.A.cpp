#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>a>>b>>c;
	cout<<max(a*(1+c)*c/2-b,0);
	return 0;

}
