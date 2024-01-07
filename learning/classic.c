//
// Created by zhanxiaosong on 2024/1/4.
//



// #include <stdio.h>

//8.输出9*9乘法口诀
// int main()
// {
//     int i = 0;
//     int j = 0;
//
//     for (i = 1; i <=9 ; ++i)
//     {
//         for (j = 1; j <= i ; ++j)
//         {
//             printf(" %d*%d=%-2d ", j, i, j * i);
//         }
//         printf("\n");
//     }
//     return 0;
// }



//13.打印水仙花数

// #include<stdio.h>
// int main()
// {
//     int x, y, z; //分别为个位，十位，百位
//     for (int i = 100 ; i < 10000000; i++)
//     {
//         z = i / 100;
//         y = (i%100)/10;
//         x = i%10;
//         if((x*x*x + y*y*y + z*z*z) == i)
//             printf("%d\n", i);
//
//     }
//     return 0;
// }


//14.将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。

// #include <stdio.h>
// int main() {
//     int num = 0;
//     printf("请输出一个正整数");
//     scanf("%d", &num);
//     printf("%d=", num);
//
//     for (int i = 2; i <= num; ++i)
//     {
//         if(num == i)
//         {
//             printf("%d", num);
//             break;
//         }
//         while (num%i == 0)
//         {
//             num = num / i;
//             printf("%d*", i);
//         }
//     }
//     return 0;
// }

//15.利用条件运算符的嵌套来完成此题：
//学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示

// #include<stdio.h>
// int main() {
//     int score;
//     char grade;
//
//     scanf("%d", &score);
//     grade = score >= 90 ? 'A' : (score >= 60 ? 'B' : 'C');
//     printf("%c", grade);
// }

//16.输入两个正整数m和n，求其最大公约数和最小公倍数。
// //TODO 还不想花时间研究，之前写过一次忘记了QAQ
// #include<stdio.h>
// int main() {
//     int m, n, temp, product, q;
//     scanf("%d %d", &m, &n);
//     product = m*n;
//     if(m < n) {
//         temp = m;
//         m = n;
//         n = temp;
//     }
//
//     q = m % n;
//
//     while (q != 0) {
//         if(q>n) {
//
//         }
//     }
// }


//17.输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
////TODO !!!!严重的错误 将字符串存入数组输入空格时空格之后的内容会被截断 所以这里要使用getchar
// #include<stdio.h>
// #include<string.h>
// int main() {
//     int letter=0,space=0,num=0,others = 0;
//     char str[50];
//     scanf("%s", str);
//     for (int i = 0; i < strlen(str); ++i) {
//         if(str[i] == ' ') {
//             space++;
//         }else if(str[i]>='1' &&str[i] <='9') {
//             num++;
//         }else if((str[i]>='a' &&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) {
//             letter++;
//         }else {
//             others++;
//         }
//     }
//     printf("space:%d\n", space);
//     printf("letter:%d\n", letter);
//     printf("num:%d\n", num);
//     printf("others:%d\n", others);
//     return 0;
// }


//18.求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

// #include<stdio.h>
// int main() {
//     int a,n,sum=0;
//     scanf("%d %d", &a, &n);
//     while (n > 0) {
//         sum += a;
//         a = a*10 + a;
//
//         n--;
//     }
//     printf("%d", sum);
//
//     return 0;
// }


//19.一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。
////TODO 写的非常糟糕重点复习 和 14题
// #include<stdio.h>
// #define N 1000
//
//int main()
//{
//
//    int i, sum, j, n, k;
//    int nums[1000];
//    for (i = 2; i <= N; i++)
//    {
//        sum = nums[0] = 1;
//        k = 0;
//        for (j = 2; j <= (i / 2); ++j)
//        {
//            if (i % j == 0 && i != j)
//            {
//                nums[++k] = j;
//                sum += j;
//            }
//        }
//        if (sum == i)
//        {
//            printf("%d=%d", i, nums[0]);
//            for (n = 1; n <= k; ++n)
//            {
//                printf("+%d", nums[n]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//20.一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
//#include <stdio.h>
////TODO 注意只有第1次落地时是只落下 剩下九次都是先弹起在落下
//int main()
//{
//    double len = 100.0;     //最初高度
//    double lens = len;      //第一次落地的高度，只有一次
//    len = len / 2;          //小球第二次弹起的高度
//    for (int i = 2; i <= 10; ++i)     //9次上下
//    {
//        lens += len*2;
//        len = len / 2;
//    }
//    printf("%f %f", lens, len);
//    return 0;
//}


//21.猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
// 以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。

//#include<stdio.h>
//int main()
//{
//    int n = 1;
//
//    for (int day= 9;  1 <= day; --day)
//    {
//        n = (n + 1)*2;
//    }
//    printf("第一天摘了%d个", n);
//    return 0;
//}


//22.两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。
// a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。

//#include <stdio.h>
//int main()
//{
//    char i,j,k;
//    for (i = 'x'; i <= 'z'; ++i)
//    {
//        for (j = 'x'; j <= 'z'; ++j)
//        {
//            if (i != j)
//            {
//                for (k = 'x'; k <= 'z'; ++k)
//                {
//                    if ( i != k && j != k)
//                    {
//                        if (k != 'x' && k != 'z' && i != 'x')
//                        {
//                            printf("a--%c b--%c c--%c", i, j, k);
//                        }
//                    }
//                }
//            }
//        }
//
//    }
//    return 0;
//}


//23.打印出下面菱形
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *

