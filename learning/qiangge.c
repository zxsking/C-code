//
// Created by zhanxiaosong on 2024/4/12.
//
//#include <stdio.h>
//int main()
//{
//    int n,f;
//    n = 0,f = 1;
//    while(f){
//        n++;
//        if (n % 5 == 1 && n % 6 == 5 && n % 7 == 4  && n % 11 == 10)
//        {
//            f = 0;
//        }
//    }
//    printf("%d", n);
//    return 0;
//}

//#include <stdio.h>
//
//int fun(int n)
//{
//    int sum = 1;
//    while (n >= 1)
//    {
//        sum *= n;
//        n--;
//    }
//    return sum;
//}
//
//int main()
//{
//    double e,a;
//    int n = 1;
//    e = 1.0;
//    a = 1.0 / fun(n);
//    while (a >= 1e-6)
//    {
//        printf("%lf\n", a);
//        e += a;
//        n++;
//        a = 1.0 / fun(n);
//    }
//    printf("%lf", e);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//void my_cat(char *a, char *b)
//{
//    int n;
//    n = strlen(a);
//    strcpy(a + n, b);
//}
//int main()
//{
//    char a[80], b[40];
//    gets(a);
//    gets(b);
//    my_cat(a, b);
//    puts(a);
//
//    return 0;
//}










//第二套
//1.
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//    for (int i = 2; i <= sqrt(n); ++i)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    int i,t;
//    for (t = 0, i = 100; i <= 200; i++)
//    {
//        if (is_prime(i))
//        {
//            t++;
//            printf("%4d", i);
//        }
//        if(t%10 == 0) printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int fun(int n)
//{
//    if (n == 1 || n == 2)
//    {
//        return 1;
//    }else{
//        return fun(n - 1) + fun(n - 2);
//    }
//}
//
//int main()
//{
//    int n,i;
//    scanf("%d", &n);
//    printf("%d", fun(n));
//    return 0;
//}

//#include <stdio.h>
//
//struct Student
//{
//    char name[20];
//    long id;
//    float score;
//}stu[20];
//
//int main()
//{
//    int i;
//    float ave;
//    for (i = 0, ave = 0; i < 3; ++i)
//    {
//        scanf("%f,%ld,%s", &stu[i].score, &stu[i].id, stu[i].name);
//        ave += stu[i].score;
//    }
//    ave = ave/3;
//    printf("%f\n", ave);
//
//    for (i = 0; i < 3; ++i)
//    {
//        if(stu[i].score < 60)
//        {
//            printf("%s,%ld", stu[i].name, stu[i].id);
//        }
//    }
//}

//#include <stdio.h>
//
//int fun(int a, int b)
//{
//    int r,t;
//    if (a < b)
//    {
//        t = a;
//        a = b;
//        b =  t;
//    }
//
//    r = b % a;
//    while (r != 0)
//    {
//        a = b;
//        b = r;
//        r = b%a;
//    }
//    return a;
//}
//int main()
//{
//    printf("%d", fun(165, 44));
//}













//4
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n)
//{
//    int i;
//    for (i = 2; i <= sqrt(n) ; i++)
//    {
//        if(n % i == 0) return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    int i,t;
//    for (i = 2; i < 1000; ++i)
//    {
//        t = (int) log10(i) + 1;
////        printf("%d  %d   %d\n", (int)(i /pow(10, t - 1)), i % 10, i);
//        if (i / (int)pow(10, t-1) == i % 10 && is_prime(i))
//        {
//            printf("%4d", i);
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//void swap(int *arr, int n)
//{
//    int i,t;
//    for (i = 0; i < n / 2; ++i)
//    {
//        t = arr[i];
//        arr[i] = arr[n - i - 1];
//        arr[n - i - 1] = t;
//    }
//}
//int main()
//{
//    int a[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
//    int i;
//    for (i = 0; i < 10; ++i)
//    {
//        printf("%3d", a[i]);
//    }
//    printf("\n");
//    swap(a, 10);
//    for (i = 0; i < 10; ++i)
//    {
//        printf("%3d", a[i]);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    double i, pi, n;
//    i = 1, n = 1.0 / pow(i, 2), pi = 0;
//    for (i = 2; n >= 1e-6; ++i)
//    {
//        pi += n;
//        n = 1/pow(i, 2);
//    }
//
//    pi = sqrt(pi * 6);
//
//    printf("%lf", pi);
//
//    return 0;
//}








