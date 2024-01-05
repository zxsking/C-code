//
// Created by zhanxiaosong on 2024/1/2.
//
#include <stdio.h>

typedef struct          //声明一个结构体类型 struct Date
{
    int month;      //月
    int day;        //日
    int year;       //年
}Date;

struct Student //声明一个结构体类型 struct Student
{
    int id; //学号为整型      4字节
    char name[20]; //名字为字符串    20字节
    char sex; //性别为字符型    1字节
    int age; //年龄为整型     4字节
    Date birthday; //成员birthday属于 struct Date类型
    char addr[30]; //地址为字符串
} student[3]={11,"zhanxiaosong",'m',20,{1,3,2024},"hubeishengzhognxiangshi",
               12,"guojingwen",'f',21,{5,21,2003},"hahhahahah" ,
               12,"wrh",'m',22,{5,27,2003},"hahhahahah" };


// struct Student      //声明一个结构体类型 struct Student
// {
//     int id;         //学号为整型  4字节
//     char name[20];  //名字为字符串 20字节
//     char sex;       //性别为字符型 1字节
//     int age;        //年龄为整型  4字节
//     float score;    //成绩为实型  4字节
//     char addr[30]; //地址为字符串  30字节
// };


int main() {
    struct Student * p;
    p = &student;

    printf("%d", p++->age);
    // printf("id：%d ",student1.id);
    // printf("姓名：%s ",student1.name);
    // printf("性别：%c ",student1.sex);
    // printf("年龄：%d\n",student1.age);
    // printf("%d-",student1.birthday.year);
    // printf("%d-",student1.birthday.month);
    // printf("%d\n",student1.birthday.day);
    // printf("%s",student1.addr);
}






