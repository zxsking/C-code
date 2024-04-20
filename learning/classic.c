//
// Created by zhanxiaosong on 2024/1/4.
//
//1.有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少
//#include <stdio.h>
//void f(){
//    int a, b, c, n; //个,十,百,数量
//
//    for (a = 1,n = 0; a <=4; ++a)   //百位
//    {
//        for (b = 1; b <=4; ++b)     //十位
//        {
//            for (c = 1; c <=4; ++c) //个位
//            {
//                n++;
//                printf("%4d", a * 100 + b * 10 + c);        //输出组成的数
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//    printf("一共有%d个", n);
//}
//
//int main()
//{
//    f();
//    return 0;
//}

//2.企业发放的奖金根据利润提成。
//利润(I)低于或等于10万元时，奖金可提10%；
//利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
//20万到40万之间时，高于20万元的部分，可提成5%；
//40万到60万之间时高于40万元的部分，可提成3%；
//60万到100万之间时，高于60万元的部分，可提成1.5%；
//高于100万元时，超过100万元的部分按1%提成。
//从键盘输入当月利润I，求应发放奖金总数？

//#include <stdio.h>
//int main()
//{
//    double I,r1,r2,r4,r6,r10,bonus;
//    printf("请输入利润(I):");
//    scanf("%lf", &I);
//    r1 = 100000 * 0.1;
//    r2 = r1 + (200000 - 100000) * 0.075;
//    r4 = r2 + (400000 - 200000) * 0.05;
//    r6 = r4 + (600000 - 400000) * 0.03;
//    r10 = r6 + (1000000 - 600000) * 0.015;
//
//    if (I < 100000)
//    {
//        bonus = I * 0.1;
//    } else if (I < 200000)
//    {
//        bonus = r1 + (I - 100000) * 0.075;
//    } else if (I < 400000)
//    {
//        bonus = r2 + (I - 200000) * 0.05;
//    } else if (I < 600000)
//    {
//        bonus = r4 + (I - 400000) * 0.03;
//    } else if (I < 1000000)
//    {
//        bonus = r6 + (I - 600000) * 0.015;
//    }else{
//        bonus = r10 + (I - 1000000) * 0.01;
//    }
//
//    printf("奖金为%lf", bonus);
//}



//3.一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    //TODO
//}

//4.输入某年某月某日，判断这一天是这一年的第几天？
//#include <stdio.h>
//int is_leap(int year)
//{
//    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//    {
//        return 1;
//    }
//    return 0;
//}
//void date(int year, int month, int day)
//{
//    int i,days;
//    int per_month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//    for (i = 0,days = 0; i < month - 1; ++i)     //不包含month月
//    {
//        days += per_month[i];
//    }
//
//    days += day;    //加上month月天数
//    if(is_leap(year)) //若是闰年 则二月少一天
//    {
//        days = days - 1;
//    }
//
//    printf("%d", days);
//}
//int main()
//{
//    int year,month,day;
//    printf("输出年月日:");
//    scanf("%d %d %d", &year, &month, &day);
//    date(year, month, day);
//
//    return 0;
//}


//5.输入三个整数x,y,z，请把这三个数由小到大输出。
//#include <stdio.h>
//void swap(int *a,int *b)
//{
//    int t;
//    t = *a;
//    *a = *b;
//    *b = t;
//}
//int main()
//{
//    int x,y,z;
//    scanf("%d %d %d", &x, &y, &z);
//    if (x > y)
//    {
//        swap(&x, &y);
//    }
//    if (x > z)
//    {
//        swap(&x, &z);
//    }
//    if (y > z)
//    {
//        swap(&y, &z);
//    }
//    printf("%d %d %d", x, y, z);
//
//    return 0;
//}



//6.用*号输出字母C的图案。
//#include <stdio.h>
//int main()
//{
//    puts("  * * *");
//    puts(" *     ");
//    puts(" *     ");
//    puts(" *     ");
//    puts("  * * *");
//    return 0;
//}

//7.输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
//略

