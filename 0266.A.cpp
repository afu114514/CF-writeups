#include<bits/stdc++.h>
using namespace std;
int n,sum;
char a,t;

int main()
{
//	freopen("data.in","r",stdin);
	cin>>n;
	while(cin>>a)
	{
		if(a==t)
		{
			sum++;
		}
		t=a;
	}
	cout<<sum;

	return 0;

}
