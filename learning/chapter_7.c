//CHAPTER SEVEN

// 7.1 写两个函数，分别求最大公约数和最小公倍数
//#include <stdio.h>
//int gcd(int m, int n)   //迭代实现
//{
//    int t;
//    while (n != 0)
//    {
//        t = m % n;
//        m = n;
//        n = t;
//    }
//    return m;
//}
////int gcd(int m,int n) //递归实现
////{
////    if (n == 0)
////    {
////        return m;
////    } else
////    {
////        return gcd(n, m % n);
////    }
////}
////
//int lcm(int m, int n)
//{
//    return m * n / gcd(m, n);
//}
//int main()
//{
//    int m, n, t;
//    printf("输入m,n(m>n):");
//    scanf("%d %d", &m, &n);     //输入m n
//    if (n > m)      //使用辗转相除要求m>n
//    {
//        t = n, n = m, m = t;
//    }
//    printf("最大公约数:%d\n", gcd(m, n));
//    printf("最小公倍数:%d", lcm(m, n));
//
//    return 0;
//}



//7.2 求方程a*pow(x,2)+b*x+c = 0的根，用三个函数分别求当: pow(b,2)-4*a*c大于0、等于0、小于0时的根并输出结果。从主函数输入a,b,c的值
//#include <stdio.h>
//#include <math.h>
//
//void two(double a, double b, double c)
//{
//    double m, n;
//    m = -b / (2 * a);
//    n = sqrt(b * b - 4 * a * c) / (2 * a);
//
//    printf("有两个解,分别为:\n");
//    printf("%lf  ", m - n);
//    printf("%lf  ", m + n);
//}
//
//void one(double a, double b, double c)
//{
//    double m, n;
//    m = -b / (2 * a);
//    n = sqrt(b * b - 4 * a * c) / (2 * a);
//
//    printf("有两个相同解,为:\n");
//    printf("%lf  ", m - n);
//}
//
//void zero()
//{
//    printf("无解");
//}
//
//int main()
//{
//    double a, b, c, t;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    t = b * b - 4 * a * c;
//    if (t > 0)
//    {
//        two(a, b, c);
//    } else if (t == 0)
//    {
//        one(a, b, c);
//    } else
//    {
//        zero();
//    }
//    return 0;
//}



// 7.3 输入一个数判断是否为素数
//#include <stdio.h>
//#include <math.h>
//
//int isPrime(int a)
//{
//    int i;
//    for (i = 2; i <= sqrt(a); i++)
//    {
//        if (a % i == 0) return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    int a;
//    printf("请输入一个整数\n");
//    scanf("%d", &a);
//    if (isPrime(a))
//    {
//        printf("%d为素数", a);
//    } else
//    {
//        printf("%d不为素数", a);
//    }
//
//    return 0;
//}

// 4.写一个函数是,使给定的3×3数组行列互换
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define N 3
//void change(int a[N][N])
//{
//    int i, j, t;
//    for (i = 0; i < 2; i++)
//    {
//        for (j = i; j < 3; j++)
//        {
//            t = a[i][j];
//            a[i][j] = a[j][i];
//            a[j][i] = t;
//        }
//    }
//}
//void pt(int (*a)[3])
//{
//    int i,j;
//    for (i = 0; i < N; ++i)
//    {
//        for (j = 0; j < N; ++j)
//        {
//            printf("%3d", *(*(a+i)+j));
//        }
//        printf("\n");
//    }
//    printf("\n");
//}
//int main()
//{
//    int a[N][N],i, j;
//    srand(time(NULL));
//
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)
//        {
//            a[i][j] = rand() % 100 + 1;
//        }
//    }
//    pt(a);
//    change(a);
//    pt(a);
//
//    return 0;
//}


//7.5 写一个函数,使输入的一个字符串按反序排放,在主函数中输入和输出字符串

//代码:
//#include <stdio.h>
//#include <string.h>
//
//void convert(char *a)
//{
//    int len,i;
//    char t;
//    len = strlen(a);
//
//    for (i = 0; i < len / 2; ++i)
//    {
//        t = a[i];
//        a[i] = a[len - i - 1];
//        a[len - i - 1] = t;
//    }
//}
//int main()
//{
//    char str[20];
//    gets(str);
//    convert(str);
//    puts(str);
//    return 0;
//}

//7.6 写一个函数,将连个字符串连接
//#include <stdio.h>
//
//void my_cat(char *s1, char *s2)
//{
//    while(*s1)
//    {
//        s1++;
//    }
//    while(*s2)
//    {
//        *s1 = *s2;
//        s1++;
//        s2++;
//    }
//    *s1 = '\0';
//}
//int main()
//{
//    char s1[50], s2[10];
//    gets(s1);
//    gets(s2);
//
//    my_cat(s1, s2);
//    puts(s1);
//    return 0;
//}


//7.7 写一个函数,将一个字符串长得元音字母复制到另一字符串,然后输出