//8.输出9*9乘法口诀
//#include <stdio.h>
//int main()
//{
//    int i,j;
//    for (i = 1; i <= 9; ++i)
//    {
//        for (j = 1; j <= i; ++j)
//        {
//            printf("%d*%d=%-4d", j, i, i * j);
//        }
//
//        printf("\n");
//    }
//    return 0;
//}

//9.要求输出国际象棋棋盘。
//略

//10.打印楼梯，同时在楼梯上方打印两个笑脸。
//略

//11.古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
// 小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
//斐波那契数列的变形 1 1 2 3 5 8 13
//#include <stdio.h>
//int main()
//{
//    long double  a[41];
//    int i;
//    a[1] = a[2] = 2;
//    printf("第1天:%Lf\n",  a[1]);
//    printf("第2天:%Lf\n",  a[2]);
//
//    for (i = 3; i <=40; ++i)
//    {
//        a[i] = a[i - 1] + a[i - 2];
//        printf("第%d天:%.Lf\n", i, a[i]);
//    }
//    return 0
//}


//12.判断 101 到 200 之间的素数。
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//    int i;
//    for (int j = 2; j <= sqrt(n); ++j)
//    {
//        if (n % j == 0)
//        {
//            return 0;
//        }
//    }
//
//    return 1;
//}
//int main()
//{
//    int i;
//    for (i = 100; i < 200; ++i)
//    {
//        if (is_prime(i))
//        {
//            printf("%4d", i);
//        }
//    }
//    return 0;
//}


//13.打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
// 例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
//#include <stdio.h>
//int main()
//{
//    int i, a, b, c;
//    for (i = 100; i < 1000; ++i)
//    {
//        a = i %10;
//        b = i/10%10;
//        c = i / 100 % 10;
//        if (a * a * a + b * b * b + c * c * c == i)
//        {
//            printf("%4d", i);
//        }
//    }
//    return 0;
//}

//14.将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。

//#include <stdio.h>
//int main()
//{
//    int num,i;
//    scanf("%d", &num);
//    printf("%d=", num);
//    for (int i = 2; i <= num; ++i)
//    {
//        while (num % i == 0 && num != i)
//        {
//            printf("%d*", i);
//            num = num / i;
//        }
//        if (i == num)
//        {
//            printf("%d", i);
//            break;
//        }
//    }
//    return 0;
//}



//15.利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。

// #include<stdio.h>
// int main() {
//    int score;
//    char grade;
//
//     scanf("%d", &score);
//     if (score >= 90)
//     {
//         grade = 'A';
//     } else if (score >= 60 && score <= 89)
//     {
//         grade = 'B';
//     } else if (score < 60)
//     {
//         grade = 'C';
//     }
//     printf("等级为%c", grade);
//
//     return 0;
// }

//16.输入两个正整数m和n，求其最大公约数和最小公倍数。
//#include <stdio.h>
//int gcd(int a, int b) {
//    int temp; // 用于暂存b的值
//
//    // 当b不为0时，循环执行以下操作
//    while (b != 0) {
//        temp = b;   // 暂存b
//        b = a % b;  // 将a除以b的余数赋给b
//        a = temp;   // 将先前的b赋给a
//    }
//
//    // 当b为0时，退出循环，此时a即为最大公约数
//    return a;
//}
//int gcd(int a,int b)
//{
//    while (a != b)
//    {
//        if (a > b)
//        {
//            a -= b;
//        }
//        if (b > a)
//        {
//            b -= a;
//        }
//    }
//
//    return a;
//}
//int main()
//{
//    int a,b;
//    scanf("%d %d", &a, &b);
//    printf("%d",gcd(a, b));
//}

//17.输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
//#include<stdio.h>
//int main() {
//    int letter=0,space=0,num=0,others = 0;
//    int c;
//
//    while ((c = getchar()) != '\n')
//    {
//        if(c == ' ') {
//            space++;
//        }else if(c>='1' &&c <='9') {
//            num++;
//        }else if((c>='a' &&c<='z')||(c>='A'&&c<='Z')) {
//            letter++;
//        }else {
//            others++;
//        }
//    }
//    printf("space:%d\n", space);
//    printf("letter:%d\n", letter);
//    printf("num:%d\n", num);
//    printf("others:%d\n", others);
//    return 0;
//}


