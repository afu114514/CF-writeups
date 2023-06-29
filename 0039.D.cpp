#include<bits/stdc++.h>
using namespace std;


int main()
{
	int x1,y1,z1,x2,y2,z2;
	scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
	if(x1^x2==0||y1^y2==0||z1^z2==0)
	printf("YES");
	else
	printf("NO");


	return 0;
 } 
