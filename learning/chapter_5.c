//CHAPTER FIVE

//5.1 ��
//5.2 ��

//5.3  ��������������m��n.�������Լ������С��������

//����
// #include <stdio.h>
// int gcd(int m,int n)
// {
//     int t;
//     if(m < n)
//     {
//         t = m, m = n, n = t;
//     }
//
//     while(n != 0)
//     {
//         t = m%n;
//         m = n;
//         n = t;
//     }
//
//     return m;
// }
//
// int lcm(int m, int n, int p)
// {
//     return m*n/p;
// }
//
// int main()
// {
//     int m,n,p,q;
//     printf("������m,n\n");
//     scanf("%d %d",&m,&n);
//     p = gcd(m,n);
//     q = lcm(m,n,p);
//
//     printf("m,n�����Լ����:%d\n",p);
//     printf("m,n����С��������:%d\n",q);
//     return 0;
// }


//5.4 ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո� ������ �������ַ��ĸ�����

//����
// #include<stdio.h>
// int main() {
//     int letter=0,space=0,num=0,others = 0;
//     int c;
//
//     while ((c = getchar()) != '\n')
//     {
//         if(c == ' ') {
//             space++;
//         }else if(c>='1' &&c <='9') {
//             num++;
//         }else if((c>='a' &&c<='z')||(c>='A'&&c<='Z')) {
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


//5.5�� Sn=a+aa+aaa+...+ n��a��ֵ������ a ��һ�����֣�n��ʾa��λ��
//#include<stdio.h>
//
//int main()
//{
//    int n, a;
//    int sum, m;
//    printf("����n");
//    scanf("%d", &n);
//    sum = 0, a = 2, m = 0;
//
//    while (n--)
//    {
//        m = m * 10 + a;
//        sum += m;
//    }
//    printf("Sn=a+aa+aaa+...+ n��a��ֵ:%d\n", sum);
//    return 0;
//}

// 6.��1! + 2! + ... + 19! + 20! ��ֵ
//#include<stdio.h>
//int main()
//{
//    int i;
//    long long sum, t;
//    for (i = 1, sum = 0, t = 1; i <= 20; ++i)
//    {
//        t *= i;
//        sum += t;
//    }
//    printf("1! + 2! + ... + 19! + 20!��ֵΪ : %lld\n", sum);
//    return 0;
//}

// 7.�� 1+2+3+...+99+100 + 1*1 + 2*2 +...+ 49*49+50*50 + 1+1/2+1/3+...+1/9+1/10 ��ֵ

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
//    printf("sumΪ:%lf", sum);
//
//    return 0;
//}

// 8.������еġ�ˮ�ɻ�����.��ν��ˮ�ɻ�������ָһ�� 3 λ�������λ���������͵��ڸ�����������153 ��ˮ�ɻ��� ��Ϊ 153=1+125+27��
//#include<stdio.h>
//
//int main()
//{
//    int i, x, y, z;
//
//    for (i = 100; i < 1000; i++)
//    {
//        x = i % 10;       //��λ
//        y = i / 10 % 10;    //ʮλ
//        z = i / 100;      //��λ
//        if (i == (x * x * x + y * y * y + z * z * z))    //�����������ֵ
//            printf("%d\n", i);
//    }
//    return 0;
//}

// 9.��1000�ڵ�����
//#include<stdio.h>
//int main()
//{
//    int i, m, j, n, a[50];
//    for (i = 1; i <= 1000; i++)
//    {
//        m = 0, n = 0;
//        for (j = 1; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                m += j;
//                a[++n] = j;
//            }
//        }
//
//        if (m == i)
//        {
//            printf("%d its factors are ", m);
//            for (j = 1; j < n; j++)
//            {
//                printf("%d,", a[j]);
//            }
//            printf("%d\n", a[n]);
//        }
//
//    }
//    return 0;
//}




// 10. ��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�

//#include <stdio.h>
//int main()
//{
//    double x, y, t, sum;        //�������ӣ���ĸ�������������
//    int i;          //�����±�
//
//    x = 2.0, y = 1.0, sum = 0.0; //��ʼ��
//
//    for (i = 1; i <= 20; ++i)
//    {
//        sum += x / y;   //�ۼ�
//
//        t = x + y; //����x+y��t
//        y = x;      //��x����y
//        x = t;      //������ֵt����x
//    }
//
//    printf("%lf", sum);   //�����
//    return 0;
//}

// 11.һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�

//#include <stdio.h>
//int main()
//{
//    double len = 100;
//    double sum = len; //��һ����صĸ߶�
//    len = len/2;
//    for (int i = 2; i <= 10; ++i)   //ʣ��9���������������
//    {
//        sum += len * 2; //ÿ����ؾ�����ͬ���¾���
//        len /=2;
//    }
//    printf("������%lf ��ʮ�η���������%lf", sum, len);
//    return 0;
//}

// 12. ���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ���ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
// �Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�
//#include <stdio.h>
//int fun(int n)
//{
//    if(n == 10)
//    {
//        return 1;
//    }else{
//        return (fun(n + 1) + 1) * 2;      //��n����n+1��� (x+1)*2��
//    }
//}
//int main()
//{
//    printf("%d", fun(1));
//    return 0;
//}

// 13.�õ�������x = sqrt(a)����ƽ�����ĵ�����ʽΪ X(n+1) = 1/2 * (X(n) + a/X(n))
// Ҫ��ǰ�����������x�Ĳ�ľ���ֵС��1e-5
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
//    printf("x��ֵΪ%d ƽ����Ϊ %lf", a, l);
//    return 0;
//}



//5.16 ��ӡ����������
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
//    for (i = 1; i <= 4; ++i)        //ǰ�Ĳ�
//    {
//        for (j = 1; j <= 4 - i; ++j)    //ÿ�����4-i���ո�
//        {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; ++j)    //ÿ�����(2*i-1)��'*'
//        {
//            printf("*");
//        }
//        printf("\n");   //ÿ�����Ļ���
//    }
//    for (i = 3; i >= 1 ; --i)   //������ ����iΪ3�ȵ�����ǰ�����㵹�����
//    {
//        for (j = 1; j <= 4 - i; ++j)        //ÿ�����4-i���ո�
//        {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; ++j)    //ÿ�����(2*i-1)��'*'
//        {
//            printf("*");
//        }
//        printf("\n");   //ÿ�������
//    }
//    return 0;
//
//}

// 5.17 ����ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ��ѳ�ǩ��������������
// �������Ա���������������� a˵������x�ȣ�c˵������x,z�ȣ��������ҳ��������ֵ�������
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