//18.求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
//#include <stdio.h>
//int main()
//{
//    int a, n, t, i, num;
//    printf("请输入a:");
//    scanf("%d", &a);
//    printf("请输入n:");
//    scanf("%d", &n);
//    t = a;
//    for (i = 0, num = 0; i < n; ++i)
//    {
//        num += t;
//        t = t * 10 + a;
//    }
//
//}

//19.一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。
//#include <stdio.h>
//int sum_of_factors(int n)
//{
//    int sum,i;
//    for (i = 1,sum = 0; i < n; ++i)
//    {
//        if (n % i == 0)
//        {
//            sum +=i;
//        }
//    }
//    return sum;
//}
//int main()
//{
//    int i;
//    for (i = 1; i < 1000; ++i)
//    {
//        if (sum_of_factors(i) == i)
//        {
//            printf("%4d", i);
//        }
//    }
//    return 0;
//}



//20.一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
//#include <stdio.h>
//int main()
//{
//    double len = 100;
//    double sum = len; //第一次落地的高度
//    len = len/2;
//    for (int i = 2; i <= 10; ++i)   //剩下9次落地所经过距离
//    {
//        sum += len * 2; //每次落地经过相同上下距离
//        len /=2;
//    }
//    printf("经过了%lf 第十次反弹弹起了%lf", sum, len);
//    return 0;
//}

//21.猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
// 以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
//#include <stdio.h>
//int fun(int n)
//{
//    if(n == 10)
//    {
//        return 1;
//    }else{
//        return (fun(n + 1) + 1) * 2;      //第n天是n+1天的 (x+1)*2个
//    }
//}
//int main()
//{
//    printf("%d", fun(1));
//    return 0;
//}


//22.两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。
// a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。
//#include <stdio.h>
//int main()
//{
//    int a,b,c;
//    for (a = 'x'; a <= 'z'; ++a)
//    {
//        if(a == 'x') continue;
//        for (b = 'x'; b <= 'z'; ++b)
//        {
//            for (c = 'x'; c <= 'z'; ++c)
//            {
//                if (c == 'x' || c == 'z')continue;
//                if(a != b && a != c && b != c ){
//                    printf("a vs %c\nb vs %c\nc vs %c", a, b, c);
//                }
//            }
//        }
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
    //
    //#include <stdio.h>
    //int main()
    //{
    //    int i,j;
    //    for (i = 1; i <= 4; ++i)        //前四层
    //    {
    //        for (j = 1; j <= 4 - i; ++j)    //每层输出4-i个空格
    //        {
    //            printf(" ");
    //        }
    //        for (j = 1; j <= 2 * i - 1; ++j)    //每层输出(2*i-1)个'*'
    //        {
    //            printf("*");
    //        }
    //        printf("\n");   //每层最后的换行
    //    }
    //    for (i = 3; i >= 1 ; --i)   //后三层 这里i为3先当将最前面三层倒着输出
    //    {
    //        for (j = 1; j <= 4 - i; ++j)        //每层输出4-i个空格
    //        {
    //            printf(" ");
    //        }
    //        for (j = 1; j <= 2 * i - 1; ++j)    //每层输出(2*i-1)个'*'
    //        {
    //            printf("*");
    //        }
    //        printf("\n");   //每层最后换行
    //    }
    //    return 0;
    //
    //}


//24.有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

//#include <stdio.h>
//int main()
//{
//    double x, y, t, sum;        //声明分子，分母，缓存变量，和
//    int i;          //声明下标
//
//    x = 2.0, y = 1.0, sum = 0.0; //初始化
//
//
//    for (i = 1; i <= 20; ++i)
//    {
//        sum += x / y;   //累加
//
//        t = x + y; //缓存x+y到t
//        y = x;      //将x赋给y
//        x = t;      //将缓存值t赋给x
//    }
//
//
//    printf("%lf", sum);   //输出和
//    return 0;
//}

//25.求1+2!+3!+...+20!的和。

//#include <stdio.h>
//unsigned long long  f(unsigned long long n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    return n * f(n - 1);
//}
//int main()
//{
//    unsigned long long  i, sum;
//
//    sum = 0;
//    for (i = 1; i <= 20 ; ++i)
//    {
//        sum += f(i);
//    }
//    printf("%llu", sum);
//
//    return 0;
//}


