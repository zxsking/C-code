//2021.1
//#include<stdio.h>
//int main()
//{
//    int i;
//    for (i = 1; i < 100; ++i)
//    {
//        if (i % 3 == 0 && i % 7 != 0)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}



//2021.2
//#include<stdio.h>
//int main()
//{
//    int i,n;
//    long long t,sum;
//    scanf("%d", &n); //int上限为12 longlong上限为20
//    for (i = t = 1, sum = 0; i <= n; ++i)
//    {
//        t *= i;
//        sum += t;
//        printf("%d:  t:%lld m:%lld\n", i, t, sum);
//
//    }
//    printf("%lld", sum);
//    return 0;
//}




//2021.3
//#include <stdio.h>
//int factsum(int n)
//{
//    int i, sum;
//    for (i = 1, sum = 0; i < n; ++i)
//    {
//        sum += (n % i ? 0 : i);
//
//    }
//    return sum;
//}
//int main()
//{
//    int m,n,i;
//    printf("输入m n(m<n):");
//
//    scanf("%d %d", &m, &n);
//    while (m < 0 || n > 1000 || m > n)
//    {
//        puts("输入不合理,请重新输入\n");
//        printf("输入m n(m<n):");
//        scanf("%d %d", &m, &n);
//    }
//
//    for (i = m; i <= n; ++i)
//    {
//        if (factsum(i) == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}




//2021.4
//#include<stdio.h
//int invert(int *x, int n)
//{
//    int i,t;
//    for (i = 0; i < n/2; ++i)
//    {
//        t = x[i];
//        x[i] = x[n - i - 1];
//        x[n - i - 1] = t;
//    }
//    return 1;
//}
//int main()
//{
//    int a[5] = {1, 2, 3, 4, 5};
//    int n = 5, i;
//    invert(a, n);
//
//    for (i = 0; i < n; ++i)
//    {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}




//2022.1
//#include <stdio.h>
//int main()
//{
//    int n,i,sum;
//    scanf("%d", &n);
//    for (i = 1, sum = 0; i <= n; ++i)
//    {
//        sum += i;
//    }
//    printf("%d", sum);
//    return 0;
//}




//2022.2
//#include <stdio.h>
//int main()
//{
//    int i, j;
//    for (i = 1; i < 10; ++i)
//    {
//        for (j = i; j < 9; ++j)
//        {
//            printf("\t");//8个空格
//        }
//        for (j = 1; j <= i; ++j)
//        {
//            printf("%d*%d=%-3d ", j, i, i * j);       //每个占8格
//        }
//        printf("\n");
//    }
//    return 0;
//}




//2022.3
//#include <stdio.h>
//int main()
//{
//    int i, j, a[10][10];
//    for (i = 0; i < 10; ++i)
//    {
//        a[i][0] = 1;
//        a[i][i] = 1;
//        for (j = 1; j < i; ++j)
//        {
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//        }
//    }
//
//    for (i = 0; i < 10; ++i)
//    {
//        for (j = i; j < 9; ++j)
//        {
//            printf("  ");
//        }
//        for (j = 0; j <= i; ++j)
//        {
//            printf("%4d", a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}




//2022.4
//#include<stdio.h>
//int gcd(int m, int n)
//{
//    int t;
//    if (n > m)
//    {
//        t = n, n = m, m = t;
//    }
//    while (n != 0)
//    {
//        t = m % n;
//        m = n;
//        n = t;
//    }
//    return m;
//}
//int main()
//{
//    int m,n;
//    scanf("%d %d", &m, &n);
//    printf("最大公约数:%d\n", gcd(m, n));
//    printf("最小公倍数:%d\n", m * n / gcd(m, n));
//    return 0;
//}




//2022.5
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//    int i;
//    if (n == 1)
//    {
//        return 0;
//    }
//    for (i = 2; i <= sqrt(n); ++i)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    int n,i;
//    scanf("%d", &n);
//    for (i = 1; i < n; ++i)
//    {
//        if (n % i == 0 && is_prime(i))
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}




