//
// Created by zhanxiaosong on 2024/1/4.
//
//1.�� 1��2��3��4 �ĸ����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ���
//#include <stdio.h>
//void f(){
//    int a, b, c, n; //��,ʮ,��,����
//
//    for (a = 1,n = 0; a <=4; ++a)   //��λ
//    {
//        for (b = 1; b <=4; ++b)     //ʮλ
//        {
//            for (c = 1; c <=4; ++c) //��λ
//            {
//                n++;
//                printf("%4d", a * 100 + b * 10 + c);        //�����ɵ���
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//    printf("һ����%d��", n);
//}
//
//int main()
//{
//    f();
//    return 0;
//}

//2.��ҵ���ŵĽ������������ɡ�
//����(I)���ڻ����10��Ԫʱ���������10%��
//�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
//20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
//40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
//60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
//����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�
//�Ӽ������뵱������I����Ӧ���Ž���������

//#include <stdio.h>
//int main()
//{
//    double I,r1,r2,r4,r6,r10,bonus;
//    printf("����������(I):");
//    scanf("%lf", &I);
//    r1 = 100000 * 0.1;
//    r2 = r1 + (200000 - 100000) * 0.075;
//    r4 = r2 + (400000 - 200000) * 0.05;
//    r6 = r4 + (600000 - 400000) * 0.03;
//    r10 = r6 + (1000000 - 600000) * 0.015;
//
//    if (I < 100000)
//    {
//        bonus = I * 0.1;
//    } else if (I < 200000)
//    {
//        bonus = r1 + (I - 100000) * 0.075;
//    } else if (I < 400000)
//    {
//        bonus = r2 + (I - 200000) * 0.05;
//    } else if (I < 600000)
//    {
//        bonus = r4 + (I - 400000) * 0.03;
//    } else if (I < 1000000)
//    {
//        bonus = r6 + (I - 600000) * 0.015;
//    }else{
//        bonus = r10 + (I - 1000000) * 0.01;
//    }
//
//    printf("����Ϊ%lf", bonus);
//}



//3.һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    //TODO
//}

//4.����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//#include <stdio.h>
//int is_leap(int year)
//{
//    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//    {
//        return 1;
//    }
//    return 0;
//}
//void date(int year, int month, int day)
//{
//    int i,days;
//    int per_month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//    for (i = 0,days = 0; i < month - 1; ++i)     //������month��
//    {
//        days += per_month[i];
//    }
//
//    days += day;    //����month������
//    if(is_leap(year)) //�������� �������һ��
//    {
//        days = days - 1;
//    }
//
//    printf("%d", days);
//}
//int main()
//{
//    int year,month,day;
//    printf("���������:");
//    scanf("%d %d %d", &year, &month, &day);
//    date(year, month, day);
//
//    return 0;
//}


//5.������������x,y,z���������������С���������
//#include <stdio.h>
//void swap(int *a,int *b)
//{
//    int t;
//    t = *a;
//    *a = *b;
//    *b = t;
//}
//int main()
//{
//    int x,y,z;
//    scanf("%d %d %d", &x, &y, &z);
//    if (x > y)
//    {
//        swap(&x, &y);
//    }
//    if (x > z)
//    {
//        swap(&x, &z);
//    }
//    if (y > z)
//    {
//        swap(&y, &z);
//    }
//    printf("%d %d %d", x, y, z);
//
//    return 0;
//}



//6.��*�������ĸC��ͼ����
//#include <stdio.h>
//int main()
//{
//    puts("  * * *");
//    puts(" *     ");
//    puts(" *     ");
//    puts(" *     ");
//    puts("  * * *");
//    return 0;
//}

//7.�������ͼ��������c���������У���һ����Very Beautiful!
//��

//8.���9*9�˷��ھ�
//#include <stdio.h>
//int main()
//{
//    int i,j;
//    for (i = 1; i <= 9; ++i)
//    {
//        for (j = 1; j <= i; ++j)
//        {
//            printf("%d*%d=%-4d", j, i, i * j);
//        }
//
//        printf("\n");
//    }
//    return 0;
//}

//9.Ҫ����������������̡�
//��

//10.��ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц����
//��

//11.�ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
// С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�
//쳲��������еı��� 1 1 2 3 5 8 13
//#include <stdio.h>
//int main()
//{
//    long double  a[41];
//    int i;
//    a[1] = a[2] = 2;
//    printf("��1��:%Lf\n",  a[1]);
//    printf("��2��:%Lf\n",  a[2]);
//
//    for (i = 3; i <=40; ++i)
//    {
//        a[i] = a[i - 1] + a[i - 2];
//        printf("��%d��:%.Lf\n", i, a[i]);
//    }
//    return 0
//}


//12.�ж� 101 �� 200 ֮���������
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//    int i;
//    for (int j = 2; j <= sqrt(n); ++j)
//    {
//        if (n % j == 0)
//        {
//            return 0;
//        }
//    }
//
//    return 1;
//}
//int main()
//{
//    int i;
//    for (i = 100; i < 200; ++i)
//    {
//        if (is_prime(i))
//        {
//            printf("%4d", i);
//        }
//    }
//    return 0;
//}


//13.��ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� ����
// ���磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���
//#include <stdio.h>
//int main()
//{
//    int i, a, b, c;
//    for (i = 100; i < 1000; ++i)
//    {
//        a = i %10;
//        b = i/10%10;
//        c = i / 100 % 10;
//        if (a * a * a + b * b * b + c * c * c == i)
//        {
//            printf("%4d", i);
//        }
//    }
//    return 0;
//}

//14.��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��

//#include <stdio.h>
//int main()
//{
//    int num,i;
//    scanf("%d", &num);
//    printf("%d=", num);
//    for (int i = 2; i <= num; ++i)
//    {
//        while (num % i == 0 && num != i)
//        {
//            printf("%d*", i);
//            num = num / i;
//        }
//        if (i == num)
//        {
//            printf("%d", i);
//            break;
//        }
//    }
//    return 0;
//}



//15.���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��

// #include<stdio.h>
// int main() {
//    int score;
//    char grade;
//
//     scanf("%d", &score);
//     if (score >= 90)
//     {
//         grade = 'A';
//     } else if (score >= 60 && score <= 89)
//     {
//         grade = 'B';
//     } else if (score < 60)
//     {
//         grade = 'C';
//     }
//     printf("�ȼ�Ϊ%c", grade);
//
//     return 0;
// }

//16.��������������m��n���������Լ������С��������
//#include <stdio.h>
//int gcd(int a, int b) {
//    int temp; // �����ݴ�b��ֵ
//
//    // ��b��Ϊ0ʱ��ѭ��ִ�����²���
//    while (b != 0) {
//        temp = b;   // �ݴ�b
//        b = a % b;  // ��a����b����������b
//        a = temp;   // ����ǰ��b����a
//    }
//
//    // ��bΪ0ʱ���˳�ѭ������ʱa��Ϊ���Լ��
//    return a;
//}
//int gcd(int a,int b)
//{
//    while (a != b)
//    {
//        if (a > b)
//        {
//            a -= b;
//        }
//        if (b > a)
//        {
//            b -= a;
//        }
//    }
//
//    return a;
//}
//int main()
//{
//    int a,b;
//    scanf("%d %d", &a, &b);
//    printf("%d",gcd(a, b));
//}

//17.����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
//#include<stdio.h>
//int main() {
//    int letter=0,space=0,num=0,others = 0;
//    int c;
//
//    while ((c = getchar()) != '\n')
//    {
//        if(c == ' ') {
//            space++;
//        }else if(c>='1' &&c <='9') {
//            num++;
//        }else if((c>='a' &&c<='z')||(c>='A'&&c<='Z')) {
//            letter++;
//        }else {
//            others++;
//        }
//    }
//    printf("space:%d\n", space);
//    printf("letter:%d\n", letter);
//    printf("num:%d\n", num);
//    printf("others:%d\n", others);
//    return 0;
//}


//18.��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�
//#include <stdio.h>
//int main()
//{
//    int a, n, t, i, num;
//    printf("������a:");
//    scanf("%d", &a);
//    printf("������n:");
//    scanf("%d", &n);
//    t = a;
//    for (i = 0, num = 0; i < n; ++i)
//    {
//        num += t;
//        t = t * 10 + a;
//    }
//
//}

