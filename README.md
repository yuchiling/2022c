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

# Week08
## step01-0
2個 while迴圈 來畫出直角三角形(有空格、有星星)所以先用 for迴圈來思考
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n; k++)
        {
            if(k<=n-i) printf(" ");
            else printf("*");

        }
        printf("\n");
    }

}
```
## step01-1
只能使用2個while迴圈, 去寫出有空格、有星星的直角三角形
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i=1;
	while(i<=n)
	{
		int k=1;
		while(k<=n)
		{
			if(k<=n-i) printf(" ");
			else printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}
```

## step01-2
質數判別,能不能被整除。被整除, 就不是質數, 所以就這樣反過來想即可
```cpp
#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數字是不是很孤僻的質數:");
    int n;
    scanf("%d", &n);
    int bad=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)bad=1;
    }
    if(bad==0) printf("%d 是質數(沒有壞掉)", n);
    else printf("%d 不是質數(早就壞掉了)", n);
}
```

## step01-3
"列出質數" 用 for迴圈列出 2到a 的所有質數
 ```cpp
 #include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	
	for(int n=2; n<=a; n++)
	{
		int bad=0;
		for(int i=2; i<n; i++)
		{
			if(n%i==0) bad=1;
		}
		if(bad==0) printf("%d ", n);
	}
}
```

# Week10
## step01-0
陣列array,照著課本練習陣列宣告、陣列宣告順便給值、把值拿出來用
```cpp
#include <stdio.h>
int main()
{
    int a[4] ={10, 20, 30, 40};

    printf("a[0]:%d\n", a[0] );
    printf("a[1]:%d\n", a[1] );
    printf("a[2]:%d\n", a[2] );
    printf("a[3]:%d\n", a[3] );
}
```

## step01-1
用篩子法快速把全部質數找出來,我們先用 for迴圈 + 陣列
```cpp
#include <stdio.h>
int main()
{
    int a[4] ={10, 20, 30, 40};

    for(int i=0; i<4; i++)
    {
        printf("a[%d]: %d\n", i, a[i]);
    }

    for(int i=3; i>=0; i--)
    {
        printf("%d ", a[i] );
    }
}
```

# Week11
## step01-0
想要將3個數字從小到大排好時,我們需要一個技巧-交換 int temp=a; a=b; b=temp; 
```cpp
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
```

## step01-1
三數排序的部分,使用的口訣是「比大小,不對就交換」, 先把 a b 比, 再把 b c 比, 最重的已經沉到最下面
```cpp
#include <stdio.h>
int main()
{
    int a=90, b=80, c=70;
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    if(b>c)
    {
        int temp=b;
        b=c;
        c=temp;
    }
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    printf("a:%d b:%d c:%d", a, b, c);
}
```
## step01-2
只要比相鄰的、不對就交換,程式碼能簡化。本題試著做10數排序,使用攝影師拍團體照時調整高低的方法,口訣「從左到右巡一輪,兩兩比較,不對就交換」會發現最肥的數字慢慢移到右邊了
```cpp


## step01-3
只把「最肥的數字」移到右邊,因此,我們就用 Ctrl-C 的方法 貼很多次, 並逐一印出來,觀察它的變化,越排越多都排好了
```cpp

#include <stdio.h>
int main()
{
    int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};
    for(int i=0; i<10; i++)
    printf("%d ", a[i]);
    printf("\n");

    for(int i=0; i<10-1; i++)
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++)
    printf("%d ", a[i]);
    printf("\n");
    for(int i=0; i<10-1; i++)
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++)
    printf("%d ", a[i]);
    printf("\n");
    for(int i=0; i<10-1; i++)
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++)
    printf("%d ", a[i]);
    printf("\n");
}


# week12
## step01-0
Selection Sort 選擇排序法, 口訣 左手i 右手j, 不對就交換
```cpp
#include <stdio.h>
int main()
{
    int a[5]={5,4,3,2,1};

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<5; i++) printf("%d ", a[i]);
}
```

## step01-1
要理解二維陣列,就要照課本的方式來畫圖。從簡單的整數宣告、整數宣告並給初始值、陣列宣告、陣列宣告並給初始值、二維陣列宣告、二維陣列宣告並初始值
```cpp
#include <stdio.h>
int main()
{
    int a;
    int b=10;
    int c[3];
    int d[3]={10,20,30};
    int g[2][3];
    int h[2][3]={ {10, 20, 30}, {40, 50, 60} };
}
```

## step01-2
接下來,把二維陣列拿來用, 配合2層迴圈,超完美。口訣還是「左手i、右手j」,在宣告時,看到的左邊、右邊, 在寫 for迴圈時,也是對應左邊、右邊。在printf()用的時候, 也是 a[i][j] 對應左邊、右邊
```cpp
#include <stdio.h>
int main()
{
    int a[2][3]={ {10,20,30},{40,50,60} };

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", a[i][j] );
        }
        printf("\n");
    }
}
```
## step01-3
先從數字乘法、向量乘法(內積對應項相乘、加起來)、矩陣乘法, 從簡單開始慢慢來。同時矩陣乘法有點難,我們先在這裡實作「矩陣加法」也就是典型的 二層迴圈+陣列, 口訣還是左手i右手j。



# Week13
## step01-0
實習課的題目「買賣股票的最佳時機」
```cpp
#include <stdio.h>
int main()
{
	int a[100];
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}

	int left, right;
	int ans=-9999999;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[j] - a[i] > ans)
			{
				ans=a[j]-a[i];
				left=a[i];
				right=a[j];
			}
		}
	}
	printf("請按任意鍵繼續 . . . \n");
	printf("最大利潤=%d-%d=%d\n", right, left, ans);
}
```

## step01-1
Fibonacci數列,與黃金比例有關係,也與A4白紙的比例有點關係。不過重點就是 a[i] = a[i-1] + a[i-2]; 接著for迴圈的範圍就要想一下, 要從2開始, 不然a[i-2]會有負數在裡面而出錯。在 a[0] a[1] 也要先手動填好。最後全部印出來(不要印太多, 不然會overflow爆炸)
```cpp
#include <stdio.h>
int main()
{
    int a[50];
    a[0]=0;
    a[1]=1;
    for(int i=2; i<45; i++)
    {
        a[i] = a[i-1] + a[i-2];

    }
    for(int i=0; i<45; i++)
    {
        printf("%d ", a[i]);

    }
}
```

# Week15
## step01-0
 我們先從字串的宣告、宣告並定義初始值、字串在 printf()裡使用%s拿來用
```cpp
#include <stdio.h>
int main()
{

        printf("Hello World\n");
        char line[] = "Hello World";
        printf("整數 %d\n", 100);
        printf("浮點數 %f\n", 3.14159265358979);
        printf("%s 字串\n", line);

}
```
## step02-1

```cpp
#include <stdio.h>
int main()
{
    printf("%c : %d\n", 65, 65);
    printf("%c : %d\n", 66, 66);
    printf("%c : %d\n", 67, 67);
    printf("%c : %d\n", 'A', 'A');
    printf("%c : %d\n", 'B', 'B');
    printf("%c : %d\n", 'C', 'C');
    printf("上面用數字 64 及單引號'a'的結果都一樣\n");
    printf("%c : %d\n", 97, 97);
    printf("%c : %d\n", 'a', 'a');
}
```












