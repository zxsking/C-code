//CHAPTER SIX

// 1.????????100????????
//  #include <stdio.h>
//  #include <math.h>
//  #define N 101

// int main() {

//     int  a[N],j,i;      //

//     a[1] = 0;
//     for (i = 2; i < N; i++) {
//         a[i] = 1;
//     }

//     for (i = 2; i < sqrt(N); i++) {
//         if (a[i]) {
//             for (j = i; j < (N / i) + 1; j++) {
//                 a[i * j] = 0;
//             }
//         }
//     }

//     //???????100??????????
//     for(i = 1; i <N; i++)
//     {
//         if(a[i] != 0){
//             printf("%4d",i);
//         }
//     }
//   return 0;
// }

// 2.?????????????????
//  #include <stdio.h>
//  int main()
//  {
//      int a[10],i,j,k,t;

//     for(i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(i = 0; i < 9; i++)
//     {
//         k = i;
//         for(j = i+1; j < 10; j++)
//         {
//             if(a[j] > a[k])k = j;
//         }
//         t = a[k];
//         a[k] = a[i];
//         a[i] = t;
//     }

//     for(i = 0; i < 10; i++)
//     {
//         printf("%4d",a[i]);
//     }
//     return 0;
// }

// 3.?????N??N???????????????????
//  #include <stdio.h>
//  #include <stdlib.h>
//  #include <time.h>
//  #define N 3

// int main(){
//     int i,j;
//     int a[N][N];
//     int sum=0;
//     srand(time(NULL));  //?????????
//     for(i=0;i<N;i++){
//         for(j=0;j<N;j++){
//             a[i][j]=rand()%(10); //????0-10??????????
//             if(i==j || i+j==N-1)
//                 sum+=a[i][j];    //??????????
//         }
//     }
//     printf("??????%d?????:\n",N);
//     for(i=0;i<N;i++){
//         for(j=0;j<N;j++){
//             printf("%3d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("%d????????????????:%d",N,sum);

//     return 0;
// }

// 4.?????????????????椤?????????????????????????????????????小?
//  #include<stdio.h>

// int main()
// {
//     int a[11] = {1,4,6,9,13,16,19,28,40,100};//???????椋????????
//     int i, n;

//     printf("????????????");
//     for(i=0;i<10;i++)printf("%d ",a[i]);

//     printf("\n?????????,?????????");
//     scanf("%d", &n);

//     for(i = 9; i >= 0; i--){  //?????????????????????????????????
//         if(n < a[i]) {
//             a[i+1] = a[i];
//         }
//         else {
//             a[i+1] = n; break;
//         }
//         if(i == 0) a[0] = n;  //???????????b??????小???写???????????????if
//     }//?????????????
//     for(i = 0; i <= 10; i++)
//         printf("%d ", a[i]);
// }

// 5.????????????????
//  #include<stdio.h>
//  #define N 6

// int main()
// {
//     int a[N],i,j,t;

//     printf("?????????????:\n");
//     for(i = 0; i < N; i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(i=0, j=N-1; i < j; i++,j--)
//     {
//         t = a[j];
//         a[j] = a[i];
//         a[i] = t;
//     }

//     for(i = 0; i < N; i++)
//     {
//         printf("%3d",a[i]);
//     }

//     return 0;
// }

// 7.????????
//  #include <stdio.h>
//  #define N 3

// int main()
// {
//     int a[N][N] = {0}, count, row, col, i, j;   //????

//     count = 1, row = 0, col = N / 2;    //?????

//     while (count <= N*N)
//     {
//         a[row][col] = count;

//         //????row ?? col???
//         i = row;
//         j = col;

//         i = i ? i-1 : N-1;
//         j = (j + 1) % N;

//         if (a[i][j]!=0||(row==0&&col==N-1)) //?????位??????? ?? ????????????位??  ??????????
//         {
//             i = row + 1;
//             j = col;
//         }

//         row = i;
//         col = j;

//         count++;
//     }
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             printf("%4d",a[i][j]);
//         }
//         printf("\n");
//     }
// }

// 8.找鞍点

// #include <stdio.h>

// #define ROWS 3
// #define COLS 3

// void findSaddlePoint(int a[ROWS][COLS]) {
//     int i, j;
//     int rolMax, colMin;
//     int saddlePointFound = 0;

//     for (i = 0; i < ROWS; i++) {
//         rolMax = a[i][0];

//         for (j = 1; j < COLS; j++) {
//             if (a[i][j] > rolMax) {
//                 rolMax = a[i][j];
//             }
//         }

//         for (j = 0; j < COLS; j++) {
//             colMin = a[0][j];
//             for (int k = 1; k < ROWS; k++) {
//                 if (a[k][j] < colMin) {
//                     colMin = a[k][j];
//                 }
//             }

//             if (a[i][j] == rolMax && a[i][j] == colMin) {
//                 printf("Saddle point found at (%d, %d): %d\n", i, j, a[i][j]);
//                 saddlePointFound = 1;
//             }
//         }
//     }

//     if (!saddlePointFound) {
//         printf("No saddle point found.\n");
//     }
// }

// int main() {
//     int a[ROWS][COLS] = {
//             100 , 82,83 ,
//             53, 34,53 ,
//             2 , 66,96 };

//     findSaddlePoint(a);

//     return 0;
// }

// 12.翻译电报 原文有以下规律  A>Z  B>Y  C>X ....
//  #include <stdio.h>
//  #include <string.h>
//  int main()
//  {
//      int i;
//      char str[5] = "yllp";
//      char strc[5];

//     for(i = 0; i <= strlen(str); i++)
//     {
//         if(str[i] >=65 && str[i] <= 90)
//         {
//             strc[i] = 90 - (str[i] - 64) + 1;
//         }else if(str[i] >= 97 && str[i] <= 122)
//         {
//             strc[i] = 122 - (str[i] -96) + 1;
//         }
//     }

//     printf("密码为:%s\n",str);
//     printf("原文为:%s",strc);
//     return 0;

// }

// 13.编写一程序将两个字符串连接起来不用strcat函数
//  #include <stdio.h>
//  int main()
//  {
//      char a[10] ="abc";
//      char b[10] = "bcd";
//      int i,j;
//      i = 0, j = 0;

//     while(a[i] !='\0')
//     {
//         i++;
//         if(a[i] == '\0')
//         {
//             for(j = 0; a[j] != '\0' ; j++)
//             {
//                 a[i++] = b[j];
//             }
//             a[i] = '\0';
//             break;
//         }
//     }

//     printf("%s",a);
//     return 0;
// }

// 14. 编写 strcmp  s1=s2相等返回0       s1>s2或s1<s2   返回 s1和s2最后比较字符的ASCII差值
//  #include<stdio.h>
//  int main()
//  {
//      char s1[10],s2[10];
//      int i = 0;
//      gets(s1);
//      gets(s2);

//     while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
//     {
//         i++;
//     }

//     printf("%d",s1[i]-s2[i]);

//     return 0;
// }

// 15 strcpy函数功能

// #include <stdio.h>
// int main()
// {
//     char s1[100],s2[50];
//     int i = -1;

//     gets(s1);
//     gets(s2);

//     do{
//         i++;
//         s1[i] = s2[i];
//     }while(s2[i] != '\0');

//     printf("%s\n",s1);
//     printf("%c",s1[5]);
//     return 0;

// }
