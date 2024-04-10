#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
    long num;
    float score;
    struct Student *next;
};


int n;

struct Student *create()
{
    struct Student * head;
    struct Student * p1,*p2 = (struct Student *)malloc(LEN);

    scanf("%d %f", &p1->num, &p1->score);
    n = 0;
    head = NULL;

    while (p1->num != 0)
    {
        n = n + 1; //链表长度加1
        if(n == 1) head = p1;   //当刚创建长度为1时head指向p1
        else p2->next = p1;          //之后加长时则是用p2-next 指向p1进行尾部增加
        p2 = p1;
        p1 = (struct Student *)malloc(LEN);
        scanf("%d %f", &p1->num, &p1->score);       //当num为0是创建节点停止
    }

    return head;
}


int main()
{
    struct Student *pt;
    pt = create();


    return 0;
}


















