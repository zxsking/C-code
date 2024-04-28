

//CHAPTER EIGHT
// 2. 输入三个字符串,按由小到大的顺序处理
//  #include <stdio.h>
//  #include <string.h>
//  void change(char *p, char *q)   //互换字符串值
//  {
//      char t[50];
//      strcpy(t,p);
//      strcpy(p,q);
//      strcpy(q,t);
//  }
//  int main()
//  {
//      char a[50],b[50],c[50];
//      printf("输入三个字符串\n");
//      gets(a);
//      gets(b);
//      gets(c);

//     if(strcmp(a,b) > 0) change(a,b);        //通过判断,来调整位置
//     if(strcmp(a,c) > 0) change(a,c);
//     if(strcmp(b,c) > 0) change(b,c);

//     puts(a);
//     puts(b);
//     puts(c);

//     return 0;
// }

// 3.输入三个整数,将其中最小的数与第一个数进行对换,吧最大的数与最后一个数兑换.
//   写三个函数1.输入10个数 2.进行处理 3.输出10个数

// #include <stdio.h>
// #define N 10
// void in(int *a)
// {
//     int i;
//     printf("请依次输入10个数");
//     for(i = 0; i < N ; i++)
//     {
//         scanf("%d",(a+i));
//     }
// }

// void fun(int *a)
// {
//     int maxId,minId,i,t,t1;
//     maxId = 0, minId = 0;
//     for(i = 1; i< N ; i++)
//     {
//         if(*(a+i) < *(a + minId)) minId = i;
//         if(*(a+i) > *(a + maxId)) maxId = i;
//     }
//     t = *a;
//     t1 = *(a+N-1);

//     *a = *(a + minId);
//     *(a+N-1) = *(a + maxId);

//     *(a + minId) = t;
//     *(a + maxId) = t1;
// }

// void out(int *a)
// {
//     int i;
//     for(i = 0; i < N ; i++)
//     {
//         printf("%2d",*(a+i));
//     }
// }

// int main()
// {
//     int a[10];
//     in(a);
//     fun(a);
//     out(a);
//     return 0;
// }

// 4.有n个整数,是前面的个数顺序向后移m个位置,最后m个数变成前m个数
//  #include <stdio.h>
//  void fun(int *p,int n,int m)
//  {
//      int i,j,t;
//      for(i = 0; i < m; i++)
//      {
//          t = *(p+n-1);
//          for(j = n-1; j>0; j--)
//          {
//              *(p+j) = *(p+j-1);
//          }
//          *(p) = t;
//      }
//  }
//  int main()
//  {
//      int m,n,i;
//      printf("请输入数组大小\n");
//      scanf("%d",&n);
//      int a[n];
//      printf("请输入数组元素\n");
//      for(i = 0; i<n; i++)
//      {
//          scanf("%d",a+i);
//      }
//      for(i = 0; i<n; i++)
//      {
//          printf("%2d",*(a+i));
//      }
//      printf("请输入移动多少个位置\n");
//      scanf("%d",&m);

//     fun(a,n,m);

//     for(i = 0; i < n; i++)
//     {
//         printf("%2d",*(a+i));
//     }

//     return 0;
// }

//  5.有n个人围成一圈,顺序排号从第一个人开始报数饭报道三个人退出圈子,问最后留下的时原来第几号那位;
// #include <stdio.h>
// int main()
// {
//     int i,m,n,a[50],*p,k;
//     printf("请输入参与人数:");
//     scanf("%d",&n);
//     p = a;
//     for(i = 0; i< n; i++)
//     {
//         *(p+i) = i+1;
//     }

//     i = 0;
//     m = 0;
//     k = 0;

//     while(m < n-1)  //当人退到只剩一人时结束循环
//     {
//         if(*(p+i) != 0)k++;
//         if(k == 3)
//         {
//             *(p+i) = 0;
//             m++;
//             k = 0;
//         }

