#include<bits/stdc++.h>
using namespace std;
int y,w;

int main()
{
	scanf("%d%d",&y,&w);
	int t=max(y,w);
	if(t==6)
	printf("1/6");
	if(t==5)
	printf("1/3");
	if(t==4)
	printf("1/2");
	if(t==3)
	printf("2/3");
	if(t==2)
	printf("5/6");
	if(t==1)
	printf("1/1");
	

	return 0;
}