//19.һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.����ҳ�1000���ڵ�����������
//#include <stdio.h>
//int sum_of_factors(int n)
//{
//    int sum,i;
//    for (i = 1,sum = 0; i < n; ++i)
//    {
//        if (n % i == 0)
//        {
//            sum +=i;
//        }
//    }
//    return sum;
//}
//int main()
//{
//    int i;
//    for (i = 1; i < 1000; ++i)
//    {
//        if (sum_of_factors(i) == i)
//        {
//            printf("%4d", i);
//        }
//    }
//    return 0;
//}



//20.һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
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

//21.���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ���ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
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


//22.����ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ��ѳ�ǩ���������������������Ա����������������
// a˵������x�ȣ�c˵������x,z�ȣ��������ҳ��������ֵ�������
//#include <stdio.h>
//int main()
//{
//    int a,b,c;
//    for (a = 'x'; a <= 'z'; ++a)
//    {
//        if(a == 'x') continue;
//        for (b = 'x'; b <= 'z'; ++b)
//        {
//            for (c = 'x'; c <= 'z'; ++c)
//            {
//                if (c == 'x' || c == 'z')continue;
//                if(a != b && a != c && b != c ){
//                    printf("a vs %c\nb vs %c\nc vs %c", a, b, c);
//                }
//            }
//        }
//    }
//    return 0;
//}




//23.��ӡ����������
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
    //
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


//24.��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�

//#include <stdio.h>
//int main()
//{
//    double x, y, t, sum;        //�������ӣ���ĸ�������������
//    int i;          //�����±�
//
//    x = 2.0, y = 1.0, sum = 0.0; //��ʼ��
//
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
//
//    printf("%lf", sum);   //�����
//    return 0;
//}

//25.��1+2!+3!+...+20!�ĺ͡�

//#include <stdio.h>
//unsigned long long  f(unsigned long long n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    return n * f(n - 1);
//}
//int main()
//{
//    unsigned long long  i, sum;
//
//    sum = 0;
//    for (i = 1; i <= 20 ; ++i)
//    {
//        sum += f(i);
//    }
//    printf("%llu", sum);
//
//    return 0;
//}


//26.���õݹ鷽����5!��
//#include <stdio.h>
//int f(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    return n * f(n - 1);
//}
//int main()
//{
//    printf("%d", f(5));
//    return 0;
//}



//27.���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������

//#include<stdio.h>
//void f(char *str,int i){
//    if (str[i] != '\0')
//    {
//        f(str, i + 1);
//        printf("%c", str[i]);
//    }
//
//}
//
//int main()
//{
//    char str[6];
//
//    gets(str);
//    f(str,0);
//
//    return 0;
//}

//28.��5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�3���˴�2�ꡣ
// �ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
//#include <stdio.h
//int age(int n){
//    int c;
//    if(n == 1){
//        c = 10;
//    }else{
//        c = age(n - 1) + 2;
//    }
//    return c;
//}
//
//int main()
//{
//    printf("%d", age(5));
//    return 0;
//}


//29.��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int num, n, i,t;
//    scanf("%d", &num);
//    n = (int) log10(num) + 1;
//    printf("%d ��һ��%dλ��\n", num, n);
//    printf("����Ϊ:");
//    for (int j = 0; j < n; ++j)
//    {
//        printf("%d", num % 10);
//        num /= 10;
//    }
//    return 0;
//}

//30.һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��
//#include <stdio.h>
//int main()
//{
//    int num,i,t,n;
//    scanf("%d", &num);
//
//    if (num / 10000 == num % 10 && num % 10000 / 1000 == num / 10 % 10)
//    {
//        printf("%d�ǻ�����", num);
//    }else {
//        printf("%d���ǻ�����", num);
//    }
//    return 0;
//}