//26.利用递归方法求5!。
//#include <stdio.h>
//int f(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    return n * f(n - 1);
//}
//int main()
//{
//    printf("%d", f(5));
//    return 0;
//}



//27.利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

//#include<stdio.h>
//void f(char *str,int i){
//    if (str[i] != '\0')
//    {
//        f(str, i + 1);
//        printf("%c", str[i]);
//    }
//
//}
//
//int main()
//{
//    char str[6];
//
//    gets(str);
//    f(str,0);
//
//    return 0;
//}

//28.有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。
// 问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
//#include <stdio.h
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
//    printf("%d", age(5));
//    return 0;
//}


//29.给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int num, n, i,t;
//    scanf("%d", &num);
//    n = (int) log10(num) + 1;
//    printf("%d 是一个%d位数\n", num, n);
//    printf("倒序为:");
//    for (int j = 0; j < n; ++j)
//    {
//        printf("%d", num % 10);
//        num /= 10;
//    }
//    return 0;
//}

//30.一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
//#include <stdio.h>
//int main()
//{
//    int num,i,t,n;
//    scanf("%d", &num);
//
//    if (num / 10000 == num % 10 && num % 10000 / 1000 == num / 10 % 10)
//    {
//        printf("%d是回文数", num);
//    }else {
//        printf("%d不是回文数", num);
//    }
//    return 0;
//}



//31.请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
//Sunday Saturday Friday Thursday Wednesday Tuesday Monday
//#include <stdio.h>
//
//int main() {
//    char day;
//
//    printf("请输入星期几的首字母：");
//    scanf(" %c", &day);
//
//    switch (day) {
//        case 'M':
//            printf("星期一\n");
//            break;
//        case 'T':
//            printf("请输入星期几的第二个字母：");
//            scanf(" %c", &day);
//            if (day == 'u') {
//                printf("星期二\n");
//            } else if (day == 'h') {
//                printf("星期四\n");
//            } else {
//                printf("输入错误\n");
//            }
//            break;
//        case 'W':
//            printf("星期三\n");
//            break;
//        case 'F':
//            printf("星期五\n");
//            break;
//        case 'S':
//            printf("请输入星期几的第二个字母：");
//            scanf(" %c", &day);
//            if (day == 'a') {
//                printf("星期六\n");
//            } else if (day == 'u') {
//                printf("星期日\n");
//            } else {
//                printf("输入错误\n");
//            }
//            break;
//        default:
//            printf("输入错误\n");
//    }
//
//    return 0;
//}


//32.删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。

//#include <stdio.h>
//#include <string.h>
//void delete(char *s, char a)
//{
//    int i;
//    for (i = 0; s[i] != '\0'; ++i)
//    {
//        if (s[i] == a)
//        {
//            strcpy(s + i, s + i + 1);
//        }
//    }
//}
//int main()
//{
//    char s[40],a;
//    gets(s);
//    scanf("%c", &a);
//    delete(s, a);
//    puts(s);
//
//    return 0;
//}


//33.判断一个数字是否为质数(素数)。
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n)
//{
//    int i;
//    if(n == 1){
//        return 0;
//    }
//    for (i = 2; i <= sqrt(n); ++i)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (is_prime(n))
//    {
//        printf("%d是素数", n);
//    }else
//    {
//        printf("%d不是素数", n);
//    }
//    return 0;
//}

//34.练习函数调用。
//略

//35.字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
//#include <stdio.h>
//#include <string.h>
//void converse(char *str)
//{
//    int i,j,len;
//    char t;
//    len = strlen(str);
//    for (i = 0; i < len-i-1; ++i)
//    {
//        t = str[i];
//        str[i] = str[len - i - 1];
//        str[len - i - 1] = t;
//    }
//}
//int main()
//{
//    char str[] = "www.runoob.com";
//    converse(str);
//    puts(str);
//
//    return 0;
//}