//2022.6
//#include <stdio.h>
//void swap(int *a, int *b)
//{
//    int t;
//    t = *a,*a = *b,*b = t;
//}
//void select_sort(int *a, int n)
//{
//    int i, j, t,max,min;
//    for (i = 0; i < n / 2; ++i)
//    {
//        min = i;
//        max = i;
//        for (j = i + 1; j < n - i - 2; ++j)
//        {
//            if (a[j] > a[max])
//            {
//                max = j;
//            }
//            if (a[j] < min)
//            {
//                min = j;
//            }
//        }
//        //todo 如果最大值在i或者
//        if (max == i)
//        {
//            max = min;
//        }
//        swap(&a[i], &a[min]);
//        swap(&a[n-i-1], &a[max]);
//    }
//}
//int main()
//{
//    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//    select_sort(a, 10);
//    for (int i = 0; i < 10; ++i)
//    {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}




//2023.1
//#include <stdio.h>
//int main()
//{
//    int i,j,sum;
//    for (i = 1; i < 1000; ++i)
//    {
//        sum = 0;
//        for (j = 1; j < i; ++j)
//        {
//            if (i % j == 0)
//            {
//                sum += j;
//            }
//        }
//        if (sum == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}




//2023.2
//#include <stdio.h>
//int gcd(int m, int n)
//{
//    if (n == 0)
//    {
//        return m;
//    }
//    return gcd(n, m % n);
//}
//int main()
//{
//    int m, n;
//    scanf("%d %d", &m, &n);
//    printf("%d\n", gcd(m, n));
//    return 0;
//}




//2023.3
//#include <stdio.h>
//int main()
//{
//    int i,n,t,sign;
//    double sum;
//    scanf("%d", &n);
//    printf("1");
//    for (i = sign = 1, sum = 0; i <= n; ++i)
//    {
//        t = t * 10 + 1;
//        sum += 1.0 / (sign * t * i);
//
//        if (sign < 0 && i != 1)
//        {
//            printf("-1/%d", t*i);
//        } else if (i != 1)
//        {
//
//            printf("+1/%d", t * i);
//        }
//        sign = -sign;
//    }
//    printf("\n%lf", sum);
//
//    return 0;
//}




//2023.4
//#include<stdio.h>
//#define N 50
//int pt(float *a)
//{
//    int i;
//    for (i = 0; i < N; ++i)
//    {
//        scanf("%f", &a[i]);
//        if (a[i] == 0)
//        {
//            break;
//        }
//    }
//    return i;
//}
//float ave(float *a,int n)
//{
//    float sum;
//    int i;
//    for (i = 0; i < n; ++i)
//    {
//        sum += a[i];
//    }
//    return (sum / n);
//}
//void sort(float *a,int n)
//{
//    int i,j,t;
//    for (i = 0; i < n - 1; ++i)
//    {
//
//        for (j = 0; j < n - i - 1; ++j)
//        {
//            if (a[j] < a[j + 1])
//            {
//                t = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = t;
//            }
//        }
//    }
//}
//int main()
//{
//    float a[N],avg;
//    int n;
//    n = pt(a);
//    avg = ave(a, n);
//    sort(a, n);
//
//    printf("n:%d\n", n);
//    printf("avg:%f\n", avg);
//
//    for (int i = 0; i < n; ++i)
//    {
//        printf("%.2f ", a[i]);
//    }
//    return 0;
//}




#include <stdio.h>
int main()
{
    int pre_row, pre_col, row, col, count, n, a[100][100] = {0};
    scanf("%d", &n);

    row = 0, col = n / 2;
    while (++count <= n*n)
    {
        a[row][col] = count;

        pre_row = row;
        pre_col = col;

        row = (row + n - 1) % n;
        col = (col + 1) % n;

        if (a[row][col] != 0)
        {
            row = pre_row + 1;
            col = pre_col;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}