//31.���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��
//Sunday Saturday Friday Thursday Wednesday Tuesday Monday
//#include <stdio.h>
//
//int main() {
//    char day;
//
//    printf("���������ڼ�������ĸ��");
//    scanf(" %c", &day);
//
//    switch (day) {
//        case 'M':
//            printf("����һ\n");
//            break;
//        case 'T':
//            printf("���������ڼ��ĵڶ�����ĸ��");
//            scanf(" %c", &day);
//            if (day == 'u') {
//                printf("���ڶ�\n");
//            } else if (day == 'h') {
//                printf("������\n");
//            } else {
//                printf("�������\n");
//            }
//            break;
//        case 'W':
//            printf("������\n");
//            break;
//        case 'F':
//            printf("������\n");
//            break;
//        case 'S':
//            printf("���������ڼ��ĵڶ�����ĸ��");
//            scanf(" %c", &day);
//            if (day == 'a') {
//                printf("������\n");
//            } else if (day == 'u') {
//                printf("������\n");
//            } else {
//                printf("�������\n");
//            }
//            break;
//        default:
//            printf("�������\n");
//    }
//
//    return 0;
//}


//32.ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��

//#include <stdio.h>
//#include <string.h>
//void delete(char *s, char a)
//{
//    int i;
//    for (i = 0; s[i] != '\0'; ++i)
//    {
//        if (s[i] == a)
//        {
//            strcpy(s + i, s + i + 1);
//        }
//    }
//}
//int main()
//{
//    char s[40],a;
//    gets(s);
//    scanf("%c", &a);
//    delete(s, a);
//    puts(s);
//
//    return 0;
//}


//33.�ж�һ�������Ƿ�Ϊ����(����)��
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n)
//{
//    int i;
//    if(n == 1){
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
//    int n;
//    scanf("%d", &n);
//    if (is_prime(n))
//    {
//        printf("%d������", n);
//    }else
//    {
//        printf("%d��������", n);
//    }
//    return 0;
//}

//34.��ϰ�������á�
//��

//35.�ַ�����ת���罫�ַ��� "www.runoob.com" ��תΪ "moc.boonur.www"��
//#include <stdio.h>
//#include <string.h>
//void converse(char *str)
//{
//    int i,j,len;
//    char t;
//    len = strlen(str);
//    for (i = 0; i < len-i-1; ++i)
//    {
//        t = str[i];
//        str[i] = str[len - i - 1];
//        str[len - i - 1] = t;
//    }
//}
//int main()
//{
//    char str[] = "www.runoob.com";
//    converse(str);
//    puts(str);
//
//    return 0;
//}

//36.��100֮�ڵ�������
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n)
//{
//    int i;
//    for (i = 2; i <= sqrt(n); ++i)
//    {
//        if (n % i == 0)
//        {
//            return 0;  //��Ϊ����
//        }
//    }
//
//    return 1;//Ϊ����
//}
//int main()
//{
//    int i;
//    for (i = 2; i <= 100 ; ++i)
//    {
//        if (is_prime(i))
//        {
//            printf("%3d", i);
//        }
//    }
//    return 0;
//}

//37.��10������������
//#include <stdio.h>
//void select_sort(int a[],int n)
//{
//    int i,j,key,t;
//    for (i = 0; i < n-1; ++i)     //���������һ�����ǣ��������Ѿ���������С����
//    {
//        key = i;
//        for (j = i + 1; j < n; ++j)       //ÿ�ζ���Ҫ�����һ����ȥ�Ƚ�
//        {
//            if (a[j] <   a[key])
//            {
//                key = j;
//            }
//        }
//        t = a[key];
//        a[key] = a[i];
//        a[i] = t;
//    }
//}
//int main()
//{
//    int a[] = {9,7,5,3,1,2,4,6,8,0};
//    int len = 10,i;
//    select_sort(a, len);
//    for (i = 0; i < 10; ++i)
//    {
//        printf("%d", a[i]);
//    }
//    return 0;
//}


//38.��һ��3*3����Խ���Ԫ��֮��
//#include <stdio.h>
//int main()
//{
//    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    int i,sum;
//    for (i = 0, sum = 0; i < 3; ++i)
//    {
//        sum = a[i][i];
//    }
//    printf("%d", sum);
//
//    return 0;
//}

