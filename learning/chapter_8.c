

//CHAPTER EIGHT
// 2. ���������ַ���,����С�����˳����
//  #include <stdio.h>
//  #include <string.h>
//  void change(char *p, char *q)   //�����ַ���ֵ
//  {
//      char t[50];
//      strcpy(t,p);
//      strcpy(p,q);
//      strcpy(q,t);
//  }
//  int main()
//  {
//      char a[50],b[50],c[50];
//      printf("���������ַ���\n");
//      gets(a);
//      gets(b);
//      gets(c);

//     if(strcmp(a,b) > 0) change(a,b);        //ͨ���ж�,������λ��
//     if(strcmp(a,c) > 0) change(a,c);
//     if(strcmp(b,c) > 0) change(b,c);

//     puts(a);
//     puts(b);
//     puts(c);

//     return 0;
// }

// 3.������������,��������С�������һ�������жԻ�,�������������һ�����һ�.
//   д��������1.����10���� 2.���д��� 3.���10����

// #include <stdio.h>
// #define N 10
// void in(int *a)
// {
//     int i;
//     printf("����������10����");
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

// 4.��n������,��ǰ��ĸ���˳�������m��λ��,���m�������ǰm����
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
//      printf("�����������С\n");
//      scanf("%d",&n);
//      int a[n];
//      printf("����������Ԫ��\n");
//      for(i = 0; i<n; i++)
//      {
//          scanf("%d",a+i);
//      }
//      for(i = 0; i<n; i++)
//      {
//          printf("%2d",*(a+i));
//      }
//      printf("�������ƶ����ٸ�λ��\n");
//      scanf("%d",&m);

//     fun(a,n,m);

//     for(i = 0; i < n; i++)
//     {
//         printf("%2d",*(a+i));
//     }

//     return 0;
// }

//  5.��n����Χ��һȦ,˳���źŴӵ�һ���˿�ʼ�����������������˳�Ȧ��,��������µ�ʱԭ���ڼ�����λ;
// #include <stdio.h>
// int main()
// {
//     int i,m,n,a[50],*p,k;
//     printf("�������������:");
//     scanf("%d",&n);
//     p = a;
//     for(i = 0; i< n; i++)
//     {
//         *(p+i) = i+1;
//     }

//     i = 0;
//     m = 0;
//     k = 0;

//     while(m < n-1)  //�����˵�ֻʣһ��ʱ����ѭ��
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

//     printf("���µ�Ϊԭ����%d����",*(p + i));

//     return 0;
// }

// 6. дһ����,��һ���ַ����ĳ���,��main����������
//  #include <stdio.h>
//  int my_len(char *p)
//  {
//      int i = 0;
//      while(*(p+i) != '\0')i++;
//      return i;     //�������±�Ϊ0,���ü�1;
//  }
//  int main()
//  {
//      char str[50];
//      gets(str);
//      printf("%d",my_len(str));
//      return 0;
//  }

// 7.��һ�ַ���,����n���ַ�,Э�麯��,�����ַ����е�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊ��һ���ַ���
//  #include <stdio.h>
//  void my_cpym(char *str, char *target,int m)
//  {
//      int i = 0;
//      int n = m - 1;
//      while(*(target + n) != '\0')
//      {
//          *(str + i) = *(target + n); //�����Ǵ��±�0��ʼ��
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
//     printf("�����ַ���:");
//     gets(t);
//     printf("����ӵڼ����ַ���ʼ����:");
//     scanf("%d",&i);

//     my_cpym(s,t,i);

//     puts(t);
//     puts(s);
//     return 0;
// }

// 8.����һ������,�ҳ����д�д��ĸ,Сд��ĸ,�ո�,�����Լ������ַ����ж���.
//  #include <stdio.h>
//  int main()
//  {
//      int i,d,x,s,n,o;
//      char a[50],*p;
//      printf("�������ַ���:");
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

//     printf("��%d����д�ַ�\n",d);
//     printf("��%d��Сд�ַ�\n",x);
//     printf("��%d������\n",n);
//     printf("��%d���ո�\n",s);
//     printf("��%d�������ַ�\n",o);

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