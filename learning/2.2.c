//
// Created by zhanxiaosong on 2024/1/24.
//

// 2.1
//
//#include <stdio.h>
//int main()
//{
//    int t = 1;
//
//    for (int i = 1; i <= 5; ++i)
//    {
//        t = t * i;
//    }
//    printf("%d", t);
//    return 0;
//}


//2.2
//#include <stdio.h>
//int main()
//{
//    int n[50];
//    for (int i = 0; i < 50; ++i)
//    {
//        scanf("%d",&n[i]);
//        if(n[i] < 0){
//            break;
//        }
//    }
//
//    for (int i = 0; i < 50; ++i)
//    {
//        if(n[i] >= 80){
//            printf("this is n[%d],and its num is %d\n",i, n[i]);
//        }else if(n[i] < 0 )
//        {
//            break;
//        }
//    }
//    return 0;
//}


//2.3
//#include <stdio.h>
//int main()
//{
//    for (int year = 2000; year < 2500; ++year)
//    {
//        if(year % 400 == 0 || (year % 100 != 0 && year % 4 ==0))
//            printf("%d年是闰年\n",year);
//    }
//    return 0;
//}

//2.4
//#include <stdio.h>
//int main()
//{
//    double one = 1.0;   //分子
//    double num = 1.0;   //分母
//    double sum = 0;     //和
//    for (int i = 1; i <= 100; ++i)
//    {
//
//        if((int)num % 2 == 0){
//            sum -= one/num;
//        }else{
//            sum += one/num;
//        }
//        num++;
//    }
//    printf("%.15f",sum);
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int num ;
//    scanf("%d",&num);
//    for (int i = 2; i < num; ++i)
//    {
//        if(num % i == 0){
//            printf("num is not a sushu");
//            break;
//        }
//        if(i == num-1){
//            printf("num is a sushu");
//            break;
//        }
//    }
//
//    return 0;
//}



#include <stdio.h>
int main()
{
    int nums[20] = {1,1};
//    int a = 123;
//    printf("%d",a);
    printf("hello world");
    return 0;
}