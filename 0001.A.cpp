#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,a;
	scanf("%lld%lld%lld",&n,&m,&a);
	printf("%.0lf",ceil(n/(double)a)*ceil(m/(double)a)); 
	return 0;

}
