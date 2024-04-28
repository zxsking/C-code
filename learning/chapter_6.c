//CHAPTER SIX

// 6.1 用筛选法求100内的素数
//#include <stdio.h>
//#define N 100
//int main()
//{
//    int i,j;
//    int a[N+1];
//
//    for (i = 1; i <= N; ++i)
//    {
//        a[i] = 1;
//    }
//    a[1] = 0;
//
//    for (i = 2; i * i <= N; ++i)
//    {
//        for (int j = i * i; j <= N; j = j + i)
//        {
//            if(a[j] == 1)
//            {
//                a[j] = 0;
//            }
//        }
//    }
//
//    for (i = 1; i <= N; ++i)
//    {
//        if(a[i] == 1)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}



// 6.2 用选择法对10个整数排序
//#include <stdio.h>
//void select_sort(int *a, int n)
//{
//    int i,j,k,t;
//    for (int i = 0; i < n - 1; ++i)   //第n-1次时只剩最后一个元素一定是为最大或最小值
//    {
//        k = i;
//        for (j = i + 1; j < 10; ++j)
//        {
//            if(a[k] < a[j])     // (a[k] < a[j])时递减    (a[k] < a[j])时递减
//            {
//                k = j;
//            }
//        }
//        if (k != i)
//        {
//            t = a[k];
//            a[k] = a[i];
//            a[i] = t;
//        }
//    }
//}
//int main()
//{
//    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    select_sort(a, 10);
//    for (int i = 0; i < 10; ++i)
//    {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}


// 6.3 求一个N*N的整形对角线元素之和
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define N 3
//
//int main()
//{
//    int i, j, sum, a[3][3];
//    srand(time(NULL));
//    for (i = 0, sum = 0; i < N; ++i)
//    {
//        for (j = 0; j < N; ++j)
//        {
//            a[i][j] = rand() % 20 + 1;      //随机生成 1~20之间的数
//            if (i == j || i == (N - j - 1))
//            {
//
//                sum += a[i][j];     //因为每个数只会生成一次所以在生成时累加不会出现对角线重合点加两次情况
//            }
//        }
//    }
//    for (i = 0; i < N; ++i)
//    {
//        for (j = 0; j < N; ++j)
//        {
//            printf("%4d", a[i][j]);
//        }
//        printf("\n");
//    }
//    printf("对角线和为%d", sum);
//
//    return 0;
//}



//6.4 有一个已排好序的数组 .要求输人一个数后.按原来排序的规律将它插入数组中。
//#include <stdio.h>
//void insert(int *a, int n, int k)
//{
//    int i;
//    for (i = n; k < a[i - 1] && i >= 0; --i)
//    {
//        a[i] = a[i - 1];
//    }
//    a[i] = k;
//}
//int main()
//{
//    int i, n, k, a[10] = {10, 20, 30, 40, 50, 60};
//    n = 6;
//    scanf("%d", &k);
//    insert(a, n, k);
//    n++;
//
//    for (i = 0; i < n; ++i)
//    {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}


//6.5 将一个数组中的值按逆序重新存放。例如 .原来顺序为 8,6,5,4,1。要求改为 1,4,5,6,8
//#include<stdio.h>
//#define N 6
//int main()
//{
//    int a[N], i, j, t;
//
//    printf("输入6个元素:\n");
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    i = 0, j = N -1;
//    while(i< j)
//    {
//        t = a[j], a[j] = a[i], a[i] = t;
//        i++, j--;
//    }
//    for (i = 0; i < N; i++)
//    {
//        printf("%3d", a[i]);
//    }
//
//    return 0;
//}