//5
//#include <stdio.h>
//int main()
//{
//    char k, ch;
//    int count = 0;
//    puts("请输入指定的字符");
//    k = getchar();
//    getchar();
//    for (int i = 0;((ch = getchar()) != '\n') &&  i < 80; ++i)
//    {
//        if (k == ch)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}




//#include <stdio.h>
//int main()
//{
//    int n, i, t, sum;
//    scanf("%d", &n);
//    t = 1;
//    printf("%d", t);
//    for (i = 2,sum = 0; i <= n; ++i)
//    {
//        t = t * 10 + i;
//        printf("+%d", t);
//        sum += t;
//    }
//    printf("=%d", sum);
//    return 0;
//}

//#include <stdio.h>
//
//void insert_sort(int * a, int n)
//{
//    int i,j,k;
//    for (i = 1; i < n; ++i)
//    {
//        k = a[i];
//        for (j = i - 1; a[j] > k && j >= 0; --j)
//        {
//            a[j + 1] = a[j];
//        }
//        a[j + 1] = k;
//    }
//}
//int main()
//{
//    int a[10] = {81, 7, 9, 6, -2, 50, 44, 1, 3, 10};
//    insert_sort(a, 10);
//    for (int i = 0; i < 10; ++i)
//    {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}




//6
//#include <stdio.h>
//void insert(int *a,int k,int n)
//{
//    int i;
//    for (i = n - 1; i >= 0; --i)
//    {
//        if (k < a[i])
//        {
//            a[i + 1] = a[i];
//        } else
//        {
//            break;
//
//        }
//    }
//    a[i+1] = k;
//}
//int main()
//{
//    int a[11] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
//    insert(a, 17, 10);
//    for (int i = 0; i < 11; ++i)
//    {
//        printf("%d ", a[i]);
//    }
//
//}

//#include <stdio.h>
//int fun(int n)
//{
//    if (n == 0)
//    {
//        return 0;
//    }
//    int t = (n % 10) * (n % 10) * (n % 10);
//    return fun(n/10) + t;
//}
//int main()
//{
//    for (int i = 100; i < 1000; ++i)
//    {
//        if (i == fun(i))
//        {
//            printf("%d ", i);
//        }
//    }
//}










//7
//#include <stdio.h>
//int main()
//{
//    int n, t, i, j;
//    n = 10000;
//    for (i = 2; i < n; ++i)
//    {
//        t = 0;
//        for (j = 1; j < i; ++j)
//        {
//            if (i % j == 0)
//            {
//                t += j;
//            }
//        }
//        if (t == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}



//#include <stdio.h>
//#define N 10
//int main()
//{
//    int a[N],i,max;
//    for (i = 0; i < N ; ++i)
//    {
//        scanf("%d", &a[i]);
//        if (i == 0 || max < a[i])
//        {
//            max = a[i];
//        }
//    }
//    printf("%d", max);
//    return 0;
//}

//#include <stdio.h>
//
//int  mystrcmp(char *p1, char *p2)
//{
//    while (*p1 == *p2 && *p1 != 0)
//    {
//        p1++,p2++;
//    }
//    return (*p1 - *p2);
//}
//
//int main()
//{
//    char a[80], b[80];
//    gets(a);
//    gets(b);
//    int i;
//    i = mystrcmp(a, b);
//    if (i > 0)
//    {
//        printf("a>b");
//    } else if (i < 0)
//    {
//        printf("a<b");
//    } else
//    {
//        printf("a == b");
//    }
//    return 0;
//}







//8
//#include <stdio.h>
//int main()
//{
//    int i,sum;
//    for (i = 1, sum = 0; i <= 100; ++i)
//    {
//        sum += i;
//    }
//    printf("%d", sum);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    char c;
//    float a,t,r,total;
//    int b;
//    printf("输入加油量a:");
//    scanf("%f", &a);
//
//    printf("输出入汽油品种b 90 93 97 :");
//    scanf("%d", &b);
//
//    printf("输入服务类型m:自助 e:协助:");
//    getchar();
//    scanf("%c", &c);
//
//
//    if (b == 90)
//    {
//        t = 6.95;
//    } else if (b == 93)
//    {
//        t = 7.44;
//    } else if (b == 97)
//    {
//        t = 7.93;
//    }
//
//    if (c == 'm')
//    {
//        r = 0.05;
//    } else if (c == 'e')
//    {
//        r = 0.03;
//    }
//    total = a * t * (1 - r);
//    printf("应付款%f", total);
//    return 0;
//
//}


