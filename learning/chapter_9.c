// CHAPTER NINE

// 1.定义一个结构体变量包括年月日，计算改日在本年是第几天，注意闰年问题
//  #include <stdio.h>
//  struct WhichDay
//  {
//      int year;
//      int month;
//      int day;
//  }a;
//  int main()
//  {
//      int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};    //每月的天数
//      scanf("%d %d %d",&a.year,&a.month,&a.day);

//     int i,sum = 0;
//     sum += a.day;   //十月的天数
//     for(i = 0; i< a.month-1; i++) //累加10月份前每月天数
//     {
//         sum +=days[i];
//     }

//     if(a.year%400 == 0 || (a.year%4 == 0 && a.year%100 != 0))   //润年2月是28天
//     {
//         sum -= 1;
//     }

//     printf("%d",sum);
//     return 0;
// }

// 2.
//  #include <stdio.h>
//  struct WhichDay
//  {
//      int year;
//      int month;
//      int day;
//  }a;

// int date(int year,int month,int day)
// {
//     int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};    //每月的天数
//     int i,sum = 0;
//     sum += day;   //十月的天数
//     for(i = 0; i< month-1; i++) //累加10月份前每月天数
//     {
//         sum +=days[i];
//     }

//     if(year%400 == 0 || (year%4 == 0 && year%100 != 0))   //润年2月是28天
//     {
//         sum -= 1;
//     }

//     return sum;
// }

// int main()
// {
//     scanf("%d %d %d",&a.year,&a.month,&a.day);
//     int sum = date(a.year,a.month,a.day);
//     printf("%d",sum);
//     return 0;
// }

// 3.
//  #include <stdio.h>
//  struct Student
//  {
//      int num;
//      char name[20];
//      int score[30];
//  }stu[5];

// int main()
// {
//     int i,j;
//     for(i = 0 ; i<2; i++)
//     {
//         printf("请输入第%d个学生的学号:",i+1);
//         scanf("%d",&stu[i].num);
//         printf("请输入第%d个学生的姓名:",i+1);
//         scanf("%s",stu[i].name);
//         printf("请输入第%d个学生的成绩\n",i+1);
//         for(j = 0; j < 30; j++)
//         {

//             printf("请输入%s的第%d门成绩:",stu[i].name,j+1);
//             scanf("%d",&stu[i].score[j]);
//             if(stu[i].score[j] < 0)
//             {
//                 break;
//             }
//         }
//     }

//     for(i = 0 ; i<2; i++)
//     {
//         printf("第一个学生的学号为:%d\n",stu[i].num);
//         printf("第一个学生的姓名为:%s\n",stu[i].name);
//         for(j = 0; j < 30; j++)
//         {
//             if(stu[i].score[j] < 0){
//                 break;
//             }
//             printf("%s的第%d门成绩为:%d\n",stu[i].name,j+1,stu[i].score[j]);
//         }
//         puts("");

//     }
//     return 0;
// }

// 4.
//  #include <stdio.h>
//  struct Student
//  {
//      int num;
//      char name[20];
//      int score[30];
//  };

// void input(struct Student *stu)
// {
//     int i,j;
//     for(i = 0 ; i<2; i++)
//     {
//         printf("第一个学生的学号为:%d\n",stu[i].num);
//         printf("第一个学生的姓名为:%s\n",stu[i].name);
//         for(j = 0; j < 30; j++)
//         {
//             if(stu[i].score[j] < 0){
//                 break;
//             }
//             printf("%s的第%d门成绩为:%f\n",stu[i].name,j+1,stu[i].score[j]);
//         }

//     }
// }

// int main()
// {
//     int i,j;
//     struct Student stu[5];
//     for(i = 0 ; i<2; i++)
//     {
//         printf("请输入第%d个学生的学号:",i+1);
//         scanf("%d",&stu[i].num);
//         printf("请输入第%d个学生的姓名:",i+1);
//         scanf("%s",stu[i].name);
//         printf("请输入第%d个学生的成绩\n",i+1);
//         for(j = 0; j < 30; j++)
//         {

//             printf("请输入%s的第%d门成绩:",stu[i].name,j+1);
//             scanf("%f",&stu[i].score[j]);
//             if(stu[i].score[j] < 0)
//             {
//                 break;
//             }
//         }
//     }
//     input(stu);
//     return 0;
// }




// 5.有10个学生，每个学生的数据包括学号，姓名，三门课程的成绩，从键盘输入10个学生数据，要求输出3门课程总平均成绩，
//   以及最高分的学生的数据（包括学号，姓名，三门课程成绩，平均成绩）

// #include <stdio.h>
// struct Student
// {
//     int id;
//     char name[20];
//     float score[3];
// }stu[10];


// int main()
// {
//     int i,j;

//     for(i = 0; i<3 ; i++)
//     {
//         printf("请输入第%d个学生的学号",i+1);
//         scanf("%d",&stu[i].id);
//         printf("请输入第%d个学生的姓名",i+1);
//         scanf("%s",stu[i].name);

//         printf("请输入第%d个学生的三门课程成绩\n",i+1);
//         for(j = 0; j<3; j++)
//         {
//             printf("第%d门:",j+1);
//             scanf("%f",&stu[i].score[j]);
//         }

//     }


//     int maxi;
//     float maxave = 0.0;
//     for(i = 0; i<3; i++)
//     {
//         float ave = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2])/3.0;
//         printf("第%d个同学的平均成绩是%f\n",i,ave);
//         if(ave > maxave)
//         {
//             maxave = ave;
//             maxi = i;
//         }
//     }

//     printf("成绩最高的学号为%d 姓名为%s 第一门成绩为%f 第二门成绩为%f 第三们成绩为%f 平均成绩为%f",stu[maxi].id,stu[maxi].name,stu[maxi].score[0],stu[maxi].score[1],stu[maxi].score[2],maxave);
//     return 0;
// }

