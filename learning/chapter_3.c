
//CHAPTER THREE

//3.1 假如我国国民生产总值的年增长率为 7%, 计算 10 年后我国国民生产总值与现在相比增长多少百分比。计算公式为 p = pow(1+r,n);

//代码:
//  #include <stdio.h>
//  #include <math.h>
//  int main()
//  {
//      float r = 0.07, p=1, n;    //增长率：r， 现在百分比： p
//      n = 10;     //年
//
//      p = pow(1+r,n);
//
//      printf("10年之后增长了%f", p);
//
//     return 0;
//
// }

//3.2 存款利息的计算。有 1000 元，想存 5 年，可按以下 5 种办法存:
//(1)一次存 5 年期。
//(2) 先存 2 年期，到期后将本息再存 3 年期。
//(3) 先存 3 年期，到期后将本息再存 2 年期。
//(4) 存 1 年期，到期后将本息存再存 1 年期，连续存 5 次。
//(5) 存活期存款。活期利息每一季度结算一次。
// 2017年的银行存款利息如下：
// 1年期定期存款利息为 1.5%
// 2年期定期存款利息为 2.1%
// 3年期定期存款利息为 2.75%
// 5年期定期存款利息为 3%
//活期存款利息为 0.35%(活期存款每一季度结算一次利息)。
//如果r为年利率, n为存款年数,则计算本息和的公式为
//1年期本息和: p = 1000 * (1 + r)；
//n年期本息和：p = 1000 * (1 + n * r)；
//存n次 1 年期的本息和：p = 1000 * pow(1 + r, n)；
//活期存款本息和：p = 1000 * pow(1 + r/4 , 4*n);

//代码:
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    double r0,r1,r2,r3,r5,p,p1,p2,p3,p4,p5;
//    p = 1000;
//    r0 = 0.0035;
//    r1 = 0.015;
//    r2 = 0.021;
//    r3 = 0.0275;
//    r5 = 0.03;
//
//    p1 = p * (1 + 5 * r5);                      //一次性存5年期
//    p2 = p * (1 + 2 * r2) * (1 + 3 * r3);       //先存 2 年期，到期后将本息再存 3 年期
//    p3 = p * (1 + 3 * r3) * (1 + 2 * r2);       //先存 3 年期，到期后将本息再存 2 年期
//    p4 = p * pow(1 + r1, 5);              //存 1 年期，到期后将本息再存 1 年期，连续存 5 次
//    p5 = p * pow(1 + r0 / 4, 4 * 5);      //存活期存款，活期利息每一季度结算一次
//
//    printf("p1=%lf\n",p1);               //输出按第 1 种方案得到的本息和
//    printf("p2=%lf\n",p2);               //输出按第 2 种方案得到的本息和
//    printf("p3=%lf\n",p3);               //输出按第 3 种方案得到的本息和
//    printf("p4=%lf\n",p4);               //输出按第 4 种方案得到的本息和
//    printf("p5=%lf\n",p5);               //输出按第 5 种方案得到的本息和
//
//    return 0;
//}


//3.3
//3.4

//3.5. 用下面的 scanf 函数输入数据，使 a=3,b=7,x=8. 5,y=71. 82,cl='A',c2='a'。
//在键盘上应如何输入？

//代码：
//# include <stdio.h>
//int main( )
//{
//    int a,b;
//    float x,y;
//    char cl ,c2;
//    scanf ("a=%db=%d" ,&a,&b );
//    scanf("%f%e",&x,&y) ;
//    scanf("%c%c",&cl,&c2);
//
//    printf("a=%d,b=%d,x=%f,y=%f,cl=%c,c1=%c\n",a,b,x,y,cl ,c2);
//    return 0;
//}
/**
 * //输入
 * a=3b=7
 * 7 8.5Aa
 */




//3.6 请编程序将“China”译成密码，密码规律是：用原来的字母后面第 4 个字母代替原来
//的字母。例如，字母“A”后面第 4 个字母是“E”，用“E”代替“A”。因此母China"应译为
//“Glmre"。请编一程序，用赋初值的方法使 cl,c2,c3,c4,c5 这 5 个变量的值分别为'C',
//'h','i','n','a',经过运算,使 cl,c2,c3,c4,c5 分别变为'G','1','m','r','e'。分别用
// putchar函数和 printf 函数输出这 5 个字符。

//代码
//#include <stdio.h>
//int main()
//{
//    char c1,c2,c3,c4,c5;
//    c1 = 'C';
//    c2 = 'h';
//    c3 = 'i';
//    c4 = 'n';
//    c5 = 'a';
//
//    c1 = c1 + 4;
//    c2 = c2 + 4;
//    c3 = c3 + 4;
//    c4 = c4 + 4;
//    c5 = c5 + 4;
//
//    putchar(c1);
//    putchar(c2);
//    putchar(c3);
//    putchar(c4);
//    putchar(c5);
//
//    printf("\n");
//    printf("%c", c1);
//    printf("%c", c2);
//    printf("%c", c3);
//    printf("%c", c4);
//    printf("%c", c5);
//
//    return 0;
//}

//3.7 设圆半径r=1.5,圆柱高h=3,求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积。
// 用 scanf 输入数据，输出计算结果，输出时要求有文字说明，取小数点后 2 位数字。请编程序。

//#include <stdio.h>
//#define PI 3.141592
//int main()
//{
//    double r, h, l, s, cs, cp, ccp; //分别为半径 圆柱高 圆周长、圆面积、圆球表面积、圆球体积、圆柱体积
//    printf("请输入半径:");
//    scanf("%lf", &r);
//    printf("请输入圆柱高:");
//    scanf("%lf", &h);
//
//    l = 2 * PI * r; //圆周长
//    s = PI * r * r; //圆面积
//    cs = 4 * s;     //圆球表面积
//    cp = 4.0/3.0 * PI * r * r;
//    ccp = s * h;
//
//    printf("圆周长为：%lf\n", l);
//    printf("圆面积为：%lf\n", s);
//    printf("圆球表面积为：%lf\n", cs);
//    printf("圆球体积为：%lf\n", cp);
//    printf("圆柱体积为：%lf\n", ccp);
//
//    return 0;
//}


//3.8 编程序,用 getchar 函数读入两个字符给 cl 和 c2,然后分别用 putchar 函数和 printf
//函数输出这两个字符。思考以下问题：
//(1) 变量 cl 和 c2 应定义为字符型、整型还是二者皆可？
//(2) 要求输出 cl 和 c2 值的 ASCII 码，应如何处理？用 putchar 函数还是 printf 函数？
//(3) 整型变量与字符变量是否在任何情况下都可以互相代替？如：
//char cl,c2;  与   int cl,c2；是否无条件地等价


/**
 *  （1）cl 和 c2 可以定义为字符型或整型，二者皆可。
 *  （2）可以用 printf 函数输出，在 printf 函数中用％d 格式符，即
 *  printf（"%d,%d\n",cl ,c2）;
 *  （3）字符变量在计算机内占 1 个字节，而整型变量占2个或 4个字节。因此整型变量
 *  在可输出字符的范围内（ASCII 码为 0-127 的字符）是可以与字符数据互相转换的。如果
 *  整数在此范围外，不能代替。
 *
 */