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
//    printf("-----------һ��ָ��-----------\n");
//    printf("%d\n", *q1); //ָ��ı���      //10
//    printf("%#p\n", q1); //ָ��ı����ĵ�ַ         //@1
//    printf("%p\n", &q1); //ָ������ĵ�ַ       //@2
//
//    printf("-----------����ָ��-----------\n");
//    printf("%d\n", **q2); //ָ���ָ�������ָ��ı���        //10
//    printf("%p\n", *q2); //ָ���ָ�����       //@1
//    printf("%p\n", q2); //ָ���ָ������ĵ�ַ       //@2
//    printf("%p\n", &q2); //����ָ������ĵ�ַ
//
//    printf("-----------����ָ��-----------\n");
//    printf("***q3:%d\n", ***q3); //
//    printf("**q3:%p\n", **q3); //
//    printf("*q3:%p\n", *q3); //
//    printf("q3:%p\n", q3); //
//    printf("&q3:%p\n", &q3);//
//
//    printf("-----------�ļ�ָ��-----------\n");
//    printf("%d\n", ****q4); //
//    printf("%p\n", ***q4); //
//    printf("%p\n", **q4); //
//    printf("%p\n", *q4); //
//    printf("%p\n", q4); //
//    printf("%p\n", &q4);//





    //��������ָ���ָ������
    int nums[4][5],i,j,d=1;
    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            nums[i][j] = d++;
        }
    }
    int (*n)[5] = nums;

    //����ָ�뱾������һ������
    long long b = (long long int) (n + 1);
    long long a = (long long int) n;

    printf("����nums�ĵ�ַ:%x\n", nums);
    printf("n�Ĵ�С%llu\n", b - a);

    printf("n�ĵ�ַ:%x\n", n);
    printf("nums�ĵ�ַ:%x\n", *n);
    printf("n+1�ĵ�ַ:%x\n", n+1);
    printf("nums[1]�ĵ�ַ:%x\n", *(n + 1));

    /**
     * n��nums�ļӼ�����һ��һά����Ϊ��λ��\n
     * *(n+i)��nums[i]��*(nums+i)�ļӼ�������int����Ϊ��λ��
     * ���˾��õ�һ�����鱻��ֵ������ָ�������ָ�����������𲻴�
     * ʹ��*�������±������[]����ʹ���� �·ţ�
     * ����nums��n�ļӼ�����һά����Ϊ��λ
     * *(n+i)��nums[i]��*(nums+i)�ļӼ������Ե�ǰ���������Ϊ��λ
     * �����ʹ��[]����* �·� �������Ǳ�ʾ��һ��int���͵�ֵ  ��Ӽ����Ǹ����ֵ�Ӽ�
     */




    printf("%d\n", *(*(n+1) +1));
    printf("%d\n", *(nums+1)[0]);


    //����ָ��
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
        //ֻ�����˺�����p��q��λ�ã���û�н���a��b��λ��
        // false_swap(p1, q1);

        //���Ի�
        // p = q1;
        // q1 = p1;
        // p1 = p;

        //���Ի�
        // swap(p1, q1);
    // }
    // printf("%d %d", *p1, *q1);



/**
 *����ָ��
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
