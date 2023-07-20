#include<bits/stdc++.h>
using namespace std;
long long n;	
int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>n;
	cout<<(n&n-1?"NO":"YES")<<endl;
	return 0;
}
