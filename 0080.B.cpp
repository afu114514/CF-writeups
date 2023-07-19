#include<bits/stdc++.h>
using namespace std;
int a,b,s;
double ans1,ans2;
char c;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>a>>c>>b;
	cout<<(double)(a%12)*30+(b/2.0)<<" "<<b*6;
	return 0;	
}
