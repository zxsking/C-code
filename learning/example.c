//
// Created by zhanxiaosong on 2024/1/6.
// description: C���Գ�����Ƶ���� ����
//

//6.4��һ����ά���黥�����浽��һ����ά�����С�
////a[2][3] = {1,2,3,4,5,6}
////a[3][2] = {1,4,2,5,3,5}
//#include <stdio.h>
//int main()
//{
//    int a[2][3] = {1, 2, 3, 4, 5, 6};
//    int b[3][2];
//
//    for (int x = 0; x < 3; ++x)
//    {
//        for (int y = 0; y < 2; ++y)
//        {
//            b[x][y] = a[y][x];
//
//        }
//    }
//
//    printf("����a�Ķ�ά����\n");
//    for (int i = 0; i < 2; ++i)
//    {
//        for (int j = 0; j < 3; ++j)
//        {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//
//    printf("����b�Ķ�ά����\n");
//    for (int i = 0; i < 3; ++i)
//    {
//        for (int j = 0; j < 2; ++j)
//        {
//            printf("%d ", b[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//6.5��һ��3X4�ľ��Σ�Ҫ�����������ֵ���ĵ��Ǹ�Ԫ�ص�ֵ�Լ������ڵ��к�
//#include <stdio.h>
//int main()
//{
//    int nums[3][4] = {1,2,3,4,5,6,6,7,1,2,8,9};
//    int max = nums[0][0];
//    int x,y;
//    for (int i = 0; i < 3; ++i)
//    {
//        for (int j = 0; j < 4; ++j)
//        {
//            if (nums[i][j] > max)
//            {
//                max = nums[i][j];
//                x = i;
//                y = j;
//
//            }
//        }
//    }
//    printf("��Ԫ��Ϊa[%d][%d] == %d �к�Ϊ��%d�е�%d��",x,y,max,x,y);
//    return 0;
//}


//6.6���һ����֪���ַ���
//#include <stdio.h>
#include <string.h>
//
//int main()
//{
//    char str[15] = {'I', ' ', 'a', 'm', ' ', 'v', 'e', 'r', 'y', ' ', 'h', 'a', 'p', 'p', 'y'};
//    for (int i = 0; i < strlen(str); ++i)
//    {
//        printf("%c", str[i]);
//    }
//    return 0;
//}

//6.7���һ������ͼ
//#include <stdio.h>
//int main()
//{
//    char str[5][5] = {{' ', ' ', '*', ' ', ' '},
//                      {' ', '*', ' ', '*', ' '},
//                      {'*', ' ', ' ', ' ', '*'},
//                      {' ', '*', ' ', '*', ' '},
//                      {' ', ' ', '*', ' ', ' '}};
//
//    for (int i = 0; i < 5; ++i)
//    {
//        for (int j = 0; j < 5; ++j)
//        {
//            printf("%c", str[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}














#include <stdio.h>
int main()
{
//    char a[] = "#include <stdio.h>\nint main()\n{\n    int a = 10;\n    printf(\"%d\",a);\n    return 0;\n}\n";
    char b[2][3] = {{'a', 'b', 'c'},
                    {'d', 'e', '\0'}};
    printf("%s", b);
//    printf("%s", a);
    return 0;
}
