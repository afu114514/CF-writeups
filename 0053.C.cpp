#include<bits/stdc++.h>
using namespace std;
long long n,t1,t2;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	t1=1,t2=n;
	for(int i=1;i<=n;i++)
	{
		if(i&1)
		{
		cout<<t1<<" ";
		t1++;
		}
		else
		{
			cout<<t2<<" ";
			t2--;
		}
	}

	return 0;

}
