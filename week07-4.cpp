#include <stdio.h>
int main()
{
   int n=123456789;
   while(n>0)
   {
       printf("�Ӧ�ƬO%d\n", n%10);
       n=n/10;
   }
}
