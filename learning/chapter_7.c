//CHAPTER SEVEN

// 7.1 д�����������ֱ������Լ������С������
//#include <stdio.h>
//int gcd(int m, int n)   //����ʵ��
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
////int gcd(int m,int n) //�ݹ�ʵ��
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
//    printf("����m,n(m>n):");
//    scanf("%d %d", &m, &n);     //����m n
//    if (n > m)      //ʹ��շת���Ҫ��m>n
//    {
//        t = n, n = m, m = t;
//    }
//    printf("���Լ��:%d\n", gcd(m, n));
//    printf("��С������:%d", lcm(m, n));
//
//    return 0;
//}



//7.2 �󷽳�a*pow(x,2)+b*x+c = 0�ĸ��������������ֱ���: pow(b,2)-4*a*c����0������0��С��0ʱ�ĸ�����������������������a,b,c��ֵ
//#include <stdio.h>
//#include <math.h>
//
//void two(double a, double b, double c)
//{
//    double m, n;
//    m = -b / (2 * a);
//    n = sqrt(b * b - 4 * a * c) / (2 * a);
//
//    printf("��������,�ֱ�Ϊ:\n");
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
//    printf("��������ͬ��,Ϊ:\n");
//    printf("%lf  ", m - n);
//}
//
//void zero()
//{
//    printf("�޽�");
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



// 7.3 ����һ�����ж��Ƿ�Ϊ����
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
//    printf("������һ������\n");
//    scanf("%d", &a);
//    if (isPrime(a))
//    {
//        printf("%dΪ����", a);
//    } else
//    {
//        printf("%d��Ϊ����", a);
//    }
//
//    return 0;
//}

// 4.дһ��������,ʹ������3��3�������л���
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


//7.5 дһ������,ʹ�����һ���ַ����������ŷ�,�������������������ַ���

//����:
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

//7.6 дһ������,�������ַ�������
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


//7.7 дһ������,��һ���ַ�������Ԫ����ĸ���Ƶ���һ�ַ���,Ȼ�����

//����:
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


//7.8 дһ������,����һ��4λ����,Ҫ�������4�������ַ�,�����������ּ��һ��ո�.��������1990��Ӧ�����1 9 9 0;
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

//7.9 ��дһ������,��ʵ�δ���һ���ַ���,ͳ�ƴ��ַ�������ĸ�����֡��ո�������ַ��ĸ���,���������������ַ����Ѿ������Ľ��

//����
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
//    printf("��ĸ����:%d", letter);
//    printf("���ָ���:%d", num);
//    printf("�ո����:%d", space);
//    printf("�����ַ�����:%d", other);
//    return 0;
//}


//7.10 дһ������,����һ���ַ�,�����ַ�������ĵ��������
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
//        i = j;  //�����õ��ʽ�β,���Ч��
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


//7.11 дһ������,��ð�ݷ��������10���ַ�������С�����˳������

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

//7.13  �õݹ鷽����n�����õ¶���ʽ��ֵ,�ݹ鹫ʽΪ
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

//7.14 ����10��ѧ��5�ſεĳɼ�,�ֱ��ú���ʵ�����¹���
//��ÿ��ѧ����ƽ����
//����ÿ�ſƵ�ƽ����
//�ҳ�����50����������ߵķ�������Ӧ��ѧ���Ϳγ�
//����ƽ���ַ���
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





//7.15 д��������:
//  1.����10��ְ����������ְ����
//  2.���չ�����С����˳������,����˳��Ҳ��֮����
//  3.Ҫ������һ��ְ����,���۰���ҷ��ҳ���ְ��������,������������Ҫ���ҵ�ְ����,�����ְ������
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



//7.16 дһ������,����һ��ʮ��������,�����Ӧ��ʮ������
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



//7.17 �õݹ鷨��һ������nת�����ַ��������磺����492, Ӧ����ַ���492��n��λ����ȷ��������������λ��������

//����:
//#include <stdio.h>
//#include <math.h>
//void transfer(char *s, int num,int n)
//{
//    //��ֹ����
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


//7.18 ������,��,��,�������ʱ����ĵڼ���
//#include <stdio.h>
//int isLeap(int year)  //�ж����꺯��
//{
//    if (year % 400 == 0 && (year % 100 != 0 && year % 4 == 0))
//    {
//        return 1; //�����귵��1 ���򻻻�0
//    }
//    return 0;
//}
//int date(int year, int month, int day)
//{
//    int per_month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};     //������ÿ�µ�����
//    int days,i;
//    for (i = days = 0; i < month-1; ++i) //�����������·ݵ���
//    {
//        days += per_month[i];     //�ۼ�ÿ������
//    }
//    days += day;    //�����·ݵ��µ�����
//    if (isLeap(year)) //��������
//    {
//        days -=1;       //2�·ݼ�ȥ��1��
//    }
//    return days;
//}
//
//int main()
//{
//    int year, month, day;
//
//    scanf("%d %d %d", &year, &month, &day);   //����������
//    int days = date(year, month, day);        //���ú���������Ǹ���ĵ�days��
//
//    printf("������%d��ĵ�%d��", year, days);
//    return 0;
//}