//代码:
//#include <stdio.h>
//void cp_aeiou(char *des, char *str)
//{
//    while (*str)
//    {
//        switch (*str)
//        {
//
//            case 'a': case 'e':case 'i': case 'o': case 'u':
//            case 'A': case 'E':case 'I' :case 'O': case 'U':
//            {
//                *des = *str;
//                des++;
//                break;
//            }
//        }
//        str++;
//    }
//    *des = '\0';
//}
//int main()
//{
//    char des[20], str[20];
//    gets(str);
//    cp_aeiou(des, str);
//    puts(des);
//    return 0;
//}


//7.8 写一个函数,输入一个4位数字,要求输出这4个数字字符,但是两个数字间空一格空格.例如输入1990，应该输出1 9 9 0;
//#include<stdio.h>
//#include <string.h>
//void pt()
//{
//    char str[5];
//    int i;
//    fgets(str, 5, stdin);
//    for (i = 0; i < 3; ++i)
//    {
//        printf("%c", str[i]);
//        printf(" ");
//    }
//    printf("%c",str[i]);
//}
//int main()
//{
//    pt();
//    return 0;
//}

//7.9 编写一个函数,由实参传来一个字符串,统计此字符串中字母、数字、空格和其他字符的个数,在主函数中输入字符串已经上述的结果

//代码
//#include <stdio.h>
//void statistics(char *str, int *letter, int *num, int *space, int *other)
//{
//
//    while (*str)
//    {
//        if (*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z')
//        {
//            (*letter)++;
//        } else if (*str >= '0' && *str <= '9')
//        {
//            (*num)++;
//        } else if (*str == ' ')
//        {
//            (*space)++;
//        } else
//        {
//            (*other)++;
//        }
//        str++;
//    }
//}
//
//int main()
//{
//    char str[20],ch;
//    int letter, num, space, other,i;
//    letter = num = space = other = 0;
//    for (i = 0; (ch = getchar()) != '\n' && i < 19; ++i)
//    {
//        str[i] = ch;
//    }
//    statistics(str, &letter, &num, &space, &other);
//    printf("字母个数:%d", letter);
//    printf("数字个数:%d", num);
//    printf("空格个数:%d", space);
//    printf("其他字符个数:%d", other);
//    return 0;
//}


//7.10 写一个函数,输入一串字符,将此字符串中最长的单词输出。
//#include <stdio.h>
//
//void max_len_pt(char *str)
//{
//    int i, j, maxlen, maxi;
//
//    for (i = 0, maxlen = 0, maxi = 0; str[i] != '\0'; ++i)
//    {
//        for (j = i; str[j] != '\0' && str[j] != ' '; ++j);
//        if ((j - i) > maxlen)
//        {
//            maxi = i;
//            maxlen = (j - i);
//        }
//
//        i = j;  //跳到该单词结尾,提高效率
//    }
//
//    for (i = 0; i < maxlen; ++i)
//    {
//        printf("%c", str[maxi + i]);
//    }
//
//}
//
//int main()
//{
//    char a[50];
//    gets(a);
//    max_len_pt(a);
//    return 0;
//}


//7.11 写一个函数,用冒泡法对输入的10个字符按照由小到大的顺序排序

//#include <stdio.h>
//#define N 10
//
//void bubble_sort(char *str)
//{
//    int i,j,t;
//
//    for (i = 0; i < N; ++i)
//    {
//        for (j = 0; j < N-i-1; ++j)
//        {
//            if (str[j+1] < str[j])
//            {
//                t = str[j + 1];
//                str[j + 1] = str[j];
//                str[j] = t;
//            }
//        }
//    }
//
//    printf("%s", str);
//
//}
//
//int main()
//{
//    char a[10];
//    int i;
//    for (i = 0; i < N; ++i)
//    {
//        scanf("%c", &a[i]);
//    }
//    bubble_sort(a);
//    return 0;
//}


//7.12

//7.13  用递归方法求n阶勒让德多项式的值,递归公式为
// p(x,n) = 1         (n == 0)
// p(x,n) = x         (n == 1)
// p(x,n) = ((2*n-1)*x - p(x,n-1) - (n-1)*p(x,n-2))/2         (n >= 1)
//#include <stdio.h>
//int p(int x, int n)
//{
//    if (n == 0)
//    {
//        return 1;
//    }
//    if (n == 1)
//    {
//        return x;
//    }
//    if (n >= 1)
//    {
//        return ((2 * n - 1) * x - p(x, n - 1) - (n - 1) * p(x, n - 2)) / 2;
//    }
//}
//int main()
//{
//    printf("%d", p(1,10));
//}

