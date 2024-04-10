//
// Created by zhanxiaosong on 2024/1/3.
//

#include <stdio.h>
#include <string.h>

void swap(int *p, int *q);


void false_swap(int * p, int * q);

void maopao(int *nums,int n);


int max(int,int);

int main(int argc,char **argv)
{
//    int a = 10;
//    int *q1 = &a;
//    int * *q2 = &q1;
//    int ** *q3 = &q2;
//    int *** *q4 = &q3;
//
//    printf("%pn", &a);
//
//    printf("-----------一级指针-----------\n");
//    printf("%d\n", *q1); //指向的变量      //10
//    printf("%#p\n", q1); //指向的变量的地址         //@1
//    printf("%p\n", &q1); //指针变量的地址       //@2
//
//    printf("-----------二级指针-----------\n");
//    printf("%d\n", **q2); //指向的指针变量所指向的变量        //10
//    printf("%p\n", *q2); //指向的指针变量       //@1
//    printf("%p\n", q2); //指向的指针变量的地址       //@2
//    printf("%p\n", &q2); //二级指针变量的地址
//
//    printf("-----------三级指针-----------\n");
//    printf("***q3:%d\n", ***q3); //
//    printf("**q3:%p\n", **q3); //
//    printf("*q3:%p\n", *q3); //
//    printf("q3:%p\n", q3); //
//    printf("&q3:%p\n", &q3);//
//
//    printf("-----------四级指针-----------\n");
//    printf("%d\n", ****q4); //
//    printf("%p\n", ***q4); //
//    printf("%p\n", **q4); //
//    printf("%p\n", *q4); //
//    printf("%p\n", q4); //
//    printf("%p\n", &q4);//





    //关于数组指针和指针数组
    int nums[4][5],i,j,d=1;
    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            nums[i][j] = d++;
        }
    }
    int (*n)[5] = nums;

    //数组指针本质上是一个数组
    long long b = (long long int) (n + 1);
    long long a = (long long int) n;

    printf("数组nums的地址:%x\n", nums);
    printf("n的大小%llu\n", b - a);

    printf("n的地址:%x\n", n);
    printf("nums的地址:%x\n", *n);
    printf("n+1的地址:%x\n", n+1);
    printf("nums[1]的地址:%x\n", *(n + 1));

    /**
     * n和nums的加减是以一个一维数组为单位的\n
     * *(n+i)和nums[i]和*(nums+i)的加减都是以int类型为单位的
     * 个人觉得当一个数组被赋值给数组指针后数组指针和数组的区别不大
     * 使用*或者是下标运算符[]都会使数组 下放？
     * 比如nums和n的加减是以一维数组为单位
     * *(n+i)和nums[i]和*(nums+i)的加减则是以当前数组的类型为单位
     * 如果再使用[]或者* 下放 则他就是表示的一个int类型的值  其加减则是给这个值加减
     */




    printf("%d\n", *(*(n+1) +1));
    printf("%d\n", *(nums+1)[0]);


    //函数指针
    int (*f)(int, int) = max;
    printf("%d\n", (*f)(31,1));


















    // int a , b ;
    // int *p1, *q1, *p;
    // scanf("%d %d",&a,&b);
    // p1 = &a;
    // q1 = &b;
    //
    // printf("%d %d\n",a,b);
    // if(a < b)
    // {
        //只交换了函数中p和q的位置，并没有交换a和b的位置
        // false_swap(p1, q1);

        //可以换
        // p = q1;
        // q1 = p1;
        // p1 = p;

        //可以换
        // swap(p1, q1);
    // }
    // printf("%d %d", *p1, *q1);



/**
 *数组指针
 *
 *
 */

    // int nums[] = {1, 9, 2, 8, 3, 7, 4, 6, 5};
    // // int* p;
    // // p = nums;
    // // p = &nums[0];
    //
    // // int *p = nums;
    // int *p = &nums[0];
    //
    //
    // maopao(nums,(sizeof(nums)/sizeof(int)));
    //
    // for (int i = 0; i < sizeof(nums)/sizeof(int) ; ++i) {
    //     // printf("%d ", *p++);
    //     // printf("%d ", *(nums + i));
    //     printf("%d ", nums[i]);
    //
    // }



    return 0;
}

int max(int a,int b){
    if (a > b)
    {
        return a;
    }else{
        return b;
    }

}

void maopao(int *nums,int n)
{
    for (int i = 0; i < n-1; ++i) {
        for (int j = i; j < n-i-1; ++j) {
            if(nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}


void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void false_swap(int *p, int *q) {
    int *x;
    x = p;
    p = q;
    q = x;
}
