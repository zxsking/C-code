#include <stdio.h>
int main() /* һ���򵥵�C���� */
{
    int n;
    scanf("%d", &n);
    //дһ��forѭ��ѭ������Ϊn��
    // ѭ���м����ÿ��Ҫ�������
    //�ҵ���Ϊ�� ż��Ϊ��
    double sum = 0;
    double num = 0;
    for (int i = 1; i <= n; ++i) {
        int t = i;
        while(t--){
            num += t;
            t*=10;
        }


        if (i % 2) {
            sum += 1/num;
        }
        sum -= 1/num;
    }

    printf("%d",sum);





























//    //����
//    short s = 10;    //2
//    int i = 10;      //4
//    long l = 10;    //4
//
//    short int si = 10; //2      ��short
//    long int li = 10;  //4      ��long
//    unsigned int ui = 10;   //4
//
//    //������
//    float f = 10;    //4
//    double d = 10;   //8
//    char c = '0';   //1
//    char str[] = "str";    //3
//
//    int cats, dogs = 10;
//    printf("%d \n", sizeof(ui));
//
//
//    int num = 100;
//    printf("10jinzhi: %d, 8jinzhi: %o, 16jinzhi: %x\n", num, num, num);
//    printf("10jinzhi: %d, 8jinzhi: %#o, 16jinzhi: %#x\n", num, num, num);
//
//    printf("%d\n", c);
//
//
//    int nums[10] = {1, 2, 3, 4, 5};
//    for (int j = 0; j < 10; ++j) {
//        printf("%d\n", nums[j]);
//    }

//    double a = 5.9999999999999999999999999;
//    float  b = 5.999999999999999999999999;
//
//    printf("%d", a);
//    printf("%", b);



}


