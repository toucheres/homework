#include<stdio.h>
#include<stdlib.h>
int arr[1024];

int comp(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}

int main()
{
    int num=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,num,sizeof(int),comp);
    for(int j=0;j<num;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}


// 2: 单链表简单选择排序
// 描述
// 试以单链表为存储结构， 实现简单选择排序算法。

// 输入
// 共两行。
// 第一行是一个整数 n(1≤n≤3000) ，表示数的个数。第二行包含 n 个整数，用空格分隔，第 i 个整数ai(1≤ai≤231 -1)。

// 输出
// n个从小到大排序后的整数，用空格分隔

// 样例
// 输入

// 5
// 4 2 4 5 1
// 输出

// 1 2 4 4 5