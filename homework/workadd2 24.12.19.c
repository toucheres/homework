#include<stdio.h>
#include<stdlib.h>
typedef  struct Listnode
{
    int index;
    struct Listnode *next;
    struct Listnode *last;
}node;

void makenodeaftar(node* head,int argindex)
{

    node *tpnxt = head->next;
    node *tphead = head;
    head->next = malloc(sizeof(node));
    head->next->next = tpnxt;
    head->next->index = argindex;
    head->next->last = tphead;
}

void insert(node *head, int dexargindex,int surce)
{
    while (head->index!=dexargindex)
    {
        head = head->next;
    }
    makenodeaftar(head,surce);
}

node* find(node *head, int dexargindex)
{
    while (head->index != dexargindex)
    {
        head = head->next;
    }
    return head;
}

void delenode(node **phead, int argindex)
{
    node *head = *phead;
    while (head->index!=argindex)
    {
        if(head==NULL)
            return;
        head = head->next;
    }
    head->last->next = head->next;
}

int main()
{
    node *head = malloc(sizeof(head));
    head->last = NULL;
    head->index = -1;
    head->next = malloc(sizeof(head));
    head->next->index = 1;
    head->next->next = NULL;
    head->next->last = head;
    int num=0;
    scanf("%d",&num);
    for (size_t i = 1; i < num; i++)
    {
        int desindex=0;
        int mode=-1;
        scanf("%d",&desindex);
        scanf("%d",&mode);
        if (mode==1)
        {
            node* tpn = find(head, desindex);
            makenodeaftar(tpn, i+1);
        }
        else
        {
            node *tpn = find(head, desindex);
            makenodeaftar(tpn->last, i+1);
        }     
    }
    
    return 0;
}
// 2: 队列安排
// 描述
// 一个学校里老师要将班上 N 个同学排成一列，同学被编号为1∼N，他采取如下的方法：

// 先将 1 号同学安排进队列，这时队列中只有他一个人；

// 2-N 号同学依次入列，编号为 i 的同学入列方式为：老师指定编号为 i 的同学站在编号为 1∼(i−1) 中某位同学（即之前已经入列的同学）的左边或右边；

// 最后，从队列中去掉 M(M<N） 个同学，其他同学位置顺序不变。

// 在所有同学按照上述方法队列排列完毕后，老师想知道从左到右所有同学的编号。

// 输入
// 第 1 行为一个正整数 N，表示了有 N 个整数。
// 第 2∼N行，第 i 行包含两个整数 k,p，其中 k 为小于i 的正整数，p 为 0 或者 1。若 p 为0，则表示将 i 号同学插入到 k 号同学的左边，p 为 1 则表示插入到右边。
// 第 N+1 行为一个正整数 M，表示去掉的同学数目。
// 接下来 M行，每行一个正整数 x，表示将 x 号同学从队列中移去，如果 x 号同学已经不在队列中则忽略这一条指令。

// 输出
// 1 行，包含最多 N 个空格隔开的正整数，表示了队列从左到右所有同学的编号，行末换行且无空格。

// 样例
// 输入

// 4
// 1 0
// 2 1
// 1 0
// 2
// 3
// 3
// 输出

// 2 4 1
