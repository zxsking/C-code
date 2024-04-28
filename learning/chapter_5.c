//CHAPTER FIVE

//5.1 略
//5.2 略

//5.3  输入两个正整数m和n.求其最大公约数和最小公倍数，

//代码
//#include <stdio.h>
//
//int gcd(int m, int n)
//{
//    if (n == 0)
//    {
//        return m;        //上次取余为0 返回m中存储的上次n的值
//    } else
//    {
//        return gcd(n, m % n); //辗转相除
//    }
//}
//int main()
//{
//    int m, n, t;
//    puts("输入m n(m>n):");
//    scanf("%d %d", &m, &n);   //m要大于n
//
//    if(n > m)
//    {
//        t = n, n = m, m = t;        //使m保持为大值
//    }
//
//    t = gcd(m, n);      //存储最大公约数
//    printf("最大公约数为:%d\n最小公倍数为:%d\n", t, m * n / t);
//
//    return 0;
//}


//5.4 输人一行字符。分别统计出其中英文字母、空格 、数字 和其他字符的个数。

//代码
//#include<stdio.h>
//int main()
//{
//    int letter, space, num, other;
//    char ch;
//    printf("请输入一行字符:");
//    letter = space = num = other = 0;
//    while ((ch = getchar()) != '\n')
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        {
//            letter++;
//        } else if (ch == ' ')
//        {
//            space++;
//        } else if (ch >= '0' && ch <= '9')
//        {
//            num++;
//        }else{
//            other++;
//        }
//    }
//    printf("这行字符有");
//    printf("%d个字母，", letter);
//    printf("%d个空格，", space);
//    printf("%d个数字，", num);
//    printf("%d个其他字符。", other);
//
//    return 0;
//}



//5.5 求 Sn=a+aa+aaa+...+ n个a的值。其中 a 是一个数字，n表示a的位数
//#include <stdio.h>
//int main()
//{
//    int i, a, n, sum, t;
//    printf("输入n:");
//    scanf("%d", &n);
//    printf("输入a:");
//    scanf("%d", &a);
//
//    for (i = sum = t = 0; i < n; ++i)
//    {
//        t = t * 10 + a;
//        sum += t;
//    }
//    printf("\n%d", sum);
//
//    return 0;
//}


// 5.6.求1! + 2! + ... + 19! + 20! 的值
//#include <stdio.h>
//long long  fun(int n)
//{
//    int i;
//    long long sum, t;
//
//    for (i = t = 1, sum = 0; i <= 20; ++i)
//    {
//        t *= i;
//        printf("%lld ", t);             ////todo 输出的占位符要注意
//        sum += t;
//    }
//    return sum;
//}
//int main()
//{
//    long long sum = fun(20);
//    printf("\n%lld", sum);
//    return 0;
//}

// 5.7.求 1+2+3+...+99+100 + 1*1 + 2*2 +...+ 49*49+50*50 + 1+1/2+1/3+...+1/9+1/10 的值

//#include<stdio.h>
//int main()
//{
//    int i;
//    double sum;
//    for (i = 1, sum = 0.0; i <= 100; i++)
//    {
//        if (i <= 10) sum += 1.0 / i;
//        if (i <= 50) sum += i * i;
//        sum += i;
//    }
//    printf("sum为:%lf", sum);
//
//    return 0;
//}

// 5.8.输出所有的“水仙花数”.所谓“水仙花数”是指一个 3 位数，其各位数字立方和等于该数本身。例如153 是水仙花数 因为 153=1+125+27。
//#include<stdio.h>
//int main()
//{
//
//    int i, x, y, z, t;
//    for (i = 100; i < 1000; i++)
//    {
//        x = i % 10;       //个位
//        y = i / 10 % 10;    //十位
//        z = i / 100;      //百位
//        t = x * x * x + y * y * y + z * z * z;
//        if (i == t)    //输出符合条件值
//            printf("%d\n", i);
//    }
//    return 0;
//}

// 5.9.求1000内的完数
//#include <stdio.h>
//int main()
//{
//    int i, j, a[30],m,t;
//    for (i = 2; i < 1000; ++i)  //i = 1或 i = 2都可，1不满足下面条件会跳过
//    {
//        m = 0, t = 0;   //m为数组a索引，n为因子和
//        for (j = 1; j < i; ++j)
//        {
//            if (i % j == 0)
//            {
//                t += j;
//                a[m++] = j;
//            }
//        }
//
//        if (t == i)
//        {
//            printf("%d its factors are ", i);
//            for (j = 0; j < m-1; ++j)
//            {
//                printf("%d,", a[j]);
//            }
//            printf("%d\n", a[j]);
//        }
//    }
//    return 0;
//}


// 5.10. 有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

//#include <stdio.h>
//int main()
//{
//    double a, b, sum, n;
//    a = 1, b = 2, sum = 0, n = 1;
//    while (n++ <= 20)
//    {
//        sum += b / a;
//        b = a + b;      //下一项b为这一项两数和
//        a = b - a;      //下一项a为这一项b即  a+b-a
//    }
//
//    printf("%lf", sum);
//    return 0;
//}


// 5.11.一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

//#include <stdio.h>
//
//int main()
//{
//    double len, sum;
//    sum = len = 100; //第一次落地的高度
//    len = len / 2;
//    for (int i = 2; i <= 10; ++i)   //剩下9次落地所经过距离
//    {
//        sum = sum + len * 2; //每次落地经过相同上下距离
//        len = len / 2;
//    }
//    printf("经过了%lf 第十次反弹弹起了%lf", sum, len);
//    return 0;
//}

// 5.12. 猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
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

// 5.13.用迭代法求x = sqrt(a)。求平方根的迭代公式为 X(n+1) = 1/2 * (X(n) + a/X(n))
// 要求前后两次求出的x的差的绝对值小于1e-5
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int a;
//    double b, l, t;
//    a = 2;
//    t = t = 1.0;
//    l = 2.0;
//
//    while (fabs(l - b) > 1.0e-5)
//    {
//        b = t;
//        l = (b + (a / b)) / 2;
//        t = l;
//    }
//
//    printf("x的值为%d 平方根为 %lf", a, l);
//    return 0;
//}


//5.14 用牛顿迭代法求下面方程在 1.5 附近的根：
//#include <stdio.h>
//#include <math.h>
//double f(double x)
//{
//    double y = 2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6;
//    return y;
//}
//double dx(double x)
//{
//    double y = 6 * pow(x, 2) - 8 * x + 3;
//    return y;
//}
//int main()
//{
//    int i;
//    double x = 1.5;       //在x附近的根
//    for (i = 0; i < 1000; ++i)
//    {
//        x = x - (f(x) / dx(x));       //关键公式
//    }
//    printf("%lf ",x);
//    return 0;
//}



// 5.16 打印出下面菱形
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

// 5.17 两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。
// 有人向队员打听比赛的名单。 a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。
//  #include<stdio.h>
//  int main()
//  {
//      char A,B,C;
//      for(A = 'X'; A <= 'Z'; A++)
//      {
//          for(B= 'X' ; B <= 'Z'; B++)
//          {
//              for(C = 'X'; C <= 'Z' ;C++)
//              {
//                  if(C!='X' && C!= 'Z' && A!='X' && A!=C && A!=B && B!=C)
//                      printf("A vs %c\nB vs %c\nC vs %c",A,B,C);
//              }
//          }
//      }
//      return 0;
//  }