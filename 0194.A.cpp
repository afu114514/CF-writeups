#include<bits/stdc++.h>
using namespace std;
long long n,k;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n>>k;
	cout<<max(3*n-k,0ll)<<endl;
	return 0;
}
