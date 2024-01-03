//
// Created by zhanxiaosong on 2023/12/22.
//

#include "stdio.h"

int demo(int num1, int num2);
void student();


int main(){
//    printf("%d", demo(221, 32));
//    int i = sum(1);
    printf("test")
    student();
    return 0;
}

int demo(int num1,int num2){
    int num = 1;
    for (int i = 2; i <num1; ++i) {
        for (int j = 2; j < num2; ++j) {
            if(num1%i == 0 && num2%i == 0){
                if(i > num){
                    num = i;
                }
            }
            if(num1%j == 0 && num2%j == 0){
                if(j > num){
                    num = j;
                }
            }
        }
    }
    return num;
}


int sum(int num){
    return 1;
}


void student(){
    float students[50];
    int stuNum;
    float results = 0;
    for (int i = 0; i < 50; ++i) {
        scanf("%f", &students[i]);
        results += students[i];
        if(students[i] < 0){
            stuNum = i;
            results -= students[i];
            break;
        }
    }
    printf("有%d个学生\n", stuNum);
    printf("学生的平均分为%.2f\n", results / stuNum);

}