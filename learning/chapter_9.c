// CHAPTER NINE

// 1.����һ���ṹ��������������գ���������ڱ����ǵڼ��죬ע����������
//  #include <stdio.h>
//  struct WhichDay
//  {
//      int year;
//      int month;
//      int day;
//  }a;
//  int main()
//  {
//      int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};    //ÿ�µ�����
//      scanf("%d %d %d",&a.year,&a.month,&a.day);

//     int i,sum = 0;
//     sum += a.day;   //ʮ�µ�����
//     for(i = 0; i< a.month-1; i++) //�ۼ�10�·�ǰÿ������
//     {
//         sum +=days[i];
//     }

//     if(a.year%400 == 0 || (a.year%4 == 0 && a.year%100 != 0))   //����2����28��
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
//     int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};    //ÿ�µ�����
//     int i,sum = 0;
//     sum += day;   //ʮ�µ�����
//     for(i = 0; i< month-1; i++) //�ۼ�10�·�ǰÿ������
//     {
//         sum +=days[i];
//     }

//     if(year%400 == 0 || (year%4 == 0 && year%100 != 0))   //����2����28��
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
//         printf("�������%d��ѧ����ѧ��:",i+1);
//         scanf("%d",&stu[i].num);
//         printf("�������%d��ѧ��������:",i+1);
//         scanf("%s",stu[i].name);
//         printf("�������%d��ѧ���ĳɼ�\n",i+1);
//         for(j = 0; j < 30; j++)
//         {

//             printf("������%s�ĵ�%d�ųɼ�:",stu[i].name,j+1);
//             scanf("%d",&stu[i].score[j]);
//             if(stu[i].score[j] < 0)
//             {
//                 break;
//             }
//         }
//     }

//     for(i = 0 ; i<2; i++)
//     {
//         printf("��һ��ѧ����ѧ��Ϊ:%d\n",stu[i].num);
//         printf("��һ��ѧ��������Ϊ:%s\n",stu[i].name);
//         for(j = 0; j < 30; j++)
//         {
//             if(stu[i].score[j] < 0){
//                 break;
//             }
//             printf("%s�ĵ�%d�ųɼ�Ϊ:%d\n",stu[i].name,j+1,stu[i].score[j]);
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
//         printf("��һ��ѧ����ѧ��Ϊ:%d\n",stu[i].num);
//         printf("��һ��ѧ��������Ϊ:%s\n",stu[i].name);
//         for(j = 0; j < 30; j++)
//         {
//             if(stu[i].score[j] < 0){
//                 break;
//             }
//             printf("%s�ĵ�%d�ųɼ�Ϊ:%f\n",stu[i].name,j+1,stu[i].score[j]);
//         }

//     }
// }

// int main()
// {
//     int i,j;
//     struct Student stu[5];
//     for(i = 0 ; i<2; i++)
//     {
//         printf("�������%d��ѧ����ѧ��:",i+1);
//         scanf("%d",&stu[i].num);
//         printf("�������%d��ѧ��������:",i+1);
//         scanf("%s",stu[i].name);
//         printf("�������%d��ѧ���ĳɼ�\n",i+1);
//         for(j = 0; j < 30; j++)
//         {

//             printf("������%s�ĵ�%d�ųɼ�:",stu[i].name,j+1);
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




// 5.��10��ѧ����ÿ��ѧ�������ݰ���ѧ�ţ����������ſγ̵ĳɼ����Ӽ�������10��ѧ�����ݣ�Ҫ�����3�ſγ���ƽ���ɼ���
//   �Լ���߷ֵ�ѧ�������ݣ�����ѧ�ţ����������ſγ̳ɼ���ƽ���ɼ���

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
//         printf("�������%d��ѧ����ѧ��",i+1);
//         scanf("%d",&stu[i].id);
//         printf("�������%d��ѧ��������",i+1);
//         scanf("%s",stu[i].name);

//         printf("�������%d��ѧ�������ſγ̳ɼ�\n",i+1);
//         for(j = 0; j<3; j++)
//         {
//             printf("��%d��:",j+1);
//             scanf("%f",&stu[i].score[j]);
//         }

//     }


//     int maxi;
//     float maxave = 0.0;
//     for(i = 0; i<3; i++)
//     {
//         float ave = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2])/3.0;
//         printf("��%d��ͬѧ��ƽ���ɼ���%f\n",i,ave);
//         if(ave > maxave)
//         {
//             maxave = ave;
//             maxi = i;
//         }
//     }

//     printf("�ɼ���ߵ�ѧ��Ϊ%d ����Ϊ%s ��һ�ųɼ�Ϊ%f �ڶ��ųɼ�Ϊ%f �����ǳɼ�Ϊ%f ƽ���ɼ�Ϊ%f",stu[maxi].id,stu[maxi].name,stu[maxi].score[0],stu[maxi].score[1],stu[maxi].score[2],maxave);
//     return 0;
// }