//39.��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
//#include <stdio.h>
//
//int main()
//{
//    int a[5] = {1, 4, 6, 8};
//    int n, num, i;
//    n = 4;
//    scanf("%d", &num);
//
//    for (i = n - 1; i >= 0; --i)
//    {
//        if (num > a[i])
//        {
//            a[i + 1] = num;
//            break;
//        }
//        a[i + 1] = a[i];
//    }
//    n++;
//
//
//    for (i = 0; i < n; ++i)
//    {
//        printf("%d", a[i]);
//    }
//    return 0;
//}


//40.��һ���������������
//#include <stdio.h>
//int main()
//{
//    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int len, i;
//    len = sizeof(nums) / sizeof(int);
//    for (i = len-1; i >=0 ; --i)
//    {
//        printf("%2d", nums[i]);
//    }
//    return 0;
//}


/**
//41.ѧϰ���徲̬�����ķ���
//��
//42.ѧϰʹ��auto����������÷���
//��
//43.ѧϰʹ��static����һ�÷���
// ��
//44.ѧϰʹ����ε����ⲿ������
// ��
//45.ѧϰʹ��register��������ķ�����
// ��
//46.��#define������ϰ��
// ��
//47.��#define������ϰ2��
// ��
//48.��#define������ϰ3��
// ��
//49.#if #ifdef��#ifndef���ۺ�Ӧ�á�
// ��
//50.#include ��Ӧ����ϰ��
// ��
//51.ѧϰʹ�ð�λ�� &��
// ��
//52.ѧϰʹ�ð�λ��� ^��
// ��
//53.ȡһ������ a ���Ҷ˿�ʼ�� 4��7 λ��
// ��
//54.ѧϰʹ�ð�λȡ��~��
// ��
//55.��ͼ��ѧ��circle��Բ�Ρ�
// ��
//57.��ͼ��ѧ��line��ֱ�ߣ���TC��ʵ�֣���
// ��
//58.ѧ��rectangle�����Ρ�����TC��ʵ�֣���
// ��
//59.��ͼ���ۺ����ӡ�����TC��ʵ�֣���
// ��
//60.��ͼ���ۺ�����2������TC��ʵ�֣���
// ��
*/

//61.���������
//#include <stdio.h>
//int main()
//{
//    int a[10][10];
//    int i,j,k;
//    for (i = 0; i < 10; ++i)
//    {
//        a[i][0] = 1;
//        a[i][i] = 1;
//        for (j = 1; j < i; ++j)
//        {
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//        }
//    }
//
//    for (i = 0; i < 10; ++i)
//    {
////        printf("*");
//        for (k = 10; k >= i; k--)
//        {
//            printf("   ");
//        }
//        for (j = 0; j <= i; ++j)
//        {
//
//
//            printf("%-6d", a[i][j]);
//        }
////        for (k = 10; k >= i; k--)
////        {
////            printf("   ");
////        }
////        printf("*");
//        printf("\n");
//    }
//    printf("\n");
//}

/**
//62.ѧϰputpixel���㣬����TC��ʵ�֣���
// ��
//63.����Բellipse����TC��ʵ�֣���
// ��
//64.����ellipse and rectangle ��ͼ����TC��ʵ�֣���
// ��
//65.һ����������ͼ������TC��ʵ�֣���
// ��
*/


//66.����3����a,b,c������С˳����� (����ָ�뷽����)
//#include <stdio.h>
//void swap(int *m,int *n)
//{
//    int t;
//    t = *m;
//    *m = *n;
//    *n = t;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a > b)
//    {
//        swap(&a, &b);
//    }
//    if (a > c)
//    {
//        swap(&a, &c);
//    }
//    if (b > c)
//    {
//        swap(&b, &c);
//    }
//
//    printf("%d %d %d", a, b, c);
//    return 0;
//}



//67.�������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int nums[20] = {0};
//    int n;
//    printf("�����������С n<20:");
//    scanf("%d", &n);
//    printf("����������������enter����������");
//    for (int i = 0; i < n; ++i)
//    {
//        scanf("%d",&nums[i]);
//    }
//    int max = INT_MIN;
//    int min = INT_MAX;
//    int max_n = 0;
//    int min_n = 0;
//    for (int i = 0; i < n; ++i)
//    {
//        if (nums[i] > max)
//        {
//            max = nums[i];
//            max_n = i;
//        }
//        if (nums[i] < min)
//        {
//            min = nums[i];
//            min_n = i;
//        }
//    }
//    nums[max_n] = nums[0];
//    nums[0] = max;
//
//    nums[min_n] = nums[n-1];
//    nums[n-1] = min;
//
//    for (int i = 0; i < n; ++i)
//    {
//        printf("%d", nums[i]);
//    }
//    return 0;
//}


