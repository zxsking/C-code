//CHAPTER FIVE

//5.1 ��
//5.2 ��

//5.3  ��������������m��n.�������Լ������С��������

//����
//#include <stdio.h>
//
//int gcd(int m, int n)
//{
//    if (n == 0)
//    {
//        return m;        //�ϴ�ȡ��Ϊ0 ����m�д洢���ϴ�n��ֵ
//    } else
//    {
//        return gcd(n, m % n); //շת���
//    }
//}
//int main()
//{
//    int m, n, t;
//    puts("����m n(m>n):");
//    scanf("%d %d", &m, &n);   //mҪ����n
//
//    if(n > m)
//    {
//        t = n, n = m, m = t;        //ʹm����Ϊ��ֵ
//    }
//
//    t = gcd(m, n);      //�洢���Լ��
//    printf("���Լ��Ϊ:%d\n��С������Ϊ:%d\n", t, m * n / t);
//
//    return 0;
//}


//5.4 ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո� ������ �������ַ��ĸ�����

//����
//#include<stdio.h>
//int main()
//{
//    int letter, space, num, other;
//    char ch;
//    printf("������һ���ַ�:");
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
//    printf("�����ַ���");
//    printf("%d����ĸ��", letter);
//    printf("%d���ո�", space);
//    printf("%d�����֣�", num);
//    printf("%d�������ַ���", other);
//
//    return 0;
//}



//5.5 �� Sn=a+aa+aaa+...+ n��a��ֵ������ a ��һ�����֣�n��ʾa��λ��
//#include <stdio.h>
//int main()
//{
//    int i, a, n, sum, t;
//    printf("����n:");
//    scanf("%d", &n);
//    printf("����a:");
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


// 5.6.��1! + 2! + ... + 19! + 20! ��ֵ
//#include <stdio.h>
//long long  fun(int n)
//{
//    int i;
//    long long sum, t;
//
//    for (i = t = 1, sum = 0; i <= 20; ++i)
//    {
//        t *= i;
//        printf("%lld ", t);             ////todo �����ռλ��Ҫע��
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

// 5.7.�� 1+2+3+...+99+100 + 1*1 + 2*2 +...+ 49*49+50*50 + 1+1/2+1/3+...+1/9+1/10 ��ֵ

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

// 5.8.������еġ�ˮ�ɻ�����.��ν��ˮ�ɻ�������ָһ�� 3 λ�������λ���������͵��ڸ�����������153 ��ˮ�ɻ��� ��Ϊ 153=1+125+27��
//#include<stdio.h>
//int main()
//{
//
//    int i, x, y, z, t;
//    for (i = 100; i < 1000; i++)
//    {
//        x = i % 10;       //��λ
//        y = i / 10 % 10;    //ʮλ
//        z = i / 100;      //��λ
//        t = x * x * x + y * y * y + z * z * z;
//        if (i == t)    //�����������ֵ
//            printf("%d\n", i);
//    }
//    return 0;
//}

// 5.9.��1000�ڵ�����
//#include <stdio.h>
//int main()
//{
//    int i, j, a[30],m,t;
//    for (i = 2; i < 1000; ++i)  //i = 1�� i = 2���ɣ�1��������������������
//    {
//        m = 0, t = 0;   //mΪ����a������nΪ���Ӻ�
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


// 5.10. ��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�

//#include <stdio.h>
//int main()
//{
//    double a, b, sum, n;
//    a = 1, b = 2, sum = 0, n = 1;
//    while (n++ <= 20)
//    {
//        sum += b / a;
//        b = a + b;      //��һ��bΪ��һ��������
//        a = b - a;      //��һ��aΪ��һ��b��  a+b-a
//    }
//
//    printf("%lf", sum);
//    return 0;
//}


// 5.11.һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�

//#include <stdio.h>
//
//int main()
//{
//    double len, sum;
//    sum = len = 100; //��һ����صĸ߶�
//    len = len / 2;
//    for (int i = 2; i <= 10; ++i)   //ʣ��9���������������
//    {
//        sum = sum + len * 2; //ÿ����ؾ�����ͬ���¾���
//        len = len / 2;
//    }
//    printf("������%lf ��ʮ�η���������%lf", sum, len);
//    return 0;
//}

// 5.12. ���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ���ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
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

// 5.13.�õ�������x = sqrt(a)����ƽ�����ĵ�����ʽΪ X(n+1) = 1/2 * (X(n) + a/X(n))
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


//5.14 ��ţ�ٵ����������淽���� 1.5 �����ĸ���
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
//    double x = 1.5;       //��x�����ĸ�
//    for (i = 0; i < 1000; ++i)
//    {
//        x = x - (f(x) / dx(x));       //�ؼ���ʽ
//    }
//    printf("%lf ",x);
//    return 0;
//}



// 5.16 ��ӡ����������
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