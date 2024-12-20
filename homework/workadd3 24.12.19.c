#include<stdio.h>
#include<stdlib.h>
int arr[200];
int sumnum = 0;

int comp(const void*p1,const void* p2)
{
    return *(int *)p1 - *(int *)p2;
}

int find(int op)
{
    for (int j = 0; j < sumnum;j++)
    {
        if(arr[j]==op)
            return j;
    }
    return -1;
}

int findfore(int op)
{
    int index = -1;
    for (int j = 0; j < sumnum; j++)
    {
        if (arr[j] == op)
            index = j;
    }
    if(index==-1)
        return -1;
    while (arr[index]==op)
    {
        if(index==0)
            return -1;
        index--;
    }
    return index;
}

int findbeh(int op)
{
    int index = -1;
    for (int j = 0; j < sumnum; j++)
    {
        if (arr[j] == op)
            index = j;
    }
    if (index == -1)
        return -1;
    while (arr[index] == op)
    {
        if (index == sumnum-1)
            return -1;
        index++;
    }
    return index;
}

void updata()
{
    qsort(arr, sumnum, sizeof(int), comp);
}

int main()
{
    int num=0;
    scanf("%d",&num);
    for (int j = 0; j < num;j++)
    {
        int op = 0;
        int opnum = 0;
        scanf("%d%d",&op,&opnum);
        int res = -1;
        
        switch (op)
        {
        case 5:
            arr[sumnum] = opnum;
            sumnum++;
            updata();
            break;
        case 1:
            printf("%d\n", find(opnum)+1);
            break;
        case 3:
            res = findfore(opnum);
            if (res==-1)
            {
                printf("-2147483647\n");
            }
            else
                printf("%d\n",arr[res]);
            break;
        case 2:
            printf("%d\n",arr[opnum-1]);
            break;
        case 4:
            res = findbeh(opnum);
            if (res == -1)
            {
                printf("2147483647\n");
            }
            else
                printf("%d\n", arr[res]);
            break;
        default:
            break;
        }
    }
    return 0;
}

// // 3: 普通二叉树
// 描述
// 您需要写一种数据结构，来维护一些数（都是 1e9 以内的数字）的集合，最开始时集合是空的。其中需要提供以下操作，操作次数 q 不超过 104：

//     查询值为x的数的排名（排名定义为比当前数小的数的个数 +
//     1。若有多个相同的数，应输出最小的排名）。 查询排名为 x 的数。
//         求 x 的前驱（前驱定义为小于 x，且最大的数）。若未找到则输出−2147483647。
//             求 x 的后继（后继定义为大于 x，且最小的数）。若未找到则输出 2147483647。 插入一个数 x。
//                 输入
//                     第一行是一个整数 q，表示操作次数。

//                         接下来 q 行，每行两个整数 op,
//     x，分别表示操作序号以及操作的参数 x。

//         输出
//             输出有若干行。对于操作 1,
//     2, 3, 4输出一个整数，表示该操作的结果。

//     样例 输入

//     7 5 1 5 3 5 5 1 3 2 2 3 3 4 3 输出

//     2 3 1 5