//36.求100之内的素数。
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n)
//{
//    int i;
//    for (i = 2; i <= sqrt(n); ++i)
//    {
//        if (n % i == 0)
//        {
//            return 0;  //不为素数
//        }
//    }
//
//    return 1;//为素数
//}
//int main()
//{
//    int i;
//    for (i = 2; i <= 100 ; ++i)
//    {
//        if (is_prime(i))
//        {
//            printf("%3d", i);
//        }
//    }
//    return 0;
//}

//37.对10个数进行排序。
//#include <stdio.h>
//void select_sort(int a[],int n)
//{
//    int i,j,key,t;
//    for (i = 0; i < n-1; ++i)     //遍历到最后一个数是，该数就已经是最大或最小数了
//    {
//        key = i;
//        for (j = i + 1; j < n; ++j)       //每次都需要和最后一个数去比较
//        {
//            if (a[j] <   a[key])
//            {
//                key = j;
//            }
//        }
//        t = a[key];
//        a[key] = a[i];
//        a[i] = t;
//    }
//}
//int main()
//{
//    int a[] = {9,7,5,3,1,2,4,6,8,0};
//    int len = 10,i;
//    select_sort(a, len);
//    for (i = 0; i < 10; ++i)
//    {
//        printf("%d", a[i]);
//    }
//    return 0;
//}


//38.求一个3*3矩阵对角线元素之和
//#include <stdio.h>
//int main()
//{
//    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    int i,sum;
//    for (i = 0, sum = 0; i < 3; ++i)
//    {
//        sum = a[i][i];
//    }
//    printf("%d", sum);
//
//    return 0;
//}

//39.有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
//#include <stdio.h>
//
//int main()
//{
//    int a[5] = {1, 4, 6, 8};
//    int n, num, i;
//    n = 4;
//    scanf("%d", &num);
//
//    for (i = n - 1; i >= 0; --i)
//    {
//        if (num > a[i])
//        {
//            a[i + 1] = num;
//            break;
//        }
//        a[i + 1] = a[i];
//    }
//    n++;
//
//
//    for (i = 0; i < n; ++i)
//    {
//        printf("%d", a[i]);
//    }
//    return 0;
//}


//40.将一个数组逆序输出。
//#include <stdio.h>
//int main()
//{
//    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int len, i;
//    len = sizeof(nums) / sizeof(int);
//    for (i = len-1; i >=0 ; --i)
//    {
//        printf("%2d", nums[i]);
//    }
//    return 0;
//}


/**
//41.学习定义静态变量的方法
//略
//42.学习使用auto定义变量的用法。
//略
//43.学习使用static的另一用法。
// 略
//44.学习使用如何调用外部函数。
// 略
//45.学习使用register定义变量的方法。
// 略
//46.宏#define命令练习。
// 略
//47.宏#define命令练习2。
// 略
//48.宏#define命令练习3。
// 略
//49.#if #ifdef和#ifndef的综合应用。
// 略
//50.#include 的应用练习。
// 略
//51.学习使用按位与 &。
// 略
//52.学习使用按位异或 ^。
// 略
//53.取一个整数 a 从右端开始的 4～7 位。
// 略
//54.学习使用按位取反~。
// 略
//55.画图，学用circle画圆形。
// 略
//57.画图，学用line画直线（在TC中实现）。
// 略
//58.学用rectangle画方形。（在TC中实现）。
// 略
//59.画图，综合例子。（在TC中实现）。
// 略
//60.画图，综合例子2。（在TC中实现）。
// 略
*/

//61.杨辉三角形
//#include <stdio.h>
//int main()
//{
//    int a[10][10];
//    int i,j,k;
//    for (i = 0; i < 10; ++i)
//    {
//        a[i][0] = 1;
//        a[i][i] = 1;
//        for (j = 1; j < i; ++j)
//        {
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//        }
//    }
//
//    for (i = 0; i < 10; ++i)
//    {
////        printf("*");
//        for (k = 10; k >= i; k--)
//        {
//            printf("   ");
//        }
//        for (j = 0; j <= i; ++j)
//        {
//
//
//            printf("%-6d", a[i][j]);
//        }
////        for (k = 10; k >= i; k--)
////        {
////            printf("   ");
////        }
////        printf("*");
//        printf("\n");
//    }
//    printf("\n");
//}

