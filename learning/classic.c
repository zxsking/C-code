//
// Created by zhanxiaosong on 2024/1/4.
//



// #include <stdio.h>

//8.���9*9�˷��ھ�
// int main()
// {
//     int i = 0;
//     int j = 0;
//
//     for (i = 1; i <=9 ; ++i)
//     {
//         for (j = 1; j <= i ; ++j)
//         {
//             printf(" %d*%d=%-2d ", j, i, j * i);
//         }
//         printf("\n");
//     }
//     return 0;
// }



//13.��ӡˮ�ɻ���

// #include<stdio.h>
// int main()
// {
//     int x, y, z; //�ֱ�Ϊ��λ��ʮλ����λ
//     for (int i = 100 ; i < 10000000; i++)
//     {
//         z = i / 100;
//         y = (i%100)/10;
//         x = i%10;
//         if((x*x*x + y*y*y + z*z*z) == i)
//             printf("%d\n", i);
//
//     }
//     return 0;
// }


//14.��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��

// #include <stdio.h>
// int main() {
//     int num = 0;
//     printf("�����һ��������");
//     scanf("%d", &num);
//     printf("%d=", num);
//
//     for (int i = 2; i <= num; ++i)
//     {
//         if(num == i)
//         {
//             printf("%d", num);
//             break;
//         }
//         while (num%i == 0)
//         {
//             num = num / i;
//             printf("%d*", i);
//         }
//     }
//     return 0;
// }

//15.���������������Ƕ������ɴ��⣺
//ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ

// #include<stdio.h>
// int main() {
//     int score;
//     char grade;
//
//     scanf("%d", &score);
//     grade = score >= 90 ? 'A' : (score >= 60 ? 'B' : 'C');
//     printf("%c", grade);
// }

//16.��������������m��n���������Լ������С��������
// //TODO �����뻨ʱ���о���֮ǰд��һ��������QAQ
// #include<stdio.h>
// int main() {
//     int m, n, temp, product, q;
//     scanf("%d %d", &m, &n);
//     product = m*n;
//     if(m < n) {
//         temp = m;
//         m = n;
//         n = temp;
//     }
//
//     q = m % n;
//
//     while (q != 0) {
//         if(q>n) {
//
//         }
//     }
// }


//17.����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
////TODO !!!!���صĴ��� ���ַ���������������ո�ʱ�ո�֮������ݻᱻ�ض� ��������Ҫʹ��getchar
// #include<stdio.h>
// #include<string.h>
// int main() {
//     int letter=0,space=0,num=0,others = 0;
//     char str[50];
//     scanf("%s", str);
//     for (int i = 0; i < strlen(str); ++i) {
//         if(str[i] == ' ') {
//             space++;
//         }else if(str[i]>='1' &&str[i] <='9') {
//             num++;
//         }else if((str[i]>='a' &&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) {
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


//18.��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�

// #include<stdio.h>
// int main() {
//     int a,n,sum=0;
//     scanf("%d %d", &a, &n);
//     while (n > 0) {
//         sum += a;
//         a = a*10 + a;
//
//         n--;
//     }
//     printf("%d", sum);
//
//     return 0;
// }


//19.һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.����ҳ�1000���ڵ�����������
////TODO д�ķǳ�����ص㸴ϰ �� 14��
// #include<stdio.h>
// #define N 1000
//
//int main()
//{
//
//    int i, sum, j, n, k;
//    int nums[1000];
//    for (i = 2; i <= N; i++)
//    {
//        sum = nums[0] = 1;
//        k = 0;
//        for (j = 2; j <= (i / 2); ++j)
//        {
//            if (i % j == 0 && i != j)
//            {
//                nums[++k] = j;
//                sum += j;
//            }
//        }
//        if (sum == i)
//        {
//            printf("%d=%d", i, nums[0]);
//            for (n = 1; n <= k; ++n)
//            {
//                printf("+%d", nums[n]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//20.һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
//#include <stdio.h>
////TODO ע��ֻ�е�1�����ʱ��ֻ���� ʣ�¾Ŵζ����ȵ���������
//int main()
//{
//    double len = 100.0;     //����߶�
//    double lens = len;      //��һ����صĸ߶ȣ�ֻ��һ��
//    len = len / 2;          //С��ڶ��ε���ĸ߶�
//    for (int i = 2; i <= 10; ++i)     //9������
//    {
//        lens += len*2;
//        len = len / 2;
//    }
//    printf("%f %f", lens, len);
//    return 0;
//}