//#include<stdio.h>
//#include <malloc.h>
//#include <string.h>
//
//#define N 50
//struct Book
//{
//    char name[50];
//    char author[50];
//    int price;
//};
//
//void insert_sort(struct Book *b)
//{
//    int i, j;
//    struct Book *k = (struct Book *) malloc(sizeof(struct Book));
//
//    for (i = 0; i < N; ++i)
//    {
//        *k = b[i];
//        for (j = i - 1; j >= 0 && (*k).price < b[j].price; --j)
//        {
//            b[j + 1] = b[j];
//        }
//        b[j + 1] = *k;
//    }
//}
//
//void query(const struct Book *b, char *name)
//{
//    int i;
//    for (i = 0; i < N; ++i)
//    {
//        if (!(strcmp(b[i].name, name)))
//        {
//            break;
//        }
//    }
//
//    if (i < N)
//    {
//        printf("%s", b[i].author);
//    } else
//    {
//        printf("无此书");
//    }
//}
//
//int main()
//{
//    struct Book b[N] = {{"The Alchemist",                          "Paulo Coelho",             15},
//                        {"The Hobbit",                             "J.R.R. Tolkien",           22},
//                        {"The Da Vinci Code",                      "Dan Brown",                20},
//                        {"The Hunger Games",                       "Suzanne Collins",          18},
//                        {"The Kite Runner",                        "Khaled Hosseini",          16},
//                        {"The Fault in Our Stars",                 "John Green",               14},
//                        {"The Girl with the Dragon Tattoo",        "Stieg Larsson",            21},
//                        {"The Road",                               "Cormac McCarthy",          12},
//                        {"The Goldfinch",                          "Donna Tartt",              25},
//                        {"The Martian",                            "Andy Weir",                19},
//                        {"Gone Girl",                              "Gillian Flynn",            17},
//                        {"The Book Thief",                         "Markus Zusak",             13},
//                        {"The Secret",                             "Byron Preiss",             24},
//                        {"The Silent Patient",                     "Alex Michaelides",         20},
//                        {"The Nightingale",                        "Kristin Hannah",           18},
//                        {"The Power of One",                       "Bryce Courtenay",          15},
//                        {"The Help",                               "Kathryn Stockett",         14},
//                        {"The Ocean at the End",                   "Simon Lelic",              22},
//                        {"The Art of Racing in the Rain",          "Garth Stein",              16},
//                        {"The Immortal Life of Henrietta Lacks",   "Rebecca Skloot",           19},
//                        {"The Man who Mistook his Wife for a Hat", "Oliver Sacks",             21},
//                        {"The No. 1 Ladies' Detective Agency",     "Alexander McCall Smith",   12},
//                        {"The Shadow of the Wind",                 "Carlos Ruiz Zafón",        20},
//                        {"The House on Mango Street",              "Sandra Cisneros",          13},
//                        {"The Color Purple",                       "Alice Walker",             17},
//                        {"The God of Small Things",                "Arundhati Roy",            18},
//                        {"The English Patient",                    "Michael Ondaatje",         22},
//                        {"The Remains of the Day",                 "Kazuo Ishiguro",           19},
//                        {"The Little Prince",                      "Antoine de Saint-Exupéry", 14},
//                        {"The Great Gatsby",                       "F. Scott Fitzgerald",      16},
//                        {"The Catcher in the Rye",                 "J.D. Salinger",            15},
//                        {"To Kill a Mockingbird",                  "Harper Lee",               12},
//                        {"1984",                                   "George Orwell",            20},
//                        {"Pride and Prejudice",                    "Jane Austen",              17},
//                        {"Moby Dick",                              "Herman Melville",          21},
//                        {"Jane Eyre",                              "Charlotte Bronte",         18},
//                        {"Wuthering Heights",                      "Emily Bronte",             19},
//                        {"Crime and Punishment",                   "Fyodor Dostoevsky",        22},
//                        {"The Adventures of Huckleberry Finn",     "Mark Twain",               13},
//                        {"The Catcher in the Rye",                 "J.D. Salinger",            19},
//                        {"To Kill a Mockingbird",                  "Harper Lee",               18},
//                        {"1984",                                   "George Orwell",            15},
//                        {"Pride and Prejudice",                    "Jane Austen",              12},
//                        {"The Great Gatsby",                       "F. Scott Fitzgerald",      16},
//                        {"The Lord of the Rings",                  "J.R.R. Tolkien",           25},
//                        {"Moby Dick",                              "Herman Melville",          20},
//                        {"Jane Eyre",                              "Charlotte Bronte",         17},
//                        {"Wuthering Heights",                      "Emily Bronte",             21},
//                        {"Crime and Punishment",                   "Fyodor Dostoevsky",        22},
//                        {"The Adventures of Huckleberry Finn",     "Mark Twain",               14},
//
//    };
//    // 打印初始化后的数据
//    int i;
//    for (i = 0; i < N; i++)
//    {
//        printf("Book %d: Name = '%s', Author = '%s', Price = %d\n", i + 1, b[i].name, b[i].author, b[i].price);
//
//    }
//    insert_sort(b);
//    for (i = 0; i < N; i++)
//    {
//        printf("Book %d: Name = '%s', Author = '%s', Price = %d\n", i + 1, b[i].name, b[i].author, b[i].price);
//
//    }
//    query(b, "The Hobbit");
//
//    return 0;
//
//}



