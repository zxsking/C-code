#include <stdio.h>
//数组都是按顺序排序
//输出数组
void pt_arr(int a[], int len)
{
    for (int i = 0; i < len; ++i)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
}
//交换数组
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//冒泡
void bubble_sort(int a[], int len)
{
    int i,j,t;
    pt_arr(a, len);
    for (i = 0; i < len - 1; ++i) //冒泡n-1次
    {
        for (j = 0; j < len - i - 1; ++j) //每次冒泡最多交换len - i - 1次
        {
            if (a[j] > a[j + 1])
            {
                swap(a + j, a + j + 1);     //交换位置
            }
        }
        pt_arr(a, len);
    }
}
//插入排序
void insert_sort(int a[],int len)
{
    int i,j,key;
    pt_arr(a, len);
    //插入排序从下标1开始 且下标不超过或等于len
    for (i = 1; i < len; ++i)       //todo 这里又是想不清楚
    {
        key = a[i];

        //j = i -1 是为了让i上的数与之前的数相比较 从而找位置插入
        for (j = i-1; a[j] > key && j >= 0; --j)
        {
            a[j+1] = a[j];  //
        }
        a[j+1] = key;
        pt_arr(a, len);
    }
}
//选择排序
void select_sort(int a[],int len)
{
    int i,j,k,n;
    pt_arr(a, len);
    for (i = 0; i < len - 1; ++i)       //todo 关于上界还是控制不到位
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
//双向选择排序
void bidirectional_select_sort(int a[], int len)
{
    int i, j, max, min;
    pt_arr(a, len);
    for (i = 0; i < len/2; ++i)     //todo 写的一塌糊涂
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

//顺序查找
int sequential_search(const int a[],int len,int key)
{
    int i,n;
    n = -1;
    for (i = 0; i < len; ++i)
    {
        if (a[i] == key) return i;   //返回第一个key的下标

//        if(a[i] == key) n = i;     //返回最后一个key的下标
    }
//    return n;
    return -1;
}
//二分查找
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

//递归二分查找
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



//主函数
int main()
{
//        int a[] = {9,7,5,3,1,2,4,6,8,0};
//        int len = 10;

    //排序
//    bubble_sort(a, len);      //冒泡
//    insert_sort(a, len);      //插入
//    select_sort(a, len);      //选择
//    bidirectional_select_sort(a, len);    //双向选择


    //查找
//    int num  = 2;
//    int index;
//    index = sequential_search(a, len, num);       //顺序
//    index = binary_search(a, len, num);           //二分
//    index = r_b_search(a, 0, len - 1, num);       //递归二分

//    if (index != -1)
//    {
//        printf("%d的下标为%d 是第%d个数", num, index, index + 1);
//    }


    printf("%d", 3.2&&1.2);

    return 0;
}