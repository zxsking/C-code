//
// Created by zhanxiaosong on 2023/12/25.
//



// int qiushu(int a, int b) {
//
// }
//
// int main(){
//
// //     char name[6] = "xxxxx";
// //     char ch = 'x';
// //     printf("%d", INT_MAX);
// //     printf("%d", INT_MIN);
// //     printf("%s\n",name );
// //     printf("%d\n", sizeof(name) );
// //     printf("%c\n",ch );
// //     printf("%d\n",sizeof(ch) );
// // //    题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
// //
//
// }



#include <stdio.h>
#include <stdlib.h>
// 获取随机值

void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i=0; i<arraySize; i++)
        array[i] = getNextValue();
}

int getNextRandomValue(void)
{
    return rand();
}

double test();
int main(void)
{
    // int myarray[10];
    // /* getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
    // populate_array(myarray, 10, getNextRandomValue);
    // for(int i = 0; i < 10; i++) {
    //     printf("%d ", myarray[i]);
    // }
    printf("%lf", test());

    printf("\n");
    return 0;
}

#include <time.h>
double  test() {
    difftime(100, 10);

}
#include <stdio.h>

