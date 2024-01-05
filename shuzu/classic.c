//
// Created by zhanxiaosong on 2024/1/4.
//



// #include <stdio.h>

//程序8输出9*9乘法口诀
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



//13打印水仙花数

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

#include<stdio.h>
int main()
{
    int n = 1;

    for (int day= 9;  1 <= day; --day)
    {
        n = (n + 1)*2;
    }
    printf("第一天摘了%d个", n);
    return 0;
}


//22.两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。
// a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。