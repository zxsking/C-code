//
// Created by zhanxiaosong on 2024/4/17.
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//    char dir[50] = "F:\\C-code\\learning\\";
//    char file_name[20];
//    char ch;
//
//    gets(file_name);
//
//    strcat(dir, file_name);
//
//
//
//    FILE *fp = fopen(dir, "r+");
//
//    if(fp == NULL)
//    {
//        perror("");
//        return 1;
//    }
//
////    printf("请输入内容到文件内(以#结尾):");
////    ch = getchar();
////    while ((ch = getchar()) != '#')
////    {
////        fputc(ch, fp);
////    }
//
//    ch = fgetc(fp);
//    int i;
//    while (! (i = feof(fp)))
//    {
//-
//        printf("%c", ch);
//        ch = fgetc(fp);
//
//    }
//    fclose(fp);
//
//    return 0;
//}


//将一个磁盘文件中的信息复制到另一个磁盘文件中


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(char *a)
{
    int len = strlen(a);
    int i, j;
    char t;
    for (i = 0; i < len- 1; ++i)
    {
        for (j = 0; j < len - i - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}
int main()
{
    FILE *in, *out;
    char file1[40];
    char file2[40];
    char ch;
    puts("输入文件名1");
    gets(file1);
    puts("输入文件名1");
    gets(file2);

    puts(file1);
    puts(file2);

    in = fopen(file1, "r");
    out = fopen(file2, "w");
    if (in == NULL)
    {
        perror("");
        exit(0);
    }
    if (out == NULL)
    {
        perror("");
        exit(0);
    }

//    ch = fgetc(in);
//    while (!feof(in))
//    {
//        fputc(ch, out);
//        ch = fgetc(in);
//    }

    char str[50];
    fgets(str, 50, in);

    sort(str);
    fputs(str, out);


    fclose(in);
    fclose(out);

    return 0;

}