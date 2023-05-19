#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(int i=0; i<=n; i++)
	{
		ans+=2*i+1;
	}
	printf("f(%d)=%d", n, ans);
}
