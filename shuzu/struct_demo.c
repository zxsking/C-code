//
// Created by zhanxiaosong on 2024/1/2.
//
#include <stdio.h>

typedef struct          //����һ���ṹ������ struct Date
{
    int month;      //��
    int day;        //��
    int year;       //��
}Date;

struct Student //����һ���ṹ������ struct Student
{
    int id; //ѧ��Ϊ����      4�ֽ�
    char name[20]; //����Ϊ�ַ���    20�ֽ�
    char sex; //�Ա�Ϊ�ַ���    1�ֽ�
    int age; //����Ϊ����     4�ֽ�
    Date birthday; //��Աbirthday���� struct Date����
    char addr[30]; //��ַΪ�ַ���
} student[3]={11,"zhanxiaosong",'m',20,{1,3,2024},"hubeishengzhognxiangshi",
               12,"guojingwen",'f',21,{5,21,2003},"hahhahahah" ,
               12,"wrh",'m',22,{5,27,2003},"hahhahahah" };


// struct Student      //����һ���ṹ������ struct Student
// {
//     int id;         //ѧ��Ϊ����  4�ֽ�
//     char name[20];  //����Ϊ�ַ��� 20�ֽ�
//     char sex;       //�Ա�Ϊ�ַ��� 1�ֽ�
//     int age;        //����Ϊ����  4�ֽ�
//     float score;    //�ɼ�Ϊʵ��  4�ֽ�
//     char addr[30]; //��ַΪ�ַ���  30�ֽ�
// };


int main() {
    struct Student * p;
    p = &student;

    printf("%d", p++->age);
    // printf("id��%d ",student1.id);
    // printf("������%s ",student1.name);
    // printf("�Ա�%c ",student1.sex);
    // printf("���䣺%d\n",student1.age);
    // printf("%d-",student1.birthday.year);
    // printf("%d-",student1.birthday.month);
    // printf("%d\n",student1.birthday.day);
    // printf("%s",student1.addr);
}






