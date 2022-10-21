# 2022c
資傳一甲 程式設計 的程式倉庫
# Week06
## step01-0
考九九乘法表
```cpp
#include <stdio.h>
int main()
{
	for(int i=1; i<=9; i++)
	{
		for(int j=1; j<=9; j++)
		{
			printf("%d*%d=%2d ", j, i, j*i);
		}
		printf("\n");
	}
}
```
## step01-1
畫星星
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        int star= i*2-1;
        printf("鷹架:%d樓 %d星\n", i, star);
    }

}
```
## step01-2
畫星星金字塔
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        int space= 5-i;
        int star= i*2-1;
        for(int k=0; k<space; k++)
        {
            printf(" ");
        }
        for(int k=0; k<star; k++)
        {
            printf("*");
        }
        printf("鷹架:%d樓 %d空格 %d星\n", i, space, star);
    }

}
```
## step01-3
最大公因數
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a, b, ans;
    scanf("%d %d", &a, &b);
    for(int i=1; i<=a; i++)
    {
        if(a%i==0 && b%i==0)
            ans=i;

    }
    printf("找到ans:%d", ans);
}
```
## step01-4
輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a, b, c;
    scanf("%d %d", &a, &b);

    while(1)
    {
        c=a%b;
        printf("a:%d b:%d c:%d\n", a, b, c);
        if( c==0 ) break;
        a=b;
        b=c;

    }

     printf("中的是:%d", b);
}
```
## step01-5
數值幾乎都成立, 只有 0 是不成意
```cpp
#include <stdio.h>
int main()
{
    int a=10;

    if(-999) printf("-999成立\n");
    if(-3) printf("-3成立\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(0) printf("0不成立,所以甚麼都沒印\n");
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(4) printf("4成立\n");
    if(999) printf("999成立\n");
    if("a==0") printf("不管甚麼東西,幾乎都成立\n");

}
```

# Week07
## step01-0
復習之前教過的int整數型別, 只有32-bit,最多只能裝2,147,483,647, 所以很長很長的整數, 要用 long long int
```cpp
#include <stdio.h>
int main()
{
    int n=1234567812345678;
    printf("%d\n", n);

    long long int a=1234567812345678;
    printf("%lld\n", a);
}
```

# Week07
## step01-1
long long int 那我們便能回來複習最大公因數了。數字範圍再大一點, 結果要算好久  暴力法
```cpp
#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int ans;
    for(long long int i=1; i<=a; i++)
    {
        if(a%i==0 && b%i==0 ) ans =i;

    }
    printf("答案是:%lld\n", ans);
}
```

# Week07
## step01-2
輾轉相除法  long long int 很長很長的整數。口訣是 老大a, 老二b 可以算出 老三c=a%b, 如果老三c是0, 老二b就是答案
```cpp
#include <stdio.h>
int main()
{
    long long int a, b,c;
    scanf("%lld%lld", &a, &b);

    while(1)
    {
        c=a%b;
        printf("%lld%lld%lld\n", a, b, c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n", b);
}
```

# Week07
## step01-3
剝皮法 使用while迴圈來剝皮
```cpp
#include <stdio.h>
int main()
{
   int n=123456789;
   while(n>0)
   {
       printf("個位數是%d\n", n%10);
       n=n/10;
   }
}
```