//6.6输出杨辉三角
//#include <stdio.h>
//#define N 10
//int main()
//{
//    int i, j, a[N][N];
//    for (i = 0; i < N; ++i)
//    {
//        a[i][0] = 1;
//        a[i][i] = 1;
//        for (j = 1; j < i; ++j)
//        {
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//        }
//    }
//    for (i = 0; i < N; ++i)
//    {
//        for (j = 0; j <= i; ++j)
//        {
//            printf("%-4d", a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//6.7 魔方阵
//#include <stdio.h>
//#define N 10
//void magic_square(int a[N][N], int n)
//{
//    int pre_row, pre_col, row, col, i;
//    row = 0, col = n / 2;
//    for (i = 1; i <= n * n; ++i)
//    {
//        a[row][col] = i;
//        pre_row = row, pre_col = col;
//        row = (row - 1 + n) % n;
//        col = (col + 1) % n;
//        if (a[row][col] != 0)
//        {
//            row = pre_row + 1;
//            col = pre_col;
//        }
//    }
//
//}
//int main()
//{
//    int a[N][N] = {0}, n, i, j;
//    scanf("%d", &n);
//    magic_square(a, n);
//    for (i = 0; i < n; ++i)
//    {
//        for (j = 0; j < n; ++j)
//        {
//            printf("%3d", a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//6.8 找鞍点
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//#define ROWS 5
//#define COLS 5
//void findSaddlePoint(int a[ROWS][COLS])
//{
//    int i, j;
//    int rolMax, colMin;
//    int saddlePointFound = 0;
//    for (i = 0; i < ROWS; i++)      //遍历每一行
//    {
//        rolMax = a[i][0];
//        for (j = 1; j < COLS; j++)          //找出第i行的最大值
//            if (a[i][j] > rolMax)
//                rolMax = a[i][j];
//
//        for (j = 0; j < COLS; j++)          //遍历每一列
//        {
//            colMin = a[0][j];
//            for (int k = 1; k < ROWS; k++)      //找出第j列的最值
//                if (a[k][j] < colMin)
//                    colMin = a[k][j];
//
//            if (a[i][j] == rolMax && a[i][j] == colMin)     //最重要的一点!!!!   看这个判断这两个值是否为同一个值
//            {
//                printf("找到鞍点(%d, %d): %d\n", i, j, a[i][j]);
//                saddlePointFound = 1;
//            }
//        }
//    }
//    if (!saddlePointFound)
//        printf("No saddle point found.\n");
//}
//int main()
//{
//    int i,j;
//    int a[ROWS][COLS];
//    srand(time(NULL));
//    for (i = 0; i < ROWS; ++i)
//        for (j = 0; j < COLS; ++j)
//            a[i][j] = rand()%100 + 1;
//
//    findSaddlePoint(a);
//
//    for (i = 0; i < ROWS; ++i)
//    {
//        for (j = 0; j < COLS; ++j)
//            printf("%3d", a[i][j]);
//        printf("\n");
//    }
//    return 0;
//}


//6.12 翻译电报 原文有以下规律  A>Z  B>Y  C>X ....
//  #include <stdio.h>
//  #include <string.h>
//  int main()
//  {
//      int i;
//      char str[5] = "yllp";
//      char strc[5];

//     for(i = 0; i <= strlen(str); i++)
//     {
//         if(str[i] >=65 && str[i] <= 90)
//         {
//             strc[i] = 90 - (str[i] - 64) + 1;
//         }else if(str[i] >= 97 && str[i] <= 122)
//         {
//             strc[i] = 122 - (str[i] -96) + 1;
//         }
//     }

//     printf("密码为:%s\n",str);
//     printf("原文为:%s",strc);
//     return 0;

// }

//6.13 编写一程序将两个字符串连接起来不用strcat函数
//#include <stdio.h>
//int main()
//{
//    char a[50],b[10];
//    char *p, *q;
//    p = a;
//    q = b;
//
//    gets(p);
//    gets(q);
//
//    while (*p)
//    {
//        p++;
//    }
//    while (*q)
//    {
//        *p = *q;
//        p++;
//        q++;
//    }
//    printf("%s", a);
//    return 0;
//}

//6.14 编写 strcmp  s1=s2相等返回0    s1>s2或s1<s2   返回 s1和s2最后比较字符的ASCII差值
//#include<stdio.h>
//
//int my_cmp(char *s1, char *s2)
//{
//    while (*s1 == *s2)
//    {
//        if (*s1 == 0)
//        {
//            return 0;
//        }
//        s1++;
//        s2++;
//    }
//    return (*s1 - *s2);
//}
//
//int main()
//{
//    char s1[10], s2[10];
//    int i = 0;
//    gets(s1);
//    gets(s2);
//
//    printf("%d", my_cmp(s1, s2));
//    return 0;
//}

//6.15 strcpy函数功能
//#include <stdio.h>
//char *my_cpy(char *s1, char *s2)
//{
//    char *origin = s1;
//    while (*s2)
//    {
//        *s1 = *s2;
//        s1++;
//        s2++;
//    }
//    *s1 = '\0';
//
//    return origin;       //最后会返回s1原来的地址
//}
//
//int main()
//{
//    char s1[100], s2[50];
//    int i = -1;
//
//    gets(s1);
//    gets(s2);
//    printf("%s\n", my_cpy(s1, s2));
//    printf("%s", s1);
//    return 0;
//}
