//
// Created by zhanxiaosong on 2024/1/4.
//



// #include <stdio.h>

//����8���9*9�˷��ھ�
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



//13��ӡˮ�ɻ���

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

#include<stdio.h>
int main()
{
    int n = 1;

    for (int day= 9;  1 <= day; --day)
    {
        n = (n + 1)*2;
    }
    printf("��һ��ժ��%d��", n);
    return 0;
}


//22.����ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ��ѳ�ǩ���������������������Ա����������������
// a˵������x�ȣ�c˵������x,z�ȣ��������ҳ��������ֵ�������