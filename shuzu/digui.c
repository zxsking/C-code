//
// Created by zhanxiaosong on 2023/12/25.
// description: 一些经典的递归
//

#include <stdio.h>
//求斐波那契数列
//int fibonacci(int n){
//    if(n == 0){
//        return 0;
//    }
//    if(n == 1){
//        return 1;
//    }
//    return fibonacci(n - 1) + fibonacci(n - 2);
//}

//顺序输出n
void shunxushuchu(int n) {
    if (n > 10) {
        shunxushuchu(n / 10);
    }
    printf("%d ", n % 10);
    //倒着输出
    //    while(n != 0){
    //        printf("%d", n % 10);
    //        n /= 10;
    //    }
}

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

//hanoi
void move(char x, char y) {
    printf("%c-->%c\n", x, y);
}

void hanoi(int m, char one, char two, char three) {
    if (m == 1) {
        move(one, three);
    } else {
        hanoi(m - 1, one, three, two);
        move(one, three);
        hanoi(m - 1, two, one, three);
    }
}


int dump(int stairNum) {
    if (stairNum == 1 || stairNum == 0) {
        return 1;
    } else {
        return dump(stairNum - 1) + dump(stairNum - 2);
    }
}

int main() {
    //    printf("%d", fibonacci(7));
    //    int n = 0;
    //    scanf_s("%d", &n);
    //    shunxushuchu(n);

    //factorial
    //    printf("%d", factorial(4));

    //
    //    //hanoi
    //    int m = 0;
    //    printf("请输入移动盘子的数量：>\n");
    //    scanf_s("%d", &m);
    //    hanoi(m, 'A', 'B', 'C');
    //

    //青蛙跳台阶问题
    int stair_num;
    printf("请输入青蛙要条的台阶数量\n");
    scanf("%d", &stair_num);
    printf("总共有%d种方式", dump(stair_num));


    printf("%d", stair_num);


    return 0;
}
