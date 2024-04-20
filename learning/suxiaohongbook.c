//
// Created by zhanxiaosong on 2024/4/11.
//

//5.1
//#include <stdio.h>
//int main()
//{
//    float a;
//    scanf("%f", &a);
//    if (a < 0)
//    {
//        printf("%f", -a);
//    } else
//    {
//        printf("%f", a);
//    }
//
//    return 0;
//}









//5.2
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    if (a % 2 == 0)
//    {
//        printf("%d为偶数", a);
//    }else
//    {
//        printf("%d为奇数", a);
//    }
//
//    return 0;
//}




//5.3
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    double a,b,c,s,l;
//    scanf("%lf,%lf,%lf", &a, &b, &c);
//
//    if (a + b > c && a + c > b && b + c > a)
//    {
//        l = (a + b + c)/2;
//        s = sqrt(l * (l - a) * (l - b) * (l - c));
//        printf("%lf", s);
//    } else
//    {
//        printf("不能构成三角形");
//    }
//    return 0;
//}



//5.4
//#include <stdio.h>
//int main()
//{
//    void pt(double, int, double);
//    double m;
//    int n;
//    scanf("%lf,%d", &m, &n);
//
//    switch (n)
//    {
//        case 1:
//            pt(m, n, 0.0225);
//            break;
//        case 2:
//            pt(m, n, 0.0243);
//            break;
//        case 3:
//            pt(m, n, 0.027);
//            break;
//        case 5:
//            pt(m, n, 0.0288);
//            break;
//        case 8:
//            pt(m, n, 0.03);
//            break;
//    }
//
//    return 0;
//}
//
//void pt(double m, int n, double r){
//    printf("%lf", m * (1 + n * r));
//}



//5.7

//#include <stdio.h>
//int main()
//{
//    char a;
//    a = getchar();
//    if (a >= 65 && a <= 90)
//    {
//        a += 32;
//    } else if (a >= 97 && a <= 122)
//    {
//        a -=32;
//    }
//
//    printf("%d", a);
//
//    return 0;
//}


//5.8

//#include <stdio.h>
//int main()
//{
//    char a;
//    a = getchar();
//    printf("该字符为");
//    if (a == 32)
//    {
//        printf("空格");
//    } else if (a >= 48 && a <= 57)
//    {
//        printf("数字");
//    } else if (a >= 65 && a <= 90)
//    {
//        printf("大写字母");
//    } else if (a >= 97 && a <= 122)
//    {
//        printf("小写字母");
//    }else
//    {
//        printf("其他字符");
//    }
//    return 0;
//}










//6.6
//#include <stdio.h>
//#include <math.h>
//#define R 0.01875
//double fun(double n, int y)
//{
//    if(y == 1)
//    {
//        return n;
//    }
//    n = (n + 1000)/ pow(1+R, 12);
//    n = fun(n, y - 1);
//
//    return n;
//}
//
//
//int main()
//{
//    double n;
//    int i;
//    printf("%lf\n", n = fun(0, 6));
//
//    //验证
//    for (i = 1; i <=5; ++i)
//    {
//        n = n * pow(1 + R, 12) - 1000;
//        printf("%lf\n", n);
//    }
//    return 0;
//}

















//7.7 3
//#include <stdio.h>
//int fun(int m, int n)
//{
//    int t;
//    if (m == n)
//    {
//        return m;
//    }
//    if (n > m)
//    {
//        t = m, m = n , n = t;
//    }
//    return fun(n, m - n);
//}
//int main()
//{
//    int a , b,t;
//    scanf("%d %d", &a, &b);
//
//    printf("%d", fun(a, b));
//    return 0;
//}