//21.���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ���ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
// �Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�

//#include<stdio.h>
//int main()
//{
//    int n = 1;
//
//    for (int day= 9;  1 <= day; --day)
//    {
//        n = (n + 1)*2;
//    }
//    printf("��һ��ժ��%d��", n);
//    return 0;
//}


//22.����ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ��ѳ�ǩ���������������������Ա����������������
// a˵������x�ȣ�c˵������x,z�ȣ��������ҳ��������ֵ�������

//#include <stdio.h>
//int main()
//{
//    char i,j,k;
//    for (i = 'x'; i <= 'z'; ++i)
//    {
//        for (j = 'x'; j <= 'z'; ++j)
//        {
//            if (i != j)
//            {
//                for (k = 'x'; k <= 'z'; ++k)
//                {
//                    if ( i != k && j != k)
//                    {
//                        if (k != 'x' && k != 'z' && i != 'x')
//                        {
//                            printf("a--%c b--%c c--%c", i, j, k);
//                        }
//                    }
//                }
//            }
//        }
//
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

//#include <stdio.h>
//int main()
//{
//    int n = 3;
//    for (int i = 1; i <= 4; ++i)
//    {
//        for (int j = 1; j <= 4-i; ++j)
//        {
//            printf(" ");
//        }
//        for (int j = 1; j <= 2*i-1 ; ++j)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    for (int i = 1; i <= 3; ++i)
//    {
//        for (int j = 1; j <= i ; ++j)
//        {
//            printf(" ");
//        }
//
//        for (int j = 2*(3-i)+1 ; j >= 1 ; --j)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//}

//24.��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�
//#include<stdio.h>
//int main()
//{
//    double y[21] = {0.0,2.0,};
//    double x[21] = {0.0,1.0,};
//    double sum = 0.0;
//
//    for (int i = 1; i <= 20; i++)
//    {
//        sum += y[i] / x[i];
//        y[i + 1] = y[i] + x[i];
//        x[i + 1] = y[i];
//        printf("%f,%f\n", y[i + 1], x[i + 1]);
//    }
//    printf("%.7f", sum);
//    return 0;
//}



//25.��1+2!+3!+...+20!�ĺ͡�
//#include <stdio.h>
//int main()
//{
//    long long int num = 0;
//    long long int product = 1;
//    for (int i = 1; i <= 20; ++i)
//    {
//        //��㷽��
//        product = product * i;
//        num += product;
//        //������ı����� ...Ҳֻ������ĳ���...
////        for (int j = i; j > 0 ; --j)
////        {
////            product *=j;
////            if(j == 1){
////                printf("%lld", product);
////                num += product;
////                product = 1;
////            }
////        }
////        printf("\n");
//    }
//    printf("%lld", num);
//    return 0;
//}


//26.���õݹ鷽����5!��

//#include <stdio.h>
//
//int product(int i)
//{
//    if(i == 1 ){
//        return 1;
//    }
//    return product(i-1) * i;
//}
//int main(){
//    printf("%d",product(3));
//    return 0;
//}

//27.���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������

//#include<stdio.h>
//
//void print(char *str,int i){
//    if (str[i] != 0)
//    {
//        print(str, i + 1);
//        printf("%c", str[i]);
//    }
//
//}
//
//int main()
//{
//    char str[6];
//    scanf("%s", str);
//    print(str,0);
//}

