//CHAPTER FIVE

//5.1 略
//5.2 略

//5.3  输入两个正整数m和n.求其最大公约数和最小公倍数，

//代码
// #include <stdio.h>
// int gcd(int m,int n)
// {
//     int t,q;
//     if(m < n)
//     {
//         t = m;
//         m = n;
//         n = t;
//     }

//     while(n != 0)
//     {
//         q = m%n;
//         m = n;
//         n = q;
//     }

//     return m;
// }

// int lcm(int m, int n, int p)
// {
//     return m*n/p;
// }

// int main()
// {
//     int m,n,p,q;
//     printf("??(33 19)????????m,n\n");
//     scanf("%d %d",&m,&n);
//     p = gcd(m,n);
//     q = lcm(m,n,p);

//     printf("???????:%d\n",p);
//     printf("??小???????:%d\n",q);
//     return 0;
// }


//5.4 输人一行字符。分别统计出其中英文字母、空格 、数字 和其他字符的个数。

//代码
//  #include<stdio.h>
//  int main()
//  {
//      char str[50],*p;
//      int e,s,n,o;
//
//     e=s=n=o=0;
//     printf("请输入字符串\n");
//     gets(str);
//     p = str;
//
//     while(*p != '\0')
//     {
//         if(*p >=65 && *p <= 90 || *p >=97 && *p <= 122)
//         {
//             e++;
//         }else if(*p >= 48 && *p <= 58)
//         {
//             n++;
//         }else if(*p == ' ')
//         {
//             s++;
//         }else
//         {
//             o++;
//         }
//         p++;
//     }
//
//     printf("%d%d%d%d\n",e,n,s,o);
//     return 0;
// }


//??Sn=a+aa+aaa+...+a...a?????????a??????????n???a??位????n?????????
// #include<stdio.h>
// int main()
// {
//     int n,a;  //????
//     long long sum,m;
//     printf("??????n???:");
//     scanf("%d",&n);
//     sum = 0,a = 2, m = 0;

//     while(n--)
//     {
//         m = m*10 + a;
//         sum += m;
//     }
//     printf("Sn=a+aa+aaa+...+a...a????:%lld.\n",sum);
//     return 0;
// }

// 6.??1?????20???????
// #include<stdio.h>
// long long fun(int m)
// {
//     if(m == 1) return 1;
//     return fun(m-1)*m ;
// }

// int main()
// {
//     int i;
//     long long sum;
//     for(i = 1, sum = 0; i <= 20; i++)
//     {
//         sum += fun(i);
//     }
//     printf("1! + 2! + ... + 20!????:%lld",sum);
//     return 0;
// }

// 7.?? 1+2+3+...+99+100   1+1/2+1/3+...+1/49+1/50  1*1 + 2*2 +...+10+10???
//  #include<stdio.h>
//  int main()
//  {
//      int i;
//      double sum;
//      for(i = 1, sum = 0.0; i <= 100; i++ )
//      {
//          if(i <= 10) sum += 1.0/i;
//          if(i <= 50) sum += i*i;
//          sum += i;
//      }
//      printf("sum????%lf",sum);

//     return 0;
// }

// 8.??????械???????  ??????????位??
//  #include<stdio.h>
//  int main()
//  {
//      int i,x,y,z;

//     for(i = 100; i < 1000; i++ )
//     {
//         x = i%10;       //??位
//         y = i/10%10;    //?位
//         z = i/100;      //??位
//         if(i == (x*x*x + y*y*y + z*z*z))    //?卸???????????
//             printf("%d\n",i);
//     }
//     return 0;
// }

// 9.?????械?????   ????????????????????????????
//  #include<stdio.h>
//  int main()
//  {
//      int i,m,j,n,a[50];
//      for(i = 1; i <= 1000; i++)
//      {
//          m=0,n=0;
//          for(j = 1;j < i; j++)
//          {
//              if(i%j == 0)
//              {
//                  m += j;
//                  a[++n] = j;
//              }
//          }

//         if(m == i)
//         {
//             printf("%d its factors are ",m);
//             for(j = 0; j< n; j++)
//             {
//                 printf("%d,",a[j]);
//             }
//             printf("%d\n",a[n]);
//         }

//     }
//     return 0;
// }




// 10.?????????  2/1 + 3/2 + 5/3 + 8/5
//  #include<stdio.h>
//  int main()
//  {
//      int m,n,t,i;
//      double sum;
//      m = 2, n = 1, i = 20, sum = 0.0;
//      while(i--)
//      {
//          sum += (double)m/(double)n;
//          t = m + n;
//          n = m;
//          m = t;
//      }

//     printf("???????械???%lf",sum);

//     return 0;
// }

// 11.???100????????????????????????????
//    ??10????????????????????畏??????

// #include <stdio.h>
// int main()
// {
//     double sum, m, l;
//     int n;

//     sum = m = 100.0;
//     n = 9;      // ??9?????????????????

//     while(n--)
//     {
//         m /= 2;
//         sum += m * 2;
//         if(n == 0) l = m/2;         //??10?蔚??????
//     }

//     printf("???????????????%lf??\n",sum);
//     printf("??10???????%lf??",l);

//     return 0;
// }

// 12.??????????? ???????n??????????????+1???????????????
//    ???????????????????????????????
//  #include<stdio.h>

// int fun(int n)
// {
//     if(n == 10) return 1;

//     return ((fun(n + 1) + 1 ) * 2);
// }
// int main()
// {
//     int n;
//     n = fun(1);

//     printf("????????%d??",n);

//     return 0;
// }

// 13.??????????x = ??????a
//  #include <stdio.h>
//  #include <math.h>
//  int main()
//  {
//      int a;
//      double b,l,t;
//      a = 2;
//      t = t = 1.0;
//      l = 2.0;

//     while(fabs(l-b) > 1.0e-5)
//     {
//         b = t;
//         l = (b + (a / b))/2;
//         t = l;
//     }

//     printf("x = ??????%d????%lf", a, l);
//     return 0;
// }

// #include<stdio.h>
// void pt_star(int i)
// {
//     while(i--)
//     {
//         printf("*");
//     }
// }
// void pt_space(int i)
// {
//     while(i--)
//     {
//         printf(" ");
//     }
// }

// int main()
// {
//     int i,j;
//     for(i = 3 ; i >= 0 ; i--)
//     {
//         pt_space(i);
//         j =3-i;

//         pt_star(2*j +1);
//         printf("\n");
//     }
//     for(i = 1; i<=3 ;i++)
//     {
//         pt_space(i);
//         j = 3-i;
//         pt_star(2*j +1);

//         printf("\n");
//     }

//     return 0;
// }

// 17.?????????斜???????ABC ?? XYZ 6?? A????X?? C????X??Z???????????
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








