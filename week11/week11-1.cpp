#include <stdio.h>
int main()
{
    int a=90, b=80;
    printf("a:%d b:%d\n", a, b);

    int t=a;
    a=b;
    b=t;
    printf("a:%d b=%d\n", a, b);
}
