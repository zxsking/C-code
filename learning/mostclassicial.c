//
// Created by zhanxiaosong on 2024/4/8.
//


//1.쳲���������  �ж��ַ���  1.�ݹ� 2.���� 3.����������Ҳ��һ�ֵô���
//2.�ж�����  �ж��ַ���     1.ɸѡ��  2.�ֱ��2 ȡ�� �� sqrt(n)�ж�
//3.ˮ�ɻ���  ���и���nλ��       //
//4.��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��  �ж��Ƿ�Ϊ��������Ϊ�����������Ϊ��������ֽ�������
//5.��������������m��n���������Լ������С�������� //շת�����  //���������
//6.������
//7.���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ���ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
// �Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�

//8.ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��
//9.�ж�һ�������Ƿ�Ϊ����(����)
//10.��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
//11.����ż���� ����������ӵ��ڸ�ż��
//12 ��ˮ���ڵ��Ϸ�����һ��Ҭ��,���ɵ�һ��ˮ�ְ�Ҭ�ӷ�Ϊ������ 5 �ѣ���ʣ�� 1 �����˺��ӣ��Լ����� 1 �ѡ�
// Ȼ��,�ڶ���ˮ�ְ�ʣ�µ� 4 �ѻ�Ϻ����·�Ϊ������ 5 �ѣ���ʣ�� 1 �����˺��ӣ��Լ����� 1 �ѡ�
// �Ժ�������ĸ�ˮ�����ΰ��˷���������󣬵����ˮ�ְ�ʣ�µ�Ҭ�ӷ�Ϊ������ 5 �Ѻ�ͬ��ʣ��1 �����˺��ӡ�
// ���õ�������̼��㲢���ԭ��������������ж��ٸ���
//13.�������
//14.��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������
// ������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��(Լɪ��)

//15.��0��7������ɵ���������
//16.�˽���ת��Ϊʮ����





//13.Լɪ��
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct LinkedList    LinkedList;
//
//struct LinkedList
//{
//    int val;
//    struct LinkedList * next;
//};
//
//LinkedList * create(int n)
//{
//    int i = 1;
//    LinkedList *head = (LinkedList *) malloc(sizeof(LinkedList));
//    LinkedList *p1,*p2;
//    p1  = p2  = (LinkedList*) malloc(sizeof (LinkedList));
//
//    head->val = 0;
//    head->next = NULL;
//    p1->val = i++;
//
//    while (i <= n+1)
//    {
//        head->next == NULL ?  (head->next = p1) : (p2->next = p1);
//
//        p2 = p1;
//        p1 = (LinkedList *) malloc(sizeof(LinkedList));
//        p1->val = i++;
//    }
//
//    p2->next = head->next;
//
//    return head;
//}
//
//int fun(int n,int m)
//{
//    int i = n,j;
//    LinkedList *t,*node = (struct LinkedList*) malloc(sizeof (struct LinkedList));
//    node = create(n);
//
//    while (n-- > 0)
//    {
//        for (j = 0; j < m-1; ++j)
//        {
//            node = node->next;
//        }
//        t = node;
//        node = node->next;
//        printf("%d ", node->val);
//        t->next = node->next;
//        node = t;
//    }
//    return node->val;
//}
//
//int main()
//{
//    printf("***%d***",fun(5, 4));
//    return 0;
//}





//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct LinkedList
//{
//    int val;
//    struct LinkedList *next;
//} LinkedList;
//
//int main()
//{
//    int n, m, i = 1, j;         //����   �ڼ�������    ��ʼ������i
//    //����������������������
//    scanf("%d%d", &n, &m);
//
//    //������ͷ����ռ�
//    LinkedList *head = (LinkedList *) malloc(sizeof(LinkedList)), *p1, *p2, *t;
//    head->val = 0;
//    head->next = NULL;
//
//    while (i <= n)
//    {
//        p1 = (LinkedList *) malloc(sizeof(LinkedList));
//        p1->val = i++;
//        head->next == NULL ? (head->next = p1) : (p2->next = p1);
//        p2 = p1;
//    }
//    p2->next = head->next;
//    while (n-- > 0)
//    {
//        for (j = 0; j < m - 1; ++j)
//            head = head->next;
//
//        t = head, head = head->next, t->next = head->next;
//        head = t;
//    }
//    printf("%d\n", head->val);
//    return 0;
//}

