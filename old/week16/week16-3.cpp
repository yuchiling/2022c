#include <stdio.h>
int a[2000];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max=-99999999, sell, buy;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[j]-a[i]>max)
            {
                max=a[j]-a[i];
                buy=i;
                sell=j;

            }
        }
    }
    printf("�Ы����@���~�� . . .\n");
    printf("�̤j�Q��:%d-%d=%d\n", a[sell], a[buy], max);

}
