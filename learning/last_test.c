//1.斐波那契数列  有多种方法  1.递归 2.数组 3.迭代（数组也是一种得带）
//2.判断素数(质数)  有多种方法     1.筛选法  2.分别从2 取余 到 sqrt(n)判断                //todo 筛选法循环条件判断有问题
//3.水仙花数  还有各种n位数
//4.将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。              //todo 每次输出后n是需要除以i的！！！！
//5.输入两个正整数m和n，求其最大公约数和最小公倍数。 //辗转相除法  //更相相减法      //todo 还没写更相相减法递归
//6.完美数  该数所有的因子和等于该数
//7.杨辉三角                                                    //todo 输出时j要从0到n  不再是输入时的1到n-1了
//8.删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。   1.若题目没说明不能用函数直接删除后strcpy
//10.有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
//11.输入偶数求 两个素数相加等于该偶数
//12 个水手在岛上发现了一堆椰子,先由第一个水手把椰子分为等量的 5 堆，还剩下 1 个给了猴子，自己藏起 1 堆。
// 然后,第二个水手把剩下的 4 堆混合后重新分为等量的 5 堆，还剩下 1 个给了猴子，自己藏起 1 堆。
// 以后第三、四个水手依次按此方法处理。最后，第五个水手把剩下的椰子分为等量的 5 堆后，同样剩下1 个给了猴子。
// 请用迭代法编程计算并输出原来这堆棚子至少有多少个。
//14.有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。(约瑟夫环)
#include <stdio.h>
int joseph(int n,int m)
{
    if(n == 1)
    {
        return 0;
    } else
    {
        return (joseph(n - 1, m) + m) % n;
    }
}



//15.求0—7所能组成的奇数个数
//16.八进制转换为十进制
//17.有 n 个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。
//18.一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//19.同构数  是指该数出现在它的平方数的右侧




//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//    int i;
//    if(n == 1)
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
//    int n,i;
//    scanf("%d", &n);
//    for (i = 2; i < n; ++i)
//    {
//        if(is_prime(i) && is_prime(n - i))
//        {
//            printf("%d + %d = %d\n", i, n - i, n);
//            break;
//        }
//    }
//    return 0;
//}



//12 个水手在岛上发现了一堆椰子,先由第一个水手把椰子分为等量的 5 堆，还剩下 1 个给了猴子，自己藏起 1 堆。
// 然后,第二个水手把剩下的 4 堆混合后重新分为等量的 5 堆，还剩下 1 个给了猴子，自己藏起 1 堆。
// 以后第三、四个水手依次按此方法处理。最后，第五个水手把剩下的椰子分为等量的 5 堆后，同样剩下1 个给了猴子。
// 请用迭代法编程计算并输出原来这堆棚子至少有多少个。

//#include <stdio.h>
//int main()
//{
//    int n, i, t,ok;        //第五天个数n    存储i天的个数t  天数i ok判断是否结束
//    n = t = ok = 1;
//    while(ok)
//    {
//        for (i = 4; i >= 1 ; --i)
//        {
//            if (t % 5 == 1 && t % 4 == 0)
//            {
//                t = t / 4 * 5 + 1;
//                continue;
//            } else
//            {
//                t = ++n;
//                break;
//            }
//        }
//        if (i == 0)
//        {
//            ok = 0;
//        }
//    }
//    printf("%d", t);
//    return 0;
//}





//14.有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。(约瑟夫环)
//#include <stdio.h>
//
//int joseph(int n, int m)
//{
//    if (n == 1)
//    {
//        return 0;
//    } else
//    {
//        return (joseph(n - 1, m) + m) % n;
//    }
//}
//int main()
//{
//    int n,m;    //有n人,数到m出局
//    scanf("%d %d", &n, &m);
//    printf("%d",joseph(n,m)+1);
//}


//15.求0—7所能组成的奇数个数
//#include <stdio.h>
//int main()
//{
//    int sum = 4, i,n;
//    int t = 1;
//    scanf("%d", &n);
//
//    for (i = 1; i <= n-2; ++i)
//    {
//        sum *= 8;
//    }
//    sum *= 7;
//    printf("%d位数时有%d种可能", n, sum);
//    return 0;
//}


//16.八进制转换为十进制
//#include <stdio.h>
//int invert(char *a)
//{
//    int t = 0;
//    while (*a)
//    {
//        t = t * 8 + *a - '0';
//        a++;
//    }
//
//    return t;
//}
//int main()
//{
//    char num[20];
//    gets(num);
//    int ten = invert(num);
//    printf("%s => %d", num, ten);
//    return 0;
//}


//17.有 n 个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。
//18.一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int sign = 1;
//    int i = 1;
//    while (sign)
//    {
//        if ((int) sqrt(i + 100) == sqrt(i + 100) && (int) sqrt(i + 168) == sqrt(i + 168))
//        {
//            sign = 0;
//
//        } else
//        {
//            i++;
//        }
//    }
//    printf("%d", i);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i,j;
//    for (i = 1; i <= 9; ++i)
//    {
//        for (int j = 1; j < i; ++j)
//        {
//            printf("        ");
//        }
//        for (j = i; j <= 9 ; ++j)
//        {
//            printf("%d*%d=%2d  ", i, j, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int fun(int i, int j)
//{
//    if (j == 1 || i == j)
//    {
//        return 1;
//    } else
//    {
//        return fun(i - 1, j - 1) + fun(i - 1, j);
//    }
//}
//
//int main()
//{
//    int i, j, n;
//    scanf("%d", &n);
//    for (i = 1; i <= n; ++i)
//    {
//        for (j = 1; j <= n - i; ++j)
//        {
//            printf("  ");
//        }
//        for (j = 1; j <= i; ++j)
//        {
//            printf("%4d", fun(i, j));
//        }
//        printf("\n");
//    }
//}



#include <stdio.h>
int fun(int n)
{
    int t = n * n;
    while (n != 0)
    {
        if (t % 10 != n % 10)
        {
            return 0;
        }
        t/=10;
        n/=10;
    }

    return 1;   //
}
int main()
{
    int n,i;
    for (i = 1; i < 10000; ++i)
    {
        if (fun(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}