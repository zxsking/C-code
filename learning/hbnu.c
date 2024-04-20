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




//#include <stdio.h>
//int main()
//{
//    int n,i,x;
//    long double sum;
//
//    printf("请输入n:");
//    scanf("%d", &n);
//
//    sum =0.0;
//    x=1;
//
//    for (i = 1; i <= n; ++i)
//    {
////        printf("%d\n", x);
//
//        if (i % 2 == 0)
//        {
//            printf("%d/%d\n",1,x*i);
//            sum -= 1.0 / (x * i);
//        }else
//        {
//            printf("%d/%d\n",1,x*i);
//            sum += 1.0 / (x * i);
//        }
//        x = x * 10 + 1;
//    }
//    printf("%10.10Lf", sum);
//
//    return 0;
//}
//









#include <stdio.h>
int init(float *stu)
{
    int i;
    for (i = 0; i < 50; ++i)
    {
        scanf("%f", &stu[i]);
        if (stu[i] == -1)
        {
            return i;
        }
    }

    return 50;
}

float ave(const float *stu, int num)
{
    int i;
    float sum;
    for (i = 0,sum = 0; i < num; ++i)
    {
        sum += stu[i];
    }
    return (sum / num);
}

void sort(float *stu, int num)
{
    int i,j;
    float t;
    for (i = 0; i < num - 1; ++i)
    {
        for (j = 0; j < num - i - 1 ; ++j)
        {
            if(stu[j] > stu[j+1]){
                t = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = t;
            }
        }
    }
    printf("排序后的分数顺序为\n");
    for (i = 0; i < num; ++i)
    {
        printf("%.2f\n", stu[i]);
    }
}
int main()
{
    float stu[50];
    int num = init(stu);
    printf("有%d人\n", num);
    float average = ave(stu, num);
    printf("平均分为%f\n", average);
    sort(stu, num);

    return 0;
}






































