#include<bits/stdc++.h>
using namespace std;
double a,b,c,d;

int main(){
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
printf("%.12lf",(double)(a/b)/(double)(1-(1-a/b)*(1-c/d)));
	return 0;
 } 
