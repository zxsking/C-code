//
// Created by zhanxiaosong on 2024/2/26.
//


#include <stdio.h>
#include <string.h>
#include <errno.h>
//Ϊʲôʹ���ļ� �����洢���� ���ݳ־û�
int main()
{
//    FILE *pf = fopen("text.txt", "r");
    FILE *pf = fopen("text.txt", "w+");
    if (pf == NULL)
    {
//        printf("%s", strerror(errno));
        perror("fopen");
        return 1;
    }


    fputs("zhanxiaosong", pf);

    char ch;
    while ((ch = fgetc(pf)) != EOF)
    {
        printf("%c", ch);
    }

//    char str[50];
//    fgets(str, 50, pf);
//    printf("%s", str);



    return 0;
}


//int main()
//{
//    //
//    FILE * pf = fopen("zxs.txt", "w"); //���ļ� modeΪд �ô�ģʽ�����ļ�ʱ������ļ���������
//    if (pf == NULL)
//    {
//
//        printf("%s\n", strerror(errno));    //��ӡ������Ϣ
//        perror("fopen");        //��ӡ������Ϣ ���ܻ���� fopen: No such file or directory
//        return 1;
//    }
//
//    fputc('z', pf);     //дһ���ַ�
//    fputs("zhanxiaosong", pf);  //д���ַ���
//
//    fclose(pf);         //�ر��ļ�
//
//    pf = fopen("zxs.txt", "a");     //���ļ� modeΪ׷��
//    fputs("  to add some information", pf);
//
//
//    fclose(pf);
//
//
//
//
//    pf = fopen("zxs.txt", "r");     //���ļ� modeΪ��
//
////    int ch = 0;
////    while ((ch = fgetc(pf)) != EOF)
////    {
////        printf("%c", ch);
////
////    }
//
//
//    char str[100] ;
//    int *p = fgets(str, 50, pf);  //��ȡ�ɹ����ص�Ϊstr��ַ ����ȡʧ�ܷ��ؿ�ָ��
//    printf("%d\n", p);
////    printf("%d\n", str);
//    printf("%s\n", str);
//
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}


struct S
{
    char arr[10];
    int age;
    float score;
};

//int main()
//{
//    struct S s = { "avery", 22, 99.5f };
//    FILE *pf = fopen("..\\zxs.txt", "w");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//
//
//    fprintf(pf, "%s %d %f", s.arr, s.age, s.score);
//
//
//    fclose(pf);
//    pf = NULL;
//
//    struct S t = {0};
//    pf = fopen("..\\zxs.txt", "r");
//
//    while (1)
//    {
//        char c = fgetc(pf);
//        if (feof(pf))  //feof(pf) ����ֻ�ܼ�⵽��һ�ζ�ȡ�����Ƿ񵽴��ļ�ĩβ
//        {
//            break;
//        }
//        printf("%x\n", pf->_ptr);
//        printf("%c\n", c);
//    }
//    printf("%d", EOF);
//    fclose(pf);
//    return 0;

//    fscanf(pf, "%s %d %f", t.arr, &(t.age), &(t.score));
//
//    printf("%s %d %f", t.arr, t.age, t.score);
//
//    fclose(pf);
//    pf = NULL;
//
//    return 0;

//}


//������д��д��


//int main()
//{
//
//    struct S s = { "avery", 22, 99.5f };
//    FILE *pf = fopen("C:\\Users\\zhanxiaosong\\Desktop\\�½� �ı��ĵ�.txt", "wb");
//
//
//
//    fwrite(&s, sizeof (struct S), 1, pf);
//
//    fclose(pf);
//    pf = NULL;
//
//
//    struct S t = {0};
//
//    pf = fopen("C:\\Users\\zhanxiaosong\\Desktop\\�½� �ı��ĵ�.txt", "rb");
//
//    fread(&t, sizeof (struct S), 1, pf);
//    printf("%s %d %f", t.arr, t.age, t.score);
//    return 0;
//}



//����ʽ����ת��Ϊ�ַ���


//int main()
//{
////    struct S s = {"avery",20,20.5f};
////    char str[50];
////    sprintf(str, "%s %d %f", s.arr, s.age, s.score);
//
////    printf("%s", str);
//
//    struct S t ={0};
//    char ss[20];
//    sscanf("zhanxiaosong 20 2.22f", "%s %d %f", t.arr, &(t.age), &(t.score));
//    printf("%s %d %f", t.arr, t.age, t.score);
//
//    return 0;
//}