//#include <stdio.h>
//int main()
//{
//    int n = 3;
//    for (int i = 1; i <= 4; ++i)
//    {
//        for (int j = 1; j <= 4-i; ++j)
//        {
//            printf(" ");
//        }
//        for (int j = 1; j <= 2*i-1 ; ++j)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    for (int i = 1; i <= 3; ++i)
//    {
//        for (int j = 1; j <= i ; ++j)
//        {
//            printf(" ");
//        }
//
//        for (int j = 2*(3-i)+1 ; j >= 1 ; --j)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//}

//24.有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
//#include<stdio.h>
//int main()
//{
//    double y[21] = {0.0,2.0,};
//    double x[21] = {0.0,1.0,};
//    double sum = 0.0;
//
//    for (int i = 1; i <= 20; i++)
//    {
//        sum += y[i] / x[i];
//        y[i + 1] = y[i] + x[i];
//        x[i + 1] = y[i];
//        printf("%f,%f\n", y[i + 1], x[i + 1]);
//    }
//    printf("%.7f", sum);
//    return 0;
//}



//25.求1+2!+3!+...+20!的和。
//#include <stdio.h>
//int main()
//{
//    long long int num = 0;
//    long long int product = 1;
//    for (int i = 1; i <= 20; ++i)
//    {
//        //简便方法
//        product = product * i;
//        num += product;
//        //我想出的笨方法 ...也只有我想的出来...
////        for (int j = i; j > 0 ; --j)
////        {
////            product *=j;
////            if(j == 1){
////                printf("%lld", product);
////                num += product;
////                product = 1;
////            }
////        }
////        printf("\n");
//    }
//    printf("%lld", num);
//    return 0;
//}


//26.利用递归方法求5!。

//#include <stdio.h>
//
//int product(int i)
//{
//    if(i == 1 ){
//        return 1;
//    }
//    return product(i-1) * i;
//}
//int main(){
//    printf("%d",product(3));
//    return 0;
//}

//27.利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

//#include<stdio.h>
//
//void print(char *str,int i){
//    if (str[i] != 0)
//    {
//        print(str, i + 1);
//        printf("%c", str[i]);
//    }
//
//}
//
//int main()
//{
//    char str[6];
//    scanf("%s", str);
//    print(str,0);
//}

//28.有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。
// 问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
//#include <stdio.h>
//
//int age(int n){
//    int c;
//    if(n == 1){
//        c = 10;
//    }else{
//        c = age(n - 1) + 2;
//    }
//    return c;
//}
//
//int main()
//{
//    //1.不递归
////    int a,b,c,d,e;
////    a = 10;
////    b = a+2;
////    c = b+2;
////    d = c+2;
////    e = d+2;
////    printf("%d", e);
//
//    //2.递归
//    printf("%d", age(5));
//    return 0;
//}


//29.给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
//TODO 分离个十百千万位
//#include<stdio.h>
//int main()
//{
//    int a,b,c,d,e,num; //个，十，百，千，万，正整数，
//
//    printf("请输出一个不多于五位的正整数:");
//    scanf("%d", &num);
//
//    a = num/10000;
//    b = num%10000/1000;
//    c = num%1000/100;
//    d = num%100/10;
//    e = num%10;
//
//    if (a != 0){
//        printf("num为5位数,逆序打印：%d,%d,%d,%d,%d", e, d, c, b, a);
//    } else if (b != 0){
//        printf("num为4位数,逆序打印：%d,%d,%d,%d", e, d, c, b);
//    } else if (c != 0){
//        printf("num为3位数,逆序打印：%d,%d,%d", e, d, c);
//    } else if (d != 0){
//        printf("num为2位数,逆序打印：%d,%d", e,d);
//    } else if (e != 0){
//        printf("num为1位数,逆序打印：%d", e);
//    }
//    return 0;
//}

//30.一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
//#include<stdio.h>
//int main()
//{
//    int a,b,c,d,e,num; //个，十，百，千，万，正整数，
//
//    printf("请输出一个五位数:");
//    scanf("%d", &num);
//
//    a = num/10000;
//    b = num%10000/1000;
//    c = num%1000/100;
//    d = num%100/10;
//    e = num%10;
//
//    if (a == e && b == d){
//        printf("%d是一个回文数", num);
//    }else{
//        printf("这不是一个回文数");
//    }
//
//}



//31.请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
//TODO 现在不想写 等心情好的时候写
//#include <stdio.h>
//int main(){
//
//}



//32.删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。


//33.判断一个数字是否为质数。
//#include <stdio.h>
//int main()
//{
//    int n,i;
//    scanf("%d", &n);
//    for (i = 2; i < n; ++i)
//    {
//        if (n % i == 0)
//            break;
//    }
//    if(i == n){
//        printf("该数为素数");
//    }else{
//        printf("该数不为素数");
//    }
//        return 0;
//}


//39.有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
#include <stdio.h>
int main()
{

}





//40.将一个数组逆序输出。
//#include<stdio.h>
//int main(){
//    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    //1.倒着输出
////    for (int i = sizeof(nums)/sizeof(int)-1; i >= 0 ; --i)
////    {
////        printf("%d", nums[i]);
////    }
//    //2.先换位置在输出
//    int temp;
//    int size = sizeof(nums)/sizeof(int);
//    for (int i = 0; i < size/2; ++i)
//    {
//        temp = nums[i];
//        nums[i] = nums[size - i - 1];
//        nums[size - i - 1] = temp;
//    }
//    for (int i = 0; i < size; ++i)
//    {
//        printf("%d", nums[i]);
//    }
//    return 0;
//}









//80.海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为五份，多了一个，这只 猴子把多的一个扔入海中，拿走了一份。
// 第二只猴子把剩下的桃子又平均分成五份，又多了一个，它同样把多的一个扔入海中，
// 拿走了一份，第三、第四、第五只猴子都是这样做的， 问海滩上原来最少有多少个桃子？

