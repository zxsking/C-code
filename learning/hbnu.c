//
// Created by zhanxiaosong on 2024/3/2.
//


//#include <stdio.h>
//int main()
//{
//    int score[50] = {0};
//    for (int i = 0; i < 50; ++i)
//    {
//        scanf("%d", &score[i]);
//        if (score[i] < 0)break; //输入为负数结束输入
//    }
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char a[100];
//    int n,i;
//    scanf("%d", &n);
//    getchar();
//    for(i = 0; i< n; i++)
//    {
//        a[i] = getchar();
//    }
//    for(i = 0; i< n; i++)
//    {
//        printf("%c", a[i]);
//    }
//    return 0;
//}




#include <stdio.h>
int main()
{
    int n,i,x;
    long double sum;

    printf("请输入n:");
    scanf("%d", &n);

    sum =0.0;
    x=1;

    for (i = 1; i <= n; ++i)
    {
//        printf("%d\n", x);

        if (i % 2 == 0)
        {
            printf("%d/%d\n",1,x*i);
            sum -= 1.0 / (x * i);
        }else
        {
            printf("%d/%d\n",1,x*i);
            sum += 1.0 / (x * i);
        }
        x = x * 10 + 1;
    }
    printf("%10.10Lf", sum);

    return 0;
}


























