#include <stdio.h>
int main()
{
	int n, bad=0;
	scanf("%d", &n);
	for(int i=1; i<=100000; i++)
	{
		if(n==i*i) bad=1;
		if(n==i*i)
		{
			printf("%d", i);
		}

	}
	if(bad==0) printf("0");

}
