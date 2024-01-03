//
// Created by zhanxiaosong on 2023/12/26.
//
/**
 * fopen中的mode是文件的使用方式
 *
 * 文件使用方式       含 义                 如果指定的文件不存在
 * r（只 读） 为了输入数据.打开一个已存在的文本文件       出错
 * w（只写） 为了输出数据.打开一个文本文件            建立新文件
 * a（追 加） 向文本文件尾添加数据                    出错
 * rb（只读） 为了输入数据.打开一个二进制文件          出错
 * wb（只写） 为了输出数据.打开一个二进制文件          建立新文件
 * ab（追加） 向二进制文件尾添加数据                   出错
 * “r+”（读写） 为了读和写，打开一个文本文件          出错
 * “w+”（读写） 为了读和写，建立一个新的文本文件        建立新文件
 * “a+”（读写） 为了读和写，打开一个文本文件          出错
 * “rb+”（读写） 为了读和写，打开一个二进制文件        出错
 * “wb+”（读写） 为了读和写，建立一个新的二进制文件      建立新文件
 * “ab+”（读写） 为读写打开一个二进制文件               出错
 */
#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *f1; //定义一个指向文件的指针变量f1
    f1 = fopen("../zxs.txt", "r"); //将fopen函数的返回值赋给f1
    char ch, filename[10];
    printf("请输入文件路径及文件名");
    scanf("%s", filename);


    if ((f1 = fopen(filename, "a")) == NULL) {
        printf("cannot find this file \n");
        exit(0);
    }

    printf("输入一段字符串存储到文件中 以#为符号结束");

    ch = getchar();
    while (ch != '#') {
        fputc(ch, f1);
        putchar(ch);
        ch = getchar();
    }


    fclose(f1);
    //    putchar(10);

    return 0;
}