//9
//#include <stdio.h>
//int main()
//{
//    int i, j;
//    for (i = 1; i < 10; ++i)
//    {
//        for (j = 1; j <= i; ++j)
//        {
//            printf("%d * %d = %d   ", j, i, j * i);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i,j,sum;
//    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9,};
//
//    for (i = 0, sum = 0; i < 3; ++i)
//    {
//        for (j = i; j < 3; ++j)
//        {
//            sum += a[i][j];
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}

//
//#include <stdio.h>
//#define N 10
//struct Student
//{
//    char stu_name[6];
//    char name[8];
//    float score[3];
//    float ave;
//}stu[N];
//
//int main()
//{
//    int i,j;
//    float num;
//    for (i = 0; i < N; i++)
//    {
//        printf("第%d个学生学号:", i + 1);
//        scanf("%s", stu[i].stu_name);
//        printf("第%d个学生姓名:", i + 1);
//        scanf("%s", stu[i].name);
//        for (j = 0; j < 3; ++j)
//        {
//            printf("第%d个学生的第%d门成绩:", i + 1, j + 1);
//            scanf("%f", &stu[i].score[j]);
//        }
//    }
//    for (i = 0 ; i < N; ++i)
//    {
//        num = 0;
//        for (j = 0; j < 3; ++j)
//        {
//            num += stu[i].score[j];
//        }
//        stu[i].ave = num / 3;
//    }
//    printf("%s %s %f %f %f %f", stu[5].stu_name, stu[5].name, stu[5].score[0], stu[5].score[1], stu[5].score[2], ave);
// //    printf("%s %s %f %f %f %f", stu[1].stu_name, stu[1].name, stu[1].score[0], stu[1].score[1], stu[1].score[2], stu[1].ave);
//
//    return 0;
//}


//10
//#include <stdio.h>
//int main()
//{
//    int i,j;
//    for (i = 0; i < 4; ++i)
//    {
//        for (j = 3 - i; j >= 1; --j)
//        {
//            printf(" ");
//        }
//        for (j = 2 * i + 1; j >= 1; --j)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//}


//#include <stdio.h>
//
//void bubble_sort(int *a, int n)
//{
//    int i,j,t;
//    for (i = 0; i < n - 1; ++i)
//    {
//        for (j = 0; j < n - i - 1; ++j)
//        {
//            if (a[j] > a[j + 1])
//            {
//                t = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = t;
//            }
//        }
//    }
//}
//
//void pt(const int *a, int n)
//{
//    for (int i = 0; i < n; ++i)
//    {
//        printf("%d ", a[i]);
//    }
//}
//
//int main()
//{
//    int i,a[10];
//    for (i = 0; i < 10; ++i)
//    {
//        scanf("%d", &a[i]);
//    }
//    bubble_sort(a, 10);
//    pt(a, 10);
//    return 0;
//}


//#include<stdio.h>
//
//void del(char *s, char c)
//{
//    int i,j;
//    i = 0;
//    while (s[i] != '\0')
//    {
//        if (s[i] == c)
//        {
//            for (j = i; s[j] != '\0'; ++j)
//            {
//                s[j] = s[j + 1];
//            }
////            continue;
//        }
//        i++;
//    }
//}
//
//int main()
//{
//    char str[80], c;
//    gets(str);
//    scanf("%c", &c);
//
//    del(str, c);
//    puts(str);
//
//    return 0;
//}

