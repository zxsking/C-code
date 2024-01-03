//改写例 3. 3 程序，使之可以适用于任何大写字母。从键盘输入一个大写字
//        母，在显示屏上显示对应的小写字母。
#include <stdio.h>

int main(){
//    要求按照考试成绩的等级输出百分制分数段，A 等为 85 分以上，B 等为
//    70 84 分,C 等为 60 69 分，D 等为 60 分以下。成绩的等级由键盘输入。
//    char grade ;
//
//    scanf("%c", &grade);
//    switch (grade) {
//        case 'A'  :
//            printf("85-100");
//            break;
//        case 'B':
//            printf("70-84");
//            break;
//        case 'C':
//            printf("60-69");
//            break;
//        case 'D':
//            printf("0-59");
//            break;
//        default:
//            printf("error data");
//    }

//
//    假如想直接输出数列中第 25 个数,
//            是很困难的。如果用数组来处理，在 概念上反而简单了：
//
    int nums[25] = {1, 1};
    for (int i = 2; i < 25; ++i) {
        nums[i] = nums[i - 1] + nums[i - 2];

    }

    for (int i = 0; i < 25; ++i) {
        if (i % 5 == 0) {
            printf("\n");
        }
        printf("%12d", nums[i]);

    }




    //冒泡排序
    //创建一个n阶数组
//    int a[4] = { 0 };
//    for(int i=0;i<4;++i){
//        if(i&1){
//            a[i]=1;
//        }
//    }
//
//    for (int i = 0; i < 4; ++i) {
//        printf("%d", a[i]);
//    }


//    int nums[] = {7,43,1,224,6,8,9,5};
//
//
//    int len = sizeof(nums)/sizeof(int);
//    int num=1;
//    for (int i = 0; i < 50; ++i) {
//        scanf("%d", &nums[i]);
//        if (nums[i] < 0) {
//            nums[i] = 0;
//            break;
//        }
//        len++;
//    }
    //for循环n次

//    for (int i = 0; i < len; ++i) {
//        int temp = 0;
//        for (int j = 0; j < len - i -1,oc ; ++j) {
//            if(nums[j] > nums[j+1]){
//                temp = nums[j+1];
//                nums[j+1] = nums[j];
//                nums[j] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < len; ++i) {
//        printf("%d\n", nums[i]);
//    }
        //for循环 n-i次

}