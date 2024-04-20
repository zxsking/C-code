#include <stdio.h>
//���鶼�ǰ�˳������
//�������
void pt_arr(int a[], int len)
{
    for (int i = 0; i < len; ++i)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
}
//��������
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//ð��
void bubble_sort(int a[], int len)
{
    int i,j,t;
    pt_arr(a, len);
    for (i = 0; i < len - 1; ++i) //ð��n-1��
    {
        for (j = 0; j < len - i - 1; ++j) //ÿ��ð����ཻ��len - i - 1��
        {
            if (a[j] > a[j + 1])
            {
                swap(a + j, a + j + 1);     //����λ��
            }
        }
        pt_arr(a, len);
    }
}
//��������
void insert_sort(int a[],int len)
{
    int i,j,key;
    pt_arr(a, len);
    //����������±�1��ʼ ���±겻���������len
    for (i = 1; i < len; ++i)       //todo ���������벻���
    {
        key = a[i];

        //j = i -1 ��Ϊ����i�ϵ�����֮ǰ������Ƚ� �Ӷ���λ�ò���
        for (j = i-1; a[j] > key && j >= 0; --j)
        {
            a[j+1] = a[j];  //
        }
        a[j+1] = key;
        pt_arr(a, len);
    }
}
//ѡ������
void select_sort(int a[],int len)
{
    int i,j,k,n;
    pt_arr(a, len);
    for (i = 0; i < len - 1; ++i)       //todo �����Ͻ绹�ǿ��Ʋ���λ
    {
        k = a[i];
        n = i;
        for (j = i+1; j < len; ++j)
        {
            if(a[j] < k)
            {
                k = a[j];
                n = j;
            }
        }
        swap((a + n), (a + i));

        pt_arr(a, len);
    }
}
//˫��ѡ������
void bidirectional_select_sort(int a[], int len)
{
    int i, j, max, min;
    pt_arr(a, len);
    for (i = 0; i < len/2; ++i)     //todo д��һ����Ϳ
    {

        max = len - i - 1;
        min = i;
        for (j = i; j < len - i; ++j)
        {

            if (a[max] < a[j])
            {
                max = j;
            }
            if (a[min] > a[j])
            {
                min = j;
            }
        }


        if(i == max) max = min;

        swap(&a[min] , &a[i]);
        swap(&a[max], &a[len-i-1]);

        pt_arr(a, len);
    }
}

//˳�����
int sequential_search(const int a[],int len,int key)
{
    int i,n;
    n = -1;
    for (i = 0; i < len; ++i)
    {
        if (a[i] == key) return i;   //���ص�һ��key���±�

//        if(a[i] == key) n = i;     //�������һ��key���±�
    }
//    return n;
    return -1;
}
//���ֲ���
int binary_search(const int a[], int len, int key)
{
    int left,right,mid;
    left = 0, right = len-1;

    while(left <= right)
    {
        mid = (right - left)/2 + left;
        if(a[mid] > key)
        {
            right = mid - 1;
        } else if (a[mid] < key)
        {
            left = mid + 1;
        }else if(a[mid] == key){
            return mid;
        }

    }

    return -1;
}

//�ݹ���ֲ���
int r_b_search(const int a[], int left, int right, int key)
{
    int mid = (right - left)/2 + left;
    if(a[mid] < key)
    {
        return r_b_search(a, mid + 1, right,key);
    }else if(a[mid] > key)
    {
        return r_b_search(a, left, mid - 1,key);
    }else{
        return mid;
    }

}



//������
int main()
{
//        int a[] = {9,7,5,3,1,2,4,6,8,0};
//        int len = 10;

    //����
//    bubble_sort(a, len);      //ð��
//    insert_sort(a, len);      //����
//    select_sort(a, len);      //ѡ��
//    bidirectional_select_sort(a, len);    //˫��ѡ��


    //����
//    int num  = 2;
//    int index;
//    index = sequential_search(a, len, num);       //˳��
//    index = binary_search(a, len, num);           //����
//    index = r_b_search(a, 0, len - 1, num);       //�ݹ����

//    if (index != -1)
//    {
//        printf("%d���±�Ϊ%d �ǵ�%d����", num, index, index + 1);
//    }


    printf("%d", 3.2&&1.2);

    return 0;
}