//
// Created by zhanxiaosong on 2024/4/8.
//


//1.斐波那契数列  有多种方法  1.递归 2.数组 3.迭代（数组也是一种得带）

//2.判断素数  有多种方法     1.筛选法  2.分别从2 取余 到 sqrt(n)判断                //todo 筛选法
//3.水仙花数  还有各种n位数
//#include <stdio.h>
//int main()
//{
//    int i,a,b,c;
//    for (int i = 100; i < 1000; ++i)
//    {
//        a = i % 10;
//        b = i / 10 % 10;
//        c = i / 100;
//        if (a * a * a + b * b * b + c * c * c == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//4.将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
//#include <stdio.h>
//int main()
//{
//    int i,n,first;
//    scanf("%d", &n);
//    first = 1;
//    for (i = 2; i <= n; ++i)        //注意循环条件
//    {
//
//        while (n % i == 0)
//        {
//            if (first)
//            {
//                first = 0;
//                printf("%d=%d", n, i);
//            } else
//            {
//                printf("*%d", i);
//            }
//            n /= i;
//        }
//    }
//    return 0;
//}


//5.输入两个正整数m和n，求其最大公约数和最小公倍数。 //辗转相除法  //更相相减法      //更相相减法递归
//#include <stdio.h>
//int gcd(int m, int n)
//{
//    int t;
//    if (n > m)
//    {
//        t = n, n = m, m = t;
//    }
//    while (n != 0)
//    {
//        t = m % n;
//        m = n;
//        n = t;
//    }
//    return m;
//}
//
//int gcd1(int m, int n)
//{
//    if (m == n)
//    {
//        return m;
//    }
//    if(m > n){
//        fun1(m-n, n);
//    } else if(m < n)
//    {
//        fun1(m, n - m);
//    }
//}
//int main()
//{
//    printf("%d", gcd(66, 22));
//}
//6.完美数  该数所有的因子和等于该数
//#include <stdio.h>
//int main()
//{
//    int i, j, n;
//    for (i = 1; i < 1000; ++i)
//    {
//        n = 0;
//        for (j = 1; j < i; ++j)
//        {
//            if (i % j == 0)
//            {
//                n += j;
//            }
//
//        }
//        if (n == i)
//        {
//            printf("%d ", i);
//        }
//    }
//
//    return 0;
//}
//7.猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
// 以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。

//8.删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。

//9.判断一个数字是否为质数(素数)

//10.有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

//11.输入偶数求 两个素数相加等于该偶数

//12 个水手在岛上发现了一堆椰子,先由第一个水手把椰子分为等量的 5 堆，还剩下 1 个给了猴子，自己藏起 1 堆。
// 然后,第二个水手把剩下的 4 堆混合后重新分为等量的 5 堆，还剩下 1 个给了猴子，自己藏起 1 堆。
// 以后第三、四个水手依次按此方法处理。最后，第五个水手把剩下的椰子分为等量的 5 堆后，同样剩下1 个给了猴子。
// 请用迭代法编程计算并输出原来这堆棚子至少有多少个。

//13.杨辉三角
//#include <stdio.h>
//int main()
//{
//    int i, j, a[10][10];
//    for (i = 0; i < 10; ++i)
//    {
//        a[i][0] = a[i][i] = 1;
//        for (j = 1; j < i; ++j)
//        {
//            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//        }
//    }
//    for (i = 0; i < 10; ++i)
//    {
//        for (j = 0; j < 10 - i; ++j)
//        {
//            printf("  ");
//        }
//        for (j = 0; j <= i; ++j)
//        {
//            printf("%4d", a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//14.有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），
// 凡报到3的人退出圈子，问最后留下的是原来第几号的那位。(约瑟夫环)


//15.求0—7所能组成的奇数个数
//16.八进制转换为十进制
//17.有 n 个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。
//18.一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？





//13.约瑟夫环
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct LinkedList    LinkedList;
//
//struct LinkedList
//{
//    int val;
//    struct LinkedList * next;
//};
//
//LinkedList * create(int n)
//{
//    int i = 1;
//    LinkedList *head = (LinkedList *) malloc(sizeof(LinkedList));
//    LinkedList *p1,*p2;
//    p1  = p2  = (LinkedList*) malloc(sizeof (LinkedList));
//
//    head->val = 0;
//    head->next = NULL;
//    p1->val = i++;
//
//    while (i <= n+1)
//    {
//        head->next == NULL ?  (head->next = p1) : (p2->next = p1);
//
//        p2 = p1;
//        p1 = (LinkedList *) malloc(sizeof(LinkedList));
//        p1->val = i++;
//    }
//
//    p2->next = head->next;
//
//    return head;
//}
//
//int fun(int n,int m)
//{
//    int i = n,j;
//    LinkedList *t,*node = (struct LinkedList*) malloc(sizeof (struct LinkedList));
//    node = create(n);
//
//    while (n-- > 0)
//    {
//        for (j = 0; j < m-1; ++j)
//        {
//            node = node->next;
//        }
//        t = node;
//        node = node->next;
//        printf("%d ", node->val);
//        t->next = node->next;
//        node = t;
//    }
//    return node->val;
//}
//
//int main()
//{
//    printf("***%d***",fun(5, 4));
//    return 0;
//}





//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct LinkedList
//{
//    int val;
//    struct LinkedList *next;
//} LinkedList;
//
//int main()
//{
//    int n, m, i = 1, j;         //人数   第几个出局    初始化链表i
//    //输入总人数和数到几出局
//    scanf("%d%d", &n, &m);
//
//    //给链表头分配空间
//    LinkedList *head = (LinkedList *) malloc(sizeof(LinkedList)), *p1, *p2, *t;
//    head->val = 0;
//    head->next = NULL;
//
//    while (i <= n)
//    {
//        p1 = (LinkedList *) malloc(sizeof(LinkedList));
//        p1->val = i++;
//        head->next == NULL ? (head->next = p1) : (p2->next = p1);
//        p2 = p1;
//    }
//    p2->next = head->next;
//    while (n-- > 0)
//    {
//        for (j = 0; j < m - 1; ++j)
//            head = head->next;
//
//        t = head, head = head->next, t->next = head->next;
//        head = t;
//    }
//    printf("%d\n", head->val);
//    return 0;
//}






