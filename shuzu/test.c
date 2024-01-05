//
// Created by zhanxiaosong on 2023/12/25.
//

#include <stdio.h>
#include <stdlib.h>
int a;
double b;
float c;


int fun(int i) {
    a += 2*i;
    return a;
}



int main(){
    // int a = 10;
    // printf("%d,%d", fun(a), a);
    // printf("%d,%d", a, fun(a));
    // printf("%d", fun(a));
    // printf("%d" , a);
    // printf("%f" , b);
    // printf("%lf" , c);

    // int a = 127;
    // int b = a<<1;
    // int c = b<<1;
    // printf("%d\n", a);       //0000 0010
    // printf("%d\n", b);       //0000 0100
    // printf("%d\n", c);       //0000 1000
    // printf("%d\n", ~a);      //1111 1101

    //
    // int a [5]={1,2,3,4,5},*p=a;
    // printf("%d",p);


    // int *pa = malloc(10 * sizeof *pa); // 分配 10 个 int 的数组
    // free(pa);
    // printf("%p\n", pa);
    //
    // if(pa) {
    //     printf("%zu bytes allocated. Storing ints: ", 10*sizeof(int));
    //     for(int n = 0; n < 10; ++n)
    //         printf("%d ", pa[n] = n);
    // }

    // int *pb = realloc(pa, 1000000 * sizeof *pb); // 重分配数组更大的大小
    // if(pb) {
    //     printf("\n%zu bytes allocated, first 10 ints are: ", 1000000*sizeof(int));
    //     for(int n = 0; n < 10; ++n)
    //         printf("%d ", pb[n]); // 展示数组
    //     free(pb);
    // } else { // 若 realloc 失败，则需要返回原指针
    //     free(pa);
    // }

}