//68�� n ��������ʹ��ǰ�����˳������� m ��λ�ã����m���������ǰ��� m ������
//69.��n����Χ��һȦ��˳���źš�
// �ӵ�һ���˿�ʼ��������1��3��������
// ������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��

//70.дһ����������һ���ַ����ĳ��ȣ��� main �����������ַ�����������䳤�ȡ�
//#include <stdio.h>
//int my_str_len(char *a)
//{
//    int i = 0;
//    while (*a++ != '\0')
//    {
//        i++;
//    }
//    return i;
//}
//int main()
//{
//    char str[10];
//    gets(str);
//    printf("%d", my_str_len(str));
//    return 0;
//}

//71.��дinput()��output()�������룬���5��ѧ�������ݼ�¼��
//#include <stdio.h>
//
//typedef struct Student
//{
//    long id;
//    char name[20];
//}Stu;
//
//void input(Stu * stu)
//{
//    for (int i = 0; i < 5; ++i)
//    {
//        scanf("%ld", &stu[i].id);
//        scanf("%s", stu[i].name);
//    }
//}
//
//void output(Stu *stu)
//{
//    for (int i = 0; i < 5; ++i)
//    {
//        printf("%ld,%s\n", stu[i].id, stu[i].name);
//    }
//}
//int main()
//{
//    Stu stu[5];
//    input(stu);
//    output(stu);
//    return 0;
//}

