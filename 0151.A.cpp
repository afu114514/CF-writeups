#include<bits/stdc++.h>
using namespace std;
int n,k,l,c,d,p,nl,np;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int x=k*l/nl;
	int y=c*d;
	int z=p/np;
	printf("%d",min(min(x,y),z)/n);

	return 0;

}
