
//CHAPTER SEVEN

// 7.1 写两个函数，分别求最大公约数和最小公倍数
//  #include <stdio.h>
//  int gys(int m, int n)
//  {
//      int t;
//      if(m < n)
//      {
//          t = m, m = n, n = t;
//      }
//      while(m%n)
//      {
//          t = m%n;
//          m = n;
//          n = t;
//      }
//      return n;
//  }

// int gbs(int m, int n)
// {
//     int t = gys(m,n);
//     return (m*n/t);
// }

// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("zdgys:%d\n", gys(a,b));
//     printf("zxgbs:%d", gbs(a,b));
//     return 0;
// }

//7.2 求方程a*pow(x,2)+b*x+c = 0的根，用三个函数分别求当: pow(b,2)-4*a*c大于0、等于0、小于0时的根并输出结果。从主函数输入a,b,c的值

//#include <stdio.h>
//#include <math.h>
//
//void over(float d, float  a, float  b)
//{
//    float x1, x2;
//    x1 = (-b + sqrt(d))/(2 * a);
//    x2 = (-b - sqrt(d))/(2 * a);
//
//    printf("该方程有两个根:x1=%f,x2=%f", x1, x2);
//}
//
//void equal(float d, float  a, float  b)
//{
//    float x;
//    x = (-b + sqrt(d))/(2 * a);
//    printf("该方程有一个跟:%f", x);
//}
//void below(float d, float a, float b)
//{
//    printf("没有实数根");
//}
//int main()
//{
//    float a, b, c,d;
//    printf("输入a,b,c的值");
//    scanf("%f %f %f", &a, &b, &c);
//    d = b * b - 4 * a * c;
//
//    if(b > 0) over(d, a, b);
//    if(b == 0) equal(d, a, b);
//    if(b < 0)below(d, a, b);
//
//    return 0;
//}





// 7.3 输入一个数判断是否为素数
//  #include <stdio.h>
//  #include <math.h>
//  int isPrime(int a)
//  {
//      int i;
//      for(i = 2; i<=sqrt(a); i++)
//      {
//          if(a%i == 0) return 0;
//      }
//      return 1;
// }
//
// int main()
// {
//     int a;
//     printf("请输入一个整数\n") ;
//     scanf("%d",&a);
//     if(isPrime(a)){
//         printf("%d为素数", a);
//     }else{
//         printf("%d不为素数", a);
//     }
//
//     return 0;
// }

// 4.写一个函数是,使给定的3×3数组行列互换
//  #include <stdio.h>
//  void change (int a[3][3])
//  {
//      int i,j,t;
//      for(i= 0; i<2; i++)
//      {
//          for(j = i; j<3; j++)
//          {
//              t = a[i][j];
//              a[i][j] = a[j][i];
//              a[j][i] = t;
//          }
//      }
//  }

// int main()
// {
//     int a[3][3];
//     int i,j;
//     for(i = 0; i<3;i++)
//     {
//         for(j = 0; j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }

//     for(i = 0; i<3;i++)
//     {
//         for(j = 0; j<3;j++)
//         {
//             printf("%2d",a[i][j]);
//         }
//         printf("\n");
//     }
//     change(a);

//     for(i = 0; i<3;i++)
//     {
//         for(j = 0; j<3;j++)
//         {
//             printf("%2d",a[i][j]);
//         }
//         printf("\n");
//     }
// }

//7.5 写一个函数,使输入的一个字符串按反序排放,在主函数中输入和输出字符串

//代码:
//  #include <stdio.h>
//  #include <string.h>
//  void convert(char a[100])
//  {
//      int n,i,t;
//      n = strlen(a);
//      for(i = 0; i< n/2; i++)
//      {
//          t = a[i];
//          a[i] = a[n-i-1];
//          a[n-i-1] = t;
//      }
//  }
//  int main()
//  {
//      char a[100];
//      gets(a);

//     convert(a);
//     puts(a);

//     return 0;
// }


//7.6 写一个函数,将连个字符串连接
//#include <stdio.h>
//void strc(char *des, char *str)
//{
//    int i,j;
//    i = j =  0;
//    while(des[i] != '\0')i++;   //将i定位到目标数组结尾\0处
//    while (str[j] != '\0')  //遍历完str数组结束
//    {
//        des[i++] = str[j++];    //逐个连接
//    }
//
//    des[i] = '\0';    //字符串末尾赋值‘\0’
//}
//int main()
//{
//    char a[80],b[80];
//    //输入a,b
//    gets(a);
//    gets(b);
//    //连接
//    strc(a, b);
//    //输出
//    puts(a);
//    return 0;
//}


