#include<bits/stdc++.h>

using namespace std;
long long n,R,r;
int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>n>>R>>r;
	puts((n>1?(R-r)*sin(3.1415927/n)+1e-7<r:r>R)?"NO":"YES");
	
	return 0;
}
