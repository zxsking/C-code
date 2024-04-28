//CHAPTER SIX

// 6.1 ��ɸѡ����100�ڵ�����
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



// 6.2 ��ѡ�񷨶�10����������
//#include <stdio.h>
//void select_sort(int *a, int n)
//{
//    int i,j,k,t;
//    for (int i = 0; i < n - 1; ++i)   //��n-1��ʱֻʣ���һ��Ԫ��һ����Ϊ������Сֵ
//    {
//        k = i;
//        for (j = i + 1; j < 10; ++j)
//        {
//            if(a[k] < a[j])     // (a[k] < a[j])ʱ�ݼ�    (a[k] < a[j])ʱ�ݼ�
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


// 6.3 ��һ��N*N�����ζԽ���Ԫ��֮��
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
//            a[i][j] = rand() % 20 + 1;      //������� 1~20֮�����
//            if (i == j || i == (N - j - 1))
//            {
//
//                sum += a[i][j];     //��Ϊÿ����ֻ������һ������������ʱ�ۼӲ�����ֶԽ����غϵ���������
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
//    printf("�Խ��ߺ�Ϊ%d", sum);
//
//    return 0;
//}



//6.4 ��һ�����ź�������� .Ҫ������һ������.��ԭ������Ĺ��ɽ������������С�
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


//6.5 ��һ�������е�ֵ���������´�š����� .ԭ��˳��Ϊ 8,6,5,4,1��Ҫ���Ϊ 1,4,5,6,8
//#include<stdio.h>
//#define N 6
//int main()
//{
//    int a[N], i, j, t;
//
//    printf("����6��Ԫ��:\n");
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


//6.6����������
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


//6.7 ħ����
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


//6.8 �Ұ���
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
//    for (i = 0; i < ROWS; i++)      //����ÿһ��
//    {
//        rolMax = a[i][0];
//        for (j = 1; j < COLS; j++)          //�ҳ���i�е����ֵ
//            if (a[i][j] > rolMax)
//                rolMax = a[i][j];
//
//        for (j = 0; j < COLS; j++)          //����ÿһ��
//        {
//            colMin = a[0][j];
//            for (int k = 1; k < ROWS; k++)      //�ҳ���j�е���ֵ
//                if (a[k][j] < colMin)
//                    colMin = a[k][j];
//
//            if (a[i][j] == rolMax && a[i][j] == colMin)     //����Ҫ��һ��!!!!   ������ж�������ֵ�Ƿ�Ϊͬһ��ֵ
//            {
//                printf("�ҵ�����(%d, %d): %d\n", i, j, a[i][j]);
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


//6.12 ����籨 ԭ�������¹���  A>Z  B>Y  C>X ....
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

//     printf("����Ϊ:%s\n",str);
//     printf("ԭ��Ϊ:%s",strc);
//     return 0;

// }

//6.13 ��дһ���������ַ���������������strcat����
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

//6.14 ��д strcmp  s1=s2��ȷ���0    s1>s2��s1<s2   ���� s1��s2���Ƚ��ַ���ASCII��ֵ
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

//6.15 strcpy��������
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
//    return origin;       //���᷵��s1ԭ���ĵ�ַ
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
