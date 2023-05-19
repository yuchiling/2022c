#include <stdio.h>
int main()
{
	int n, ans=0, b;
	scanf("%d", &n);
	for(int i=1; i<=10000; i++)
	{
		ans=ans+i;

		if(ans>n)
		{
			b=i;
			break;
		}



	}
	printf("%d", b);
}