/**
//62.学习putpixel画点，（在TC中实现）。
// 略
//63.画椭圆ellipse（在TC中实现）。
// 略
//64.利用ellipse and rectangle 画图（在TC中实现）。
// 略
//65.一个最优美的图案（在TC中实现）。
// 略
*/


//66.输入3个数a,b,c，按大小顺序输出 (利用指针方法。)
//#include <stdio.h>
//void swap(int *m,int *n)
//{
//    int t;
//    t = *m;
//    *m = *n;
//    *n = t;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a > b)
//    {
//        swap(&a, &b);
//    }
//    if (a > c)
//    {
//        swap(&a, &c);
//    }
//    if (b > c)
//    {
//        swap(&b, &c);
//    }
//
//    printf("%d %d %d", a, b, c);
//    return 0;
//}



//67.输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int nums[20] = {0};
//    int n;
//    printf("请输入数组大小 n<20:");
//    scanf("%d", &n);
//    printf("请输出数组的数，按enter建继续输入");
//    for (int i = 0; i < n; ++i)
//    {
//        scanf("%d",&nums[i]);
//    }
//    int max = INT_MIN;
//    int min = INT_MAX;
//    int max_n = 0;
//    int min_n = 0;
//    for (int i = 0; i < n; ++i)
//    {
//        if (nums[i] > max)
//        {
//            max = nums[i];
//            max_n = i;
//        }
//        if (nums[i] < min)
//        {
//            min = nums[i];
//            min_n = i;
//        }
//    }
//    nums[max_n] = nums[0];
//    nums[0] = max;
//
//    nums[min_n] = nums[n-1];
//    nums[n-1] = min;
//
//    for (int i = 0; i < n; ++i)
//    {
//        printf("%d", nums[i]);
//    }
//    return 0;
//}


//68有 n 个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。
//69.有n个人围成一圈，顺序排号。
// 从第一个人开始报数（从1到3报数），
// 凡报到3的人退出圈子，问最后留下的是原来第几号的那位。

//70.写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。
//#include <stdio.h>
//int my_str_len(char *a)
//{
//    int i = 0;
//    while (*a++ != '\0')
//    {
//        i++;
//    }
//    return i;
//}
//int main()
//{
//    char str[10];
//    gets(str);
//    printf("%d", my_str_len(str));
//    return 0;
//}

//71.编写input()和output()函数输入，输出5个学生的数据记录。
//#include <stdio.h>
//
//typedef struct Student
//{
//    long id;
//    char name[20];
//}Stu;
//
//void input(Stu * stu)
//{
//    for (int i = 0; i < 5; ++i)
//    {
//        scanf("%ld", &stu[i].id);
//        scanf("%s", stu[i].name);
//    }
//}
//
//void output(Stu *stu)
//{
//    for (int i = 0; i < 5; ++i)
//    {
//        printf("%ld,%s\n", stu[i].id, stu[i].name);
//    }
//}
//int main()
//{
//    Stu stu[5];
//    input(stu);
//    output(stu);
//    return 0;
//}

