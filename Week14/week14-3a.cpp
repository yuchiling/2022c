#include <stdio.h>
int a[11];
int main()
{

	for(int i=1; i<=10; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int k=0; k<10; k++)
	{
		for(int i=0; i<10; i++)
		{
			if(a[i]>a[i+1])
			{
				int t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for(int i=10; i>0; i--)
	{
		printf("%d ", a[i]);
	}
}
