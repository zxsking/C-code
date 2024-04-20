//CHAPTER SIX

// 1.用筛选法求100内的素数
#include <stdio.h>

#define N 100  // 定义最大范围

//int main() {
//    int a[N+1];  // 创建一个数组，用于标记是否为素数
//    int i, j;
//
//    // 初始化数组，假设所有数都是素数
//    for (i = 1; i <= N; ++i)
//    {
//        a[i] = 1;
//    }
//
//    // 1不是素数，直接标记为0
//    a[1] = 0;
//    int count = 0;
//    // 埃拉托斯特尼筛法的实现
//    for (i = 2; i * i <= N; i++) {
//        if (a[i]) {  // 如果i是素数，那么i的倍数不是素数
//            for (j = i * i; j <= N; j += i) {
//                a[j] = 0;  // 标记i的倍数为非素数
//            }
//        }
//    }
//
//    // 输出所有素数
//    for (i = 1; i <= N; i++) {
//        if (a[i]) {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//
//    return 0;
//}



// 2.用选择法对10个整数排序
#include <stdio.h>
//void select_sort(int *a,int n)
//{
//    int i, j, k,t;
//    for (i = 0; i < n - 1; ++i)
//    {
//        k = i;
//        for (j = i + 1; j < n; ++j)
//        {
//            if(a[j] < a[k]) k = j;
//        }
//        t = a[i];
//        a[i] = a[k];
//        a[k] = t;
//    }
//}
//int main()
//{
//    int a[10] = {0, 9, 1, 8, 2, 7, 3, 6, 4, 5};
//    int i;
//
//    select_sort(a, 10);
//
//    for (i = 0; i < 10; i++)
//    {
//        printf("%4d", a[i]);
//    }
//    return 0;
//}

// 3.求一个N*N的整形对角线元素之和
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define N 3
//
//int main()
//{
//    int i, j;
//    int a[N][N];
//    int sum = 0;
//    srand(time(NULL));
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)
//        {
//            a[i][j] = rand() % (10);
//            if (i == j || i + j == N - 1)
//                sum += a[i][j];
//        }
//    }
//    printf("%d\n", N);
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)
//        {
//            printf("%3d ", a[i][j]);
//        }
//        printf("\n");
//    }
//    printf("%d:%d", N, sum);
//
//    return 0;
//}

// 4.
//  #include<stdio.h>

// int main()
// {
//     int a[11] = {1,4,6,9,13,16,19,28,40,100};
//     int i, n;

//     for(i=0;i<10;i++)printf("%d ",a[i]);

//     scanf("%d", &n);

//     for(i = 9; i >= 0; i--){
//         if(n < a[i]) {
//             a[i+1] = a[i];
//         }
//         else {
//             a[i+1] = n; break;
//         }
//         if(i == 0) a[0] = n;
//     }
//     for(i = 0; i <= 10; i++)
//         printf("%d ", a[i]);
// }

// 5.
//  #include<stdio.h>
//  #define N 6

// int main()
// {
//     int a[N],i,j,t;

//     printf(":\n");
//     for(i = 0; i < N; i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(i=0, j=N-1; i < j; i++,j--)
//     {
//         t = a[j];
//         a[j] = a[i];
//         a[i] = t;
//     }

//     for(i = 0; i < N; i++)
//     {
//         printf("%3d",a[i]);
//     }

//     return 0;
// }

// 7.
//  #include <stdio.h>
//  #define N 3

// int main()
// {
//     int a[N][N] = {0}, count, row, col, i, j;

//     count = 1, row = 0, col = N / 2;

//     while (count <= N*N)
//     {
//         a[row][col] = count;


//         i = row;
//         j = col;

//         i = i ? i-1 : N-1;
//         j = (j + 1) % N;

//         if (a[i][j]!=0||(row==0&&col==N-1))
//         {
//             i = row + 1;
//             j = col;
//         }

//         row = i;
//         col = j;

//         count++;
//     }
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             printf("%4d",a[i][j]);
//         }
//         printf("\n");
//     }
// }

// 8.找鞍点

// #include <stdio.h>

// #define ROWS 3
// #define COLS 3

// void findSaddlePoint(int a[ROWS][COLS]) {
//     int i, j;
//     int rolMax, colMin;
//     int saddlePointFound = 0;

//     for (i = 0; i < ROWS; i++) {
//         rolMax = a[i][0];

//         for (j = 1; j < COLS; j++) {
//             if (a[i][j] > rolMax) {
//                 rolMax = a[i][j];
//             }
//         }

//         for (j = 0; j < COLS; j++) {
//             colMin = a[0][j];
//             for (int k = 1; k < ROWS; k++) {
//                 if (a[k][j] < colMin) {
//                     colMin = a[k][j];
//                 }
//             }

//             if (a[i][j] == rolMax && a[i][j] == colMin) {
//                 printf("Saddle point found at (%d, %d): %d\n", i, j, a[i][j]);
//                 saddlePointFound = 1;
//             }
//         }
//     }

//     if (!saddlePointFound) {
//         printf("No saddle point found.\n");
//     }
// }

// int main() {
//     int a[ROWS][COLS] = {
//             100 , 82,83 ,
//             53, 34,53 ,
//             2 , 66,96 };

//     findSaddlePoint(a);

//     return 0;
// }

// 12.翻译电报 原文有以下规律  A>Z  B>Y  C>X ....
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

// 13.编写一程序将两个字符串连接起来不用strcat函数
#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    char b[10];
    int n; // 存放a字符串长度
    gets(a);
    gets(b);

    n = strlen(a);
    strcpy(a+n,b);


//    while (a[i] != '\0')
//    {
//        i++;
//        if (a[i] == '\0')
//        {
//            for (j = 0; a[j] != '\0'; j++)
//            {
//                a[i++] = b[j];
//            }
//            a[i] = '\0';
//            break;
//        }
//    }

    printf("%s", a);
    return 0;
}

// 14. 编写 strcmp  s1=s2相等返回0       s1>s2或s1<s2   返回 s1和s2最后比较字符的ASCII差值
//  #include<stdio.h>
//  int main()
//  {
//      char s1[10],s2[10];
//      int i = 0;
//      gets(s1);
//      gets(s2);

//     while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
//     {
//         i++;
//     }

//     printf("%d",s1[i]-s2[i]);

//     return 0;
// }

// 15 strcpy函数功能

// #include <stdio.h>
// int main()
// {
//     char s1[100],s2[50];
//     int i = -1;

//     gets(s1);
//     gets(s2);

//     do{
//         i++;
//         s1[i] = s2[i];
//     }while(s2[i] != '\0');

//     printf("%s\n",s1);
//     printf("%c",s1[5]);
//     return 0;

// }