//7.14 输入10个学生5门课的成绩,分别用函数实现以下功能
//求每个学生的平均分
//计算每门科的平均分
//找出所有50个分数中最高的分数所对应的学生和课程
//计算平均分方差
//#include <stdio.h>
//#include <math.h>
//typedef struct student{
//    char name[20];
//    float score[5];
//}Stu;
//
//float * per_stu_ave(Stu *stu)
//{
//    float per_stu_sco[10] = {0},sum;
//    int i, j;
//    for (i = 0; i < 10; ++i)
//    {
//        sum = 0;
//        for (j = 0; j < 5; ++j)
//        {
//            sum += stu[i].score[j];
//        }
//        per_stu_sco[i] = sum / 10;
//    }
//
//    return per_stu_sco;
//}
//
//float * per_sub_ave(Stu *stu)
//{
//
//}
//
//int main()
//{
//
//}





//7.15 写几个函数:
//  1.输入10个职工的姓名和职工号
//  2.按照工号由小到大顺序排序,姓名顺序也随之调整
//  3.要求输入一个职工号,用折半查找法找出该职工的姓名,从主函数输入要查找的职工号,输入该职工姓名
//#include<stdio.h>
//#define N 3
//typedef struct employee
//{
//    char ename[20];
//    long eid;
//}Emp;
//
//void input(Emp *emp, int num)
//{
//    int i;
//    for (i = 0; i < num; ++i)
//    {
//        scanf("%d", &emp[i].eid);
//        scanf("%s", &emp[i].ename);
//    }
//}
//
//void sort(Emp *emp, int num)
//{
//    int i,j;
//    Emp temp;
//    for (i = 0; i < num - 1; ++i)
//    {
//        for (j = 0; j < num - i - 1; ++j)
//        {
//            if (emp[j].eid > emp[j + 1].eid)
//            {
//                temp = emp[j];
//                emp[j] = emp[j+1];
//                emp[j+1] = temp;
//            }
//        }
//    }
//
//}
//
//int findnum(Emp *emp,int i,int num)
//{
//    int l,r,mid;
//    l = 0;
//    r = num;
//    while (l < r)
//    {
//        mid = (l+r)/2;
//        if(emp[mid].eid == i){
//            return mid;
//        }
//        if (i > emp[mid].eid)
//        {
//            l = mid + 1;
//        } else if(i < emp[mid].eid){
//            r = mid - 1;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    Emp emp[10];
//    int i;
//    input(emp, N);
//    sort(emp, N);
//    for (i = 0; i < N; ++i)
//    {
//        printf("%d %s\n", emp[i].eid, emp[i].ename);
//    }
//
//    int index = findnum(emp, 1010, N);
//    if (index != -1)
//    {
//        printf("%s", emp[index].ename);
//    }
//    return 0;
//}



//7.16 写一个函数,输入一个十六进制数,输出相应的十进制数
//#include <stdio.h>
//
//int f(char *m)
//{
//    int n, i;
//    n = i = 0;
//    while (*(m + i) != '\0')
//    {
//        if (m[i] >= '0' && m[i] <= '9')
//        {
//            n = n * 16 + m[i] - '0';
//        } else if (m[i] >= 'a' && m[i] <= 'f')
//        {
//            n = n * 16 + m[i] - 'a' + 10;
//        }
//        i++;
//    }
//
//    return n;
//}
//
//int main()
//{
//    char a[20];
//    gets(a);
//
//    printf("%d", f(a));
//    return 0;
//}



//7.17 用递归法将一个整数n转化成字符串。例如：输入492, 应输出字符串492，n的位数不确定，可以是任意位数的整数

//代码:
//#include <stdio.h>
//#include <math.h>
//void transfer(char *s, int num,int n)
//{
//    //终止条件
//    if (n == 1)
//    {
//        *(s) = num % 10 + '0';
//    }else{
//        *(s + n - 1) = num % 10  + '0';
//        transfer(s, num / 10, n - 1);
//    }
//}
//int main(){
//    int num;
//    char s[40];
//
//    scanf("%d", &num);
//
//    int n = (int) log10(num) + 1;
//
//    transfer(s, num,n);
//    s[n] = '\0';
//    puts(s);
//
//    return 0;
//}


//7.18 给出年,月,日,计算改日时该年的第几天
//#include <stdio.h>
//int isLeap(int year)  //判断闰年函数
//{
//    if (year % 400 == 0 && (year % 100 != 0 && year % 4 == 0))
//    {
//        return 1; //是闰年返回1 否则换回0
//    }
//    return 0;
//}
//int date(int year, int month, int day)
//{
//    int per_month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};     //非闰年每月的天数
//    int days,i;
//    for (i = days = 0; i < month-1; ++i) //不包括输入月份当月
//    {
//        days += per_month[i];     //累加每月天数
//    }
//    days += day;    //输入月份当月的天数
//    if (isLeap(year)) //若是闰年
//    {
//        days -=1;       //2月份减去少1天
//    }
//    return days;
//}
//
//int main()
//{
//    int year, month, day;
//
//    scanf("%d %d %d", &year, &month, &day);   //输入年月日
//    int days = date(year, month, day);        //调用函数求改天是该年的第days天
//
//    printf("改天是%d年的第%d天", year, days);
//    return 0;
//}