//#include <stdio.h>
//int main()
//{
//    int a[10][10];
//    int i,j;
//    for (i = 0; i < 10; ++i)
//    {
//        a[i][0] = 1;
//        a[i][i] = 1;
//        for (j = 1; j < i; ++j)
//        {
//            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//        }
//    }
//    for (i = 0; i < 10; ++i)
//    {
//        for (j = 9; j > i; --j)
//        {
//            printf("  ");
//        }
//        for (j = 0; j <= i; ++j)
//        {
//            printf("%4d", a[i][j]);
//        }
//        printf("\n");
//    }
//}
















//#include <stdio.h>
//int main() {
//    int n = 16; // 初始化第五天时 椰子数为16  分成5分余1   且分成4为0
//
//    int found = 0;  // 找到标记
//    int re;       //第五天的椰子数
//    while (!found) {
//        re = n; // 第五天的椰子数量
//        int i;
//
//        for (i = 4; i >= 1; i--) {
//            if (re % 4 != 0 || re % 5 != 1) {      //若第i+1的数量不是第i天其中的4份
//                break;
//            }
//            re = re / 4 * 5 + 1; // 第i天还没分时的椰子数
//        }
//        if (i == 0) {
//            found = 1;      // 如果前四个水手都分配成功，标记找到符合条件的椰子数
//        } else {
//            n += 1;        //最小加20才能和5取余为1  和4取余为0
//        }
//    }
//    printf("原来这堆椰子至少有 %d 个。\n", re);
//    return 0;
//}



//7.12
//#include <stdio.h>
//void move(int a,int c)
//{
//    printf("%c=>%c\n", a, c);
//}
//void hanoi(char A, char B, char C, int n)
//{
//    if (n == 1)
//    {
//        move(A,C);
//    }else{
//        hanoi(A, C, B,n-1);         //n-1：将n-1个盘子全部从A柱移到B柱
//        move(A, C);                         //A柱最后一个移到C柱
//        hanoi(B, A, C, n-1);        //将n-1个盘子全部从Bb柱移到C柱
//    }
//}
//int main()
//{
//    hanoi('a', 'b', 'c', 2);  //将c柱上的移到c柱
//}


//7.13 1
//#include <stdio.h>
//int main()
//{
//    int i, j;
//    int count = 0;
//    for (i = 100; i < 200; ++i)
//    {
//        for (j = 2; j < i; ++j)
//        {
//            if (i % j == 0)
//            {
//                break;
//            }
//            count++;
//        }
//        if (j >= i)
//        {
//            printf("%d ", i);
//        }
//    }
//
//    printf("\n%d", count);
//    return 0;
//}

//7.13 2-5
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n)
//{
//    int j;
//    for (j = 2; j <= sqrt(n); ++j)
//    {
//
//        if (n % j == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//void pt(int n)
//{
//    int j,sum;
//    printf("%d的因子为：", n);
//    for (j = 1, sum = 0; j < n; ++j)
//    {
//        if (n % j == 0)
//        {
//            sum += j;
//            printf("%d ", j);
//        }
//    }
//    if (n == sum)
//    {
//        printf("*************%d为完数******************", n);
//    }
//    printf("\n");
//}
//int main()
//{
//    int i, j;
//    int count = 0;
//    for (i = 3; i < 29; ++i)
//    {
//        if (is_prime(i))
//        {
//            printf("%d是素数\n", i);
//        } else
//        {
//            pt(i);
//        }
//    }
//    printf("\n%d", count);
//    return 0;
//}



#include <stdio.h>
#include <math.H>
int is_prime(int n)
{
    int i;
    for (i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void pt(int n)
{
    int i;
    printf("%d=", n);
    for (i = 2; i <= n ; ++i)
    {
        while (n % i == 0 && n != i)
        {
            printf("%d*", i);
            n = n / i;
        }
        if (n == i)
        {
            printf("%d\n", i);
        }
    }
}
int main()
{
    int i;
    for (i = 2; i < 200; ++i)
    {
        if (is_prime(i) == 1)
        {
            printf("%d为素数\n", i);
        }else
        {
            pt(i);
        }
    }
    return 0;
}


