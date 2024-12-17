#include <stdio.h>
#include <stdlib.h>
int arr[1024];
int main()
{
    int num = 0;
    int jud = 0;
    for (;;)
    {
        scanf("%d", &arr[num]);
        if (arr[num] == -1)
            break;
        num++;
    }
    scanf("%d", &jud);
    int time = 0;
    for (int j = 0; j < num; j++)
    {
        if (arr[j] == jud)
            time++;
    }
    if (time > 1)
        for (int k = 0; k < num; k++)
        {
            if (arr[k] != jud)
                printf("%d ", arr[k]);
        }
    else
        for (int s = 0; s < num; s++)
        {
            printf("%d ", arr[s]);
        }
    return 0;
}
// 1: 移除链表中指定且存在重复的元素
// 描述
// 给你一个链表的头节点 head 和一个整数val，请你删除链表中所有满足 Node.val == val 并且重复出现的节点，并返回新的头节点。换句话说，如果整数val在链表中不重复出现，则不进行删除。

// 输入
// 输入链表和val，列表中的节点数目在范围 [0, 104] 内，1 <= Node.val <= 50，0 <= val <= 50。-1为链表结束符。

// 输出
// 输出移除元素后的链表

// 样例
// image.png
// 输入

// 1 2 6 3 4 5 6 -1 6
// 输出

// 1 2 3 4 5