//28.��5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�3���˴�2�ꡣ
// �ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
//#include <stdio.h>
//
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
//    //1.���ݹ�
////    int a,b,c,d,e;
////    a = 10;
////    b = a+2;
////    c = b+2;
////    d = c+2;
////    e = d+2;
////    printf("%d", e);
//
//    //2.�ݹ�
//    printf("%d", age(5));
//    return 0;
//}


//29.��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
//TODO �����ʮ��ǧ��λ
//#include<stdio.h>
//int main()
//{
//    int a,b,c,d,e,num; //����ʮ���٣�ǧ������������
//
//    printf("�����һ����������λ��������:");
//    scanf("%d", &num);
//
//    a = num/10000;
//    b = num%10000/1000;
//    c = num%1000/100;
//    d = num%100/10;
//    e = num%10;
//
//    if (a != 0){
//        printf("numΪ5λ��,�����ӡ��%d,%d,%d,%d,%d", e, d, c, b, a);
//    } else if (b != 0){
//        printf("numΪ4λ��,�����ӡ��%d,%d,%d,%d", e, d, c, b);
//    } else if (c != 0){
//        printf("numΪ3λ��,�����ӡ��%d,%d,%d", e, d, c);
//    } else if (d != 0){
//        printf("numΪ2λ��,�����ӡ��%d,%d", e,d);
//    } else if (e != 0){
//        printf("numΪ1λ��,�����ӡ��%d", e);
//    }
//    return 0;
//}

//30.һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��
//#include<stdio.h>
//int main()
//{
//    int a,b,c,d,e,num; //����ʮ���٣�ǧ������������
//
//    printf("�����һ����λ��:");
//    scanf("%d", &num);
//
//    a = num/10000;
//    b = num%10000/1000;
//    c = num%1000/100;
//    d = num%100/10;
//    e = num%10;
//
//    if (a == e && b == d){
//        printf("%d��һ��������", num);
//    }else{
//        printf("�ⲻ��һ��������");
//    }
//
//}



//31.���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��
//TODO ���ڲ���д ������õ�ʱ��д
//#include <stdio.h>
//int main(){
//
//}



//32.ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��


//33.�ж�һ�������Ƿ�Ϊ������
//#include <stdio.h>
//int main()
//{
//    int n,i;
//    scanf("%d", &n);
//    for (i = 2; i < n; ++i)
//    {
//        if (n % i == 0)
//            break;
//    }
//    if(i == n){
//        printf("����Ϊ����");
//    }else{
//        printf("������Ϊ����");
//    }
//        return 0;
//}


//39.��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
#include <stdio.h>
int main()
{

}





//40.��һ���������������
//#include<stdio.h>
//int main(){
//    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    //1.�������
////    for (int i = sizeof(nums)/sizeof(int)-1; i >= 0 ; --i)
////    {
////        printf("%d", nums[i]);
////    }
//    //2.�Ȼ�λ�������
//    int temp;
//    int size = sizeof(nums)/sizeof(int);
//    for (int i = 0; i < size/2; ++i)
//    {
//        temp = nums[i];
//        nums[i] = nums[size - i - 1];
//        nums[size - i - 1] = temp;
//    }
//    for (int i = 0; i < size; ++i)
//    {
//        printf("%d", nums[i]);
//    }
//    return 0;
//}









//80.��̲����һ�����ӣ���ֻ�������֡���һֻ���Ӱ��������ƽ����Ϊ��ݣ�����һ������ֻ ���ӰѶ��һ�����뺣�У�������һ�ݡ�
// �ڶ�ֻ���Ӱ�ʣ�µ�������ƽ���ֳ���ݣ��ֶ���һ������ͬ���Ѷ��һ�����뺣�У�
// ������һ�ݣ����������ġ�����ֻ���Ӷ����������ģ� �ʺ�̲��ԭ�������ж��ٸ����ӣ�

