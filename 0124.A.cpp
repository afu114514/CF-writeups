#include<bits/stdc++.h>

using namespace std;
long long n,a,b;


int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);

	cin>>n>>a>>b;
	cout<<min(n-a,b+1)<<endl;
	return 0;
}
