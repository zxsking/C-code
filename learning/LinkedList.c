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
        n = n + 1; //�����ȼ�1
        if(n == 1) head = p1;   //���մ�������Ϊ1ʱheadָ��p1
        else p2->next = p1;          //֮��ӳ�ʱ������p2-next ָ��p1����β������
        p2 = p1;
        p1 = (struct Student *)malloc(LEN);
        scanf("%d %f", &p1->num, &p1->score);       //��numΪ0�Ǵ����ڵ�ֹͣ
    }

    return head;
}


int main()
{
    struct Student *pt;
    pt = create();


    return 0;
}


















