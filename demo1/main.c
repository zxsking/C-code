//��д�� 3. 3 ����ʹ֮�����������κδ�д��ĸ���Ӽ�������һ����д��
//        ĸ������ʾ������ʾ��Ӧ��Сд��ĸ��
#include <stdio.h>

int main(){
//    Ҫ���տ��Գɼ��ĵȼ�����ٷ��Ʒ����Σ�A ��Ϊ 85 �����ϣ�B ��Ϊ
//    70 84 ��,C ��Ϊ 60 69 �֣�D ��Ϊ 60 �����¡��ɼ��ĵȼ��ɼ������롣
//    char grade ;
//
//    scanf("%c", &grade);
//    switch (grade) {
//        case 'A'  :
//            printf("85-100");
//            break;
//        case 'B':
//            printf("70-84");
//            break;
//        case 'C':
//            printf("60-69");
//            break;
//        case 'D':
//            printf("0-59");
//            break;
//        default:
//            printf("error data");
//    }

//
//    ������ֱ����������е� 25 ����,
//            �Ǻ����ѵġ������������������ �����Ϸ������ˣ�
//
    int nums[25] = {1, 1};
    for (int i = 2; i < 25; ++i) {
        nums[i] = nums[i - 1] + nums[i - 2];

    }

    for (int i = 0; i < 25; ++i) {
        if (i % 5 == 0) {
            printf("\n");
        }
        printf("%12d", nums[i]);

    }




    //ð������
    //����һ��n������
//    int a[4] = { 0 };
//    for(int i=0;i<4;++i){
//        if(i&1){
//            a[i]=1;
//        }
//    }
//
//    for (int i = 0; i < 4; ++i) {
//        printf("%d", a[i]);
//    }


//    int nums[] = {7,43,1,224,6,8,9,5};
//
//
//    int len = sizeof(nums)/sizeof(int);
//    int num=1;
//    for (int i = 0; i < 50; ++i) {
//        scanf("%d", &nums[i]);
//        if (nums[i] < 0) {
//            nums[i] = 0;
//            break;
//        }
//        len++;
//    }
    //forѭ��n��

//    for (int i = 0; i < len; ++i) {
//        int temp = 0;
//        for (int j = 0; j < len - i -1,oc ; ++j) {
//            if(nums[j] > nums[j+1]){
//                temp = nums[j+1];
//                nums[j+1] = nums[j];
//                nums[j] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < len; ++i) {
//        printf("%d\n", nums[i]);
//    }
        //forѭ�� n-i��

}