//         i++;
//         if(i == n){
//             i = 0;
//         }
//     }

//     i = 0;
//     while(*(p + i) == 0)i++;

//     printf("留下的为原来第%d个人",*(p + i));

//     return 0;
// }

// 6. 写一函数,求一个字符串的长度,在main函数中输入
//  #include <stdio.h>
//  int my_len(char *p)
//  {
//      int i = 0;
//      while(*(p+i) != '\0')i++;
//      return i;     //索引的下标为0,不用减1;
//  }
//  int main()
//  {
//      char str[50];
//      gets(str);
//      printf("%d",my_len(str));
//      return 0;
//  }

// 7.有一字符串,包含n个字符,协议函数,将此字符串中第m个字符开始的全部字符复制成为另一个字符串
//  #include <stdio.h>
//  void my_cpym(char *str, char *target,int m)
//  {
//      int i = 0;
//      int n = m - 1;
//      while(*(target + n) != '\0')
//      {
//          *(str + i) = *(target + n); //索引是从下标0开始的
//          i++;
//          n++;
//      }

//     str[i] = '\0';
// }
// int main()
// {
//     char s[50];
//     char t[50];
//     int i;
//     printf("输入字符串:");
//     gets(t);
//     printf("输入从第几个字符开始复制:");
//     scanf("%d",&i);

//     my_cpym(s,t,i);

//     puts(t);
//     puts(s);
//     return 0;
// }

// 8.输入一行文字,找出其中大写字母,小写字母,空格,数字以及其他字符各有多少.
//  #include <stdio.h>
//  int main()
//  {
//      int i,d,x,s,n,o;
//      char a[50],*p;
//      printf("请输入字符串:");
//      gets(a);
//      p = a;
//      i = d = x = s = n = o  = 0;
//      while(*(p + i) != '\0')
//      {
//          if(*(p + i) >= 'A' && *(p + i) <= 'Z')
//          {
//              d++;
//          }else if(*(p + i) >= 'a' && *(p + i) <= 'z')
//          {
//              x++;
//          }else if(*(p + i) >= '0' && *(p + i) <= '9')
//          {
//              n++;
//          }else if(*(p + i) == ' ')
//          {
//              s++;
//          }else{
//              o++;
//          }

//         i++;
//     }

//     printf("有%d个大写字符\n",d);
//     printf("有%d个小写字符\n",x);
//     printf("有%d个数字\n",n);
//     printf("有%d个空格\n",s);
//     printf("有%d个其他字符\n",o);

//     return 0;
// }

// #include <stdio.h>
// void fun(int (*p)[3])
//{
//     int i,j,t;
//     for (i = 0; i < 2; ++i)
//     {
//         for (j = i+1; j < 3; ++j)
//         {
//             t = *(*(p + i) + j);
//             *(*(p + i) + j) = *(*(p + j) + i);
//             *(*(p + j) + i) = t;
//         }
//         printf("\n");
//     }
// }
// int main()
//{
//     int num[3][3] = {1,2,3,4,5,6,7,8,9};
//
//
//     for (int i = 0; i < 3; ++i)
//     {
//         for (int j = 0; j < 3; ++j)
//         {
//             printf("%3d", num[i][j]);
//         }
//         printf("\n");
//     }
//
//
//     printf("\n");
//
//
//     fun(num);
//
//     for (int i = 0; i < 3; ++i)
//     {
//         for (int j = 0; j < 3; ++j)
//         {
//             printf("%3d", num[i][j]);
//         }
//         printf("\n");
//     }
//
//     return 0;
//
// }
//


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

char *new(int n)
{
    return (char *) malloc(sizeof(char) * n);
}

void my_free(char *a)
{
    free(a);
}
int main()
{
//    char *a;
//    int n;
//    scanf("%d", &n);
//    a = new(n);
//    getchar();
//    fgets(a, n, stdin);
//    puts(a);
//    my_free(a);
//    puts(a);



    return 0;
}