#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a=n%10;
	int b=n%100-n%10;
	int c=n%1000-n%100;
	int d=(n-n/10000*10000)/1000*1000;
	int e= n/10000*10000;
	if(n>10000) printf("%d %d %d %d %d ",a, b, c, d, e);
	else if(n>1000) printf("%d %d %d %d ",a, b, c, d);
}