//72.����һ������
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct LinkList{
//    int val;
//    struct LinkList *next;
//
//}LinkList;
//
//LinkList * create()
//{
//
//}
//int main()
//{
//
//}

//73.�������һ������
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct LinkList
//{
//    int val;
//    struct LinkList *next;
//}*List;
//
//List create()
//{
//    List head = (List) malloc(sizeof(List));
//
//    head->val = 0;
//    head->next = NULL;
//
//    return head;
//}
//void converse(List list)
//{
//    if (list->next != NULL)
//    {
//
//        converse(list->next);
//    }
//    printf("%d ", list->val);
//}
//int main()
//{
//    List head = create();
//    int i,n;
//    printf("������Ҫ������������:");
//    scanf("%d", &n);
//    List p1,p2;
//
//    p1 = (List) malloc(sizeof(List));
//    scanf("%d", &p1->val);
//    p1->next =NULL;
//    head->next = p1;
//    p2 = p1;
//
//
//    for (i = 0; i < n-1; ++i)
//    {
//        p1 = (List) malloc(sizeof(List));
//        scanf("%d", &p1->val);
//        p1->next = NULL;
//
//        p2->next = p1;
//        p2 = p1;
//    }
//
//    converse(head->next);
//    return 0;
//}


//74.������������
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node     //��struct Node* ����� ΪNode
//{
//    int data;
//    struct Node *next;
//}*Node;
//
//Node init()
//{
//    Node head = (Node) malloc(sizeof(Node));
//    head->data = 0;
//    head->next = NULL;
//    Node p1,p2;
//    p1 = (Node) malloc(sizeof(Node));
//    scanf("%d", &p1->data);
//    p1->next = NULL;
//
//    head->next = p1;
//    p2 = p1;
//
//
//    for (int i = 0; i < 4; ++i)
//    {
//        p1 = (Node) malloc(sizeof(Node));
//        scanf("%d", &p1->data);
//        p1->next = NULL;
//
//        p2->next = p1;
//        p2 = p1;
//    }
//
//    return head;
//}
//void link(Node link1,Node link2)
//{
//    while (link1->next != NULL)
//    {
//        link1 = link1->next;
//    }
//    link1->next = link2->next;
//}
//void putLink(Node link)
//{
//    while (link->next != NULL)
//    {
//        link = link->next;
//        printf("%d ", link->data);
//    }
//}
//int main()
//{
//    puts("��ʼ������1�����������ֵ");
//    Node head1 = init();
//    puts("��ʼ������2�����������ֵ");
//    Node head2 = init();
//    puts("������.....");
//    link(head1, head2);
//
//    puts("�������1");
//    putLink(head1);
//    return 0;
//}


//75.����һ�������������䷴ת�������
#include <stdio.h>
int main()
{
    int num,n;
    scanf("%d", &num);
    n = 0;
    while (num != 0)
    {
        n = n * 10 + num % 10;
        num /= 10;
    }
    printf("%d", n);
    return 0;
}
//76.��дһ������������nΪż��ʱ�����ú�����1/2+1/4+...+1/n,������nΪ����ʱ�����ú���1/1+1/3+...+1/n(����ָ�뺯��)��




//77.�����ϰ��ָ��ָ���ָ�룩��
//��
//78.�ҵ����������ˣ�����������ҳ���������ʲô���⡣
//��


//79.�ַ�������



//80.��̲����һ�����ӣ���ֻ�������֡���һֻ���Ӱ��������ƽ����Ϊ��ݣ�����һ������ֻ ���ӰѶ��һ�����뺣�У�������һ�ݡ�
// �ڶ�ֻ���Ӱ�ʣ�µ�������ƽ���ֳ���ݣ��ֶ���һ������ͬ���Ѷ��һ�����뺣�У�
// ������һ�ݣ����������ġ�����ֻ���Ӷ����������ģ� �ʺ�̲��ԭ�������ж��ٸ����ӣ�
//TODO �������˺ܳ�ʱ�䣬�Լ�ע����
//#include <stdio.h>
//int main()
//{
//    int n = 1; //�����ֻ���ӷֵ����ÿ����n��
//    int x = 0,i=0; //�����洢��������
//    while(i < 5){
//        x = 4*n; //����֮��������һ�ݺ�ʣ��������
//
//        for (i = 0; i < 5; ++i)
//        {
//            if(x%4 != 0){break;}    //��һ���������Ƿ��ܱ������������������� ��һֻ֮���Ӳ��ֳܷ����
//            x = (x/4)*5 + 1;        //�������������ڷ���������һֱ���ӻ�û��ʱ����������
//        }
//        n++;
//    }
//    printf("%d",x);
//    return 0;
//}

//81.809 * ?? == 800 * ?? + 9 * ??    ����??�������λ��,809*??Ϊ��λ����8*??�Ľ��Ϊ��λ����9*??�Ľ��Ϊ3λ����
// ��??�������λ������809*??��Ľ����
//#include <stdio.h>
//int main()
//{
//
//
//    for (int x = 10; x <= 99; ++x)
//    {
//        int a = x*809;
//        int b = x*8;
//        int c = x*9;
//
//        if(a>999 && a<10000  && b<100 && c > 99   ){
//            printf("%d\n",x);
//            printf("%d", a);
//        }
//    }
//    return 0;
//}

//82.�˽���ת��Ϊʮ����

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    char num[20];
//    int i=0, n=0;
//    gets(num);
//    while(num[i] != '\0')
//    {
//        n = n*8 + num[i] - '0';       //������Ի�ȡ�ַ�������   Ҫ��ס
//        i++;
//    }
//    printf("%d", n);
//    return 0;
//
//}


//83.��0��7������ɵ���������
//#include <stdio.h>
//int main()
//{
//    int x = 4,sum = 4;
//    for (int i = 2; i <= 8; ++i)
//    {
//        if(i<=2)
//        {
//            x *= 7;
//            printf("%dλ������������Ϊ%d\n", i, x);
//            sum +=x;
//        } else
//        {
//            x *= 8;
//            printf("%dλ������������Ϊ%d\n", i, x);
//            sum +=x;
//        }
//    }
//
//    printf("����������Ϊ��%d", sum);
//}

//84.һ��ż�����ܱ�ʾΪ��������֮�͡�
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//    int i;
//    if (n == 1)
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
//    int i,n;
//    scanf("%d", &n);
//    for (i = 2; i <= n/2; ++i)
//    {
//        if (is_prime(i) && is_prime(n-i))
//        {
//            printf("%d %d", i, n - i);
//            break;
//        }
//    }
//    return 0;
//}


//85.�ж�һ�������ܱ�����9������
//#include <stdio.h>
//#include <limits.h>
//int main()
//{
//    int i;  //����
//    scanf("%d", &i);
//    long long n = 9;
//    while (n % i != 0)
//    {
//        n = n * 10 + 9;
//    }
//
//    if(n > LONG_MAX)
//    {
//        printf("����������");
//    } else
//    {    printf("%lld", n);
//    }
//
//
//    return 0;
//}



//86.�����ַ������ӳ��� ��
//#include<stdio.h>
//#include<string.h>
//void my_cat(char *a, char *b)
//{
//    strcpy(a + strlen(a), b);
//}
//int main()
//{
//    char str1[50];
//    char str2[50];
//    gets(str1);
//    gets(str2);
//
//    my_cat(str1, str2);
//    puts(str1);
//    return 0;
//}



//87.�ṹ���������
//��


//88.��ȡ7������1��50��������ֵ��ÿ��ȡһ��ֵ�������ӡ����ֵ������ *��
//#include <stdio.h>
//int main()
//{
//    int i, j, n;
//    for (i = 0; i < 7; ++i)
//    {
//        scanf("%d", &n);
//        while (n < 1 || n > 50)
//        {
//            scanf("%d", &n);
//        }
//        for (j = 0; j < n; ++j)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//89.ĳ����˾���ù��õ绰�������ݣ���������λ���������ڴ��ݹ������Ǽ��ܵģ����ܹ������£�
// ÿλ���ֶ�����5,Ȼ���úͳ���10��������������֣��ٽ���һλ�͵���λ�������ڶ�λ�͵���λ������
//#include <stdio.h>
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    int a,b,c,d,t;
//    a = num % 10;
//
//    b = num / 10 % 10;
//
//    c = num / 100 % 10;
//
//    d = num / 1000;
//
//    t = a, a = d, d = t;
//    t = b, b = c, c = t;
//    a = a + 10 - 5;
//    b = b + 10 - 5;
//    c = c + 10 - 5;
//    d = d + 10 - 5;
//
//    num = a + c * 100 + b * 10 + d * 1000;
//    printf("%d", num);
//
//    return 0;
//}

/**
//90.ר����һ�⣬�����
// ��
//91.ʱ�亯������1
// ��
//92.ʱ�亯������2
// ��
//93.ʱ�亯������3
// ��
//94.������Ϸ��
// ��
//95.�򵥵Ľṹ��Ӧ��ʵ����
// ��
*/



//96.�����ַ������Ӵ����ֵĴ��� ��
//#include <stdio.h>
//int main()
//{
//    int i,j,n;
//    char str[50], a[20];
//    gets(str);
//    gets(a);
//
//    for (i = 0, n = 0; str[i] != '\0'; ++i)
//    {
//
//        if (str[i] == a[0])
//        {
//            for (j = 0;  a[j] != '\0'; ++j)
//            {
//                if (str[i + j] != a[j])
//                {
//                    break;
//                }
//            }
//            if (a[j] == '\0')
//            {
//                n++;
//            }
//
//        }
//    }
//    printf("%d", n);
//    return 0;
//}




/**
//97.�Ӽ�������һЩ�ַ�������������͵�������ȥ��ֱ������һ��#Ϊֹ��
// ��
//98.�Ӽ�������һ���ַ�������Сд��ĸȫ��ת���ɴ�д��ĸ��Ȼ�������һ�������ļ�"test"�б��档 ������ַ����ԣ�������
// ��
//99.�����������ļ�A��B,�����һ����ĸ��Ҫ����������ļ��е���Ϣ�ϲ�������ĸ˳�����У��������һ�����ļ�C�С�
// ��
//100.�����ѧ����ÿ��ѧ����3�ſεĳɼ����Ӽ��������������ݣ�����ѧ���ţ����������ſγɼ�����
// �����ƽ���ɼ�����ԭ�е����ݺͼ������ƽ����������ڴ����ļ�"stud"�С�
// ��
*/