//7.7 写一个函数,将一个字符串长得元音字母复制到另一字符串,然后输出

//代码:
//#include <stdio.h>
//void printaeiou(char *str){
//    int i,j;
//    char des[50];
//    for (i = j = 0; *(str + i) != '\0'; ++i)
//    {
//        switch (*(str + i))
//        {
//            case 'a':case 'A':case 'e':case 'E':
//            case 'i':case 'I':case 'u':case 'U': des[j++] = *(str + i);
//                break;
//        }
//    }
//    des[j] = '\0';
//    puts(des);
//}
//
//int main()
//{
//    char str[50];
//
//    gets(str);
//    printaeiou(str);
//
//    return 0;
//}



//7.8 写一个函数,输入一个4位数字,要求输出这4个数字字符,单没两个数字间空一格空格.例如输入1990，应该输出1 9 9 0;
//#include <stdio.h>
//void print(int num)
//{
//    int n,i;
//    for (i = 0,n = 1000; i < 4; ++i)
//    {
//        if (n == 1)
//        {
//            printf("%d", num / n);
//        }else{
//            printf("%d ", num / n);
//        }
//        num %= n;
//        n /=10;
//    }
//}
//
//int main()
//{
//    int num;
//
//    scanf("%d", &num);
//    print(num);
//
//    return 0;
//}

//7.9 编写一个函数,由实参传来一个字符串,统计此字符串中字母、数字、空格和其他字符的个数,在主函数中输入字符串已经上述的结果

//代码
//#include <stdio.h>
//void stats(char *str,int *zm, int *sz, int *kg, int *qt)
//{
//    int i;
//    *zm = *sz = *kg = *qt = 0;
//    for (i = 0; *(str + i) != '\0'; ++i)
//    {
//        char t  = *(str + i);
//        if (t >= '0' && t <= '9')
//        {
//            (*sz)++;
//        } else if(t >= 'A' && t <= 'Z' || t >= 'a' && t <= 'z')
//        {
//            (*zm)++;
//        } else if (t == ' ')
//        {
//            (*kg)++;
//        }else{
//            (*qt)++;
//        }
//    }
//}
//
//int main()
//{
//    char str[50];
//    int zm,sz,kg,qt;
//    gets(str);
//    stats(str, &zm, &sz, &kg, &qt);
//
//    printf("字母个数:%d", zm);
//    printf("数字个数:%d", sz);
//    printf("空格个数:%d", kg);
//    printf("其他字符个数:%d", qt);
//
//    return 0;
//}



//7.10 写一个函数,输入一串字符,将此字符串中最长的单词输出。
//#include <stdio.h>
//void max_len_pt(char *str)
//{
//    int i, j, maxlen, maxi;
//
//    for (i = 0, maxlen = 0, maxi = 0; str[i] != '\0'; ++i)
//    {
//        for (j = i ; str[j] != '\0' && str[j] != ' '; ++j);
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
#include <stdio.h>
#include <math.h>
typedef struct student{
    char name[20];
    float score[5];
}Stu;

float * per_stu_ave(Stu *stu)
{
    float per_stu_sco[10] = {0},sum;
    int i, j;
    for (i = 0; i < 10; ++i)
    {
        sum = 0;
        for (j = 0; j < 5; ++j)
        {
            sum += stu[i].score[j];
        }
        per_stu_sco[i] = sum / 10;
    }

    return per_stu_sco;
}

float * per_sub_ave(Stu *stu)
{

}

int main()
{

}





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
    //int f(char *m)
    //{
    //    int n , i;
    //    n = i  = 0;
    //    while (*(m + i) != '\0')
    //    {
    //        if (m[i] >= '0' && m[i] <= '9')
    //        {
    //            n = n * 16 + m[i] - '0';
    //        } else if (m[i] >= 'a' && m[i] <= 'f')
    //        {
    //            n = n * 16 + m[i] - 'a' + 9;
    //        }
    //        i++;
    //    }
    //
    //    return n;
    //}
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
//        *(s + n - 1) = num % 10 + '0';
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

