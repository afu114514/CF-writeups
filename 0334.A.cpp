#include<bits/stdc++.h>
using namespace std;
long long n;

int main()
{
//	freopen("data.in","r",stdin);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n/2;j++)
		{
			cout<<n*(i-1)+j<<" "<<n*n+1-n*(i-1)-j<<" ";
		}
		cout<<endl;
		
	}	
	return 0;

}
