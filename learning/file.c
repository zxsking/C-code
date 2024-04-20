//
// Created by zhanxiaosong on 2024/2/26.
//


#include <stdio.h>
#include <string.h>
#include <errno.h>
//为什么使用文件 用来存储数据 数据持久化
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
//    FILE * pf = fopen("zxs.txt", "w"); //打开文件 mode为写 用此模式，打开文件时会清除文件所有数据
//    if (pf == NULL)
//    {
//
//        printf("%s\n", strerror(errno));    //打印错误信息
//        perror("fopen");        //打印错误信息 可能会输出 fopen: No such file or directory
//        return 1;
//    }
//
//    fputc('z', pf);     //写一个字符
//    fputs("zhanxiaosong", pf);  //写入字符串
//
//    fclose(pf);         //关闭文件
//
//    pf = fopen("zxs.txt", "a");     //打开文件 mode为追加
//    fputs("  to add some information", pf);
//
//
//    fclose(pf);
//
//
//
//
//    pf = fopen("zxs.txt", "r");     //打开文件 mode为读
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
//    int *p = fgets(str, 50, pf);  //读取成功返回的为str地址 若读取失败返回空指针
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
//        if (feof(pf))  //feof(pf) 函数只能检测到上一次读取操作是否到达文件末尾
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


//二进制写入写出


//int main()
//{
//
//    struct S s = { "avery", 22, 99.5f };
//    FILE *pf = fopen("C:\\Users\\zhanxiaosong\\Desktop\\新建 文本文档.txt", "wb");
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
//    pf = fopen("C:\\Users\\zhanxiaosong\\Desktop\\新建 文本文档.txt", "rb");
//
//    fread(&t, sizeof (struct S), 1, pf);
//    printf("%s %d %f", t.arr, t.age, t.score);
//    return 0;
//}



//将格式参数转化为字符串


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