//72.创建一个链表。
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct LinkList{
//    int val;
//    struct LinkList *next;
//
//}LinkList;
//
//LinkList * create()
//{
//
//}
//int main()
//{
//
//}

//73.反向输出一个链表。
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct LinkList
//{
//    int val;
//    struct LinkList *next;
//}*List;
//
//List create()
//{
//    List head = (List) malloc(sizeof(List));
//
//    head->val = 0;
//    head->next = NULL;
//
//    return head;
//}
//void converse(List list)
//{
//    if (list->next != NULL)
//    {
//
//        converse(list->next);
//    }
//    printf("%d ", list->val);
//}
//int main()
//{
//    List head = create();
//    int i,n;
//    printf("输入想要创建的链表长度:");
//    scanf("%d", &n);
//    List p1,p2;
//
//    p1 = (List) malloc(sizeof(List));
//    scanf("%d", &p1->val);
//    p1->next =NULL;
//    head->next = p1;
//    p2 = p1;
//
//
//    for (i = 0; i < n-1; ++i)
//    {
//        p1 = (List) malloc(sizeof(List));
//        scanf("%d", &p1->val);
//        p1->next = NULL;
//
//        p2->next = p1;
//        p2 = p1;
//    }
//
//    converse(head->next);
//    return 0;
//}


//74.连接两个链表。
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node     //给struct Node* 起别名 为Node
//{
//    int data;
//    struct Node *next;
//}*Node;
//
//Node init()
//{
//    Node head = (Node) malloc(sizeof(Node));
//    head->data = 0;
//    head->next = NULL;
//    Node p1,p2;
//    p1 = (Node) malloc(sizeof(Node));
//    scanf("%d", &p1->data);
//    p1->next = NULL;
//
//    head->next = p1;
//    p2 = p1;
//
//
//    for (int i = 0; i < 4; ++i)
//    {
//        p1 = (Node) malloc(sizeof(Node));
//        scanf("%d", &p1->data);
//        p1->next = NULL;
//
//        p2->next = p1;
//        p2 = p1;
//    }
//
//    return head;
//}
//void link(Node link1,Node link2)
//{
//    while (link1->next != NULL)
//    {
//        link1 = link1->next;
//    }
//    link1->next = link2->next;
//}
//void putLink(Node link)
//{
//    while (link->next != NULL)
//    {
//        link = link->next;
//        printf("%d ", link->data);
//    }
//}
//int main()
//{
//    puts("初始化链表1，请输入五个值");
//    Node head1 = init();
//    puts("初始化链表2，请输入五个值");
//    Node head2 = init();
//    puts("连接中.....");
//    link(head1, head2);
//
//    puts("输出链表1");
//    putLink(head1);
//    return 0;
//}


//75.输入一个整数，并将其反转后输出。
#include <stdio.h>
int main()
{
    int num,n;
    scanf("%d", &num);
    n = 0;
    while (num != 0)
    {
        n = n * 10 + num % 10;
        num /= 10;
    }
    printf("%d", n);
    return 0;
}
//76.编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。




//77.填空练习（指向指针的指针）。
//略
//78.找到年龄最大的人，并输出。请找出程序中有什么问题。
//略


//79.字符串排序。



//80.海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为五份，多了一个，这只 猴子把多的一个扔入海中，拿走了一份。
// 第二只猴子把剩下的桃子又平均分成五份，又多了一个，它同样把多的一个扔入海中，
// 拿走了一份，第三、第四、第五只猴子都是这样做的， 问海滩上原来最少有多少个桃子？
//TODO 此题想了很长时间，稍加注意下
//#include <stdio.h>
//int main()
//{
//    int n = 1; //设第五只猴子分的五分每份有n个
//    int x = 0,i=0; //用来存储桃子总数
//    while(i < 5){
//        x = 4*n; //第五之猴子拿走一份后还剩的桃子数
//
//        for (i = 0; i < 5; ++i)
//        {
//            if(x%4 != 0){break;}    //下一堆桃子数是否能被四整除，若不能整除 上一只之猴子不能分成五分
//            x = (x/4)*5 + 1;        //若可以整除则在反向推理上一直猴子还没分时的桃子数量
//        }
//        n++;
//    }
//    printf("%d",x);
//    return 0;
//}

//81.809 * ?? == 800 * ?? + 9 * ??    其中??代表的两位数,809*??为四位数，8*??的结果为两位数，9*??的结果为3位数。
// 求??代表的两位数，及809*??后的结果。
//#include <stdio.h>
//int main()
//{
//
//
//    for (int x = 10; x <= 99; ++x)
//    {
//        int a = x*809;
//        int b = x*8;
//        int c = x*9;
//
//        if(a>999 && a<10000  && b<100 && c > 99   ){
//            printf("%d\n",x);
//            printf("%d", a);
//        }
//    }
//    return 0;
//}

//82.八进制转换为十进制

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    char num[20];
//    int i=0, n=0;
//    gets(num);
//    while(num[i] != '\0')
//    {
//        n = n*8 + num[i] - '0';       //这个可以获取字符串数字   要记住
//        i++;
//    }
//    printf("%d", n);
//    return 0;
//
//}


//83.求0—7所能组成的奇数个数
//#include <stdio.h>
//int main()
//{
//    int x = 4,sum = 4;
//    for (int i = 2; i <= 8; ++i)
//    {
//        if(i<=2)
//        {
//            x *= 7;
//            printf("%d位数的奇数个数为%d\n", i, x);
//            sum +=x;
//        } else
//        {
//            x *= 8;
//            printf("%d位数的奇数个数为%d\n", i, x);
//            sum +=x;
//        }
//    }
//
//    printf("奇数的总数为：%d", sum);
//}

//84.一个偶数总能表示为两个素数之和。
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//    int i;
//    if (n == 1)
//    {
//        return 0;
//    }
//    for (i = 2; i <= sqrt(n); ++i)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    int i,n;
//    scanf("%d", &n);
//    for (i = 2; i <= n/2; ++i)
//    {
//        if (is_prime(i) && is_prime(n-i))
//        {
//            printf("%d %d", i, n - i);
//            break;
//        }
//    }
//    return 0;
//}


//85.判断一个素数能被几个9整除。
//#include <stdio.h>
//#include <limits.h>
//int main()
//{
//    int i;  //素数
//    scanf("%d", &i);
//    long long n = 9;
//    while (n % i != 0)
//    {
//        n = n * 10 + 9;
//    }
//
//    if(n > LONG_MAX)
//    {
//        printf("该数不存在");
//    } else
//    {    printf("%lld", n);
//    }
//
//
//    return 0;
//}



//86.两个字符串连接程序 。
//#include<stdio.h>
//#include<string.h>
//void my_cat(char *a, char *b)
//{
//    strcpy(a + strlen(a), b);
//}
//int main()
//{
//    char str1[50];
//    char str2[50];
//    gets(str1);
//    gets(str2);
//
//    my_cat(str1, str2);
//    puts(str1);
//    return 0;
//}



//87.结构体变量传递
//略


//88.读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的 *。
//#include <stdio.h>
//int main()
//{
//    int i, j, n;
//    for (i = 0; i < 7; ++i)
//    {
//        scanf("%d", &n);
//        while (n < 1 || n > 50)
//        {
//            scanf("%d", &n);
//        }
//        for (j = 0; j < n; ++j)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//89.某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下：
// 每位数字都加上5,然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。
//#include <stdio.h>
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    int a,b,c,d,t;
//    a = num % 10;
//
//    b = num / 10 % 10;
//
//    c = num / 100 % 10;
//
//    d = num / 1000;
//
//    t = a, a = d, d = t;
//    t = b, b = c, c = t;
//    a = a + 10 - 5;
//    b = b + 10 - 5;
//    c = c + 10 - 5;
//    d = d + 10 - 5;
//
//    num = a + c * 100 + b * 10 + d * 1000;
//    printf("%d", num);
//
//    return 0;
//}

/**
//90.专升本一题，读结果
// 略
//91.时间函数举例1
// 略
//92.时间函数举例2
// 略
//93.时间函数举例3
// 略
//94.猜谜游戏。
// 略
//95.简单的结构体应用实例。
// 略
*/



//96.计算字符串中子串出现的次数 。
//#include <stdio.h>
//int main()
//{
//    int i,j,n;
//    char str[50], a[20];
//    gets(str);
//    gets(a);
//
//    for (i = 0, n = 0; str[i] != '\0'; ++i)
//    {
//
//        if (str[i] == a[0])
//        {
//            for (j = 0;  a[j] != '\0'; ++j)
//            {
//                if (str[i + j] != a[j])
//                {
//                    break;
//                }
//            }
//            if (a[j] == '\0')
//            {
//                n++;
//            }
//
//        }
//    }
//    printf("%d", n);
//    return 0;
//}




/**
//97.从键盘输入一些字符，逐个把它们送到磁盘上去，直到输入一个#为止。
// 略
//98.从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"test"中保存。 输入的字符串以！结束。
// 略
//99.有两个磁盘文件A和B,各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排列），输出到一个新文件C中。
// 略
//100.有五个学生，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），
// 计算出平均成绩，况原有的数据和计算出的平均分数存放在磁盘文件"stud"中。
// 略
*/