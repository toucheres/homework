#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int val;
    struct NODE *left;
    struct NODE *right;
} node;

node *madenode(int argval)
{
    node *tp = malloc(sizeof(node));
    tp->val = argval;
    tp->right = NULL;
    tp->left = NULL;
    return tp;
}
node *nodes[101];
node *queue[101];
int start = 0;
int end = 0;
void push(node *arg)
{
    queue[end] = arg;
    end++;
}
node *pop()
{
    start++;
    return queue[start - 1];
}

int main()
{
    int sumnum = 0;

    scanf("%d", &sumnum);
    for (int i = 0; i < 101; i++)
    {
        nodes[i] = NULL;
    }
    nodes[1] = madenode(1);
    for (size_t i = 1; i < sumnum+1; i++)
    {
        int le = 0;
        int ri = 0;
        scanf("%d%d", &le, &ri);
        if (le != -1)
        {
            nodes[2 * i] = madenode(le);
            nodes[i]->left = nodes[2 * i];
        }
        if (ri != -1)
        {
            nodes[2 * i + 1] = madenode(ri);
            nodes[i]->right = nodes[2 * i + 1];
        }
    }

    push(nodes[1]);
    while (end - start)
    {
        node *tp = pop();
        if (tp->left)
            push(tp->left);
        if (tp->right)
            push(tp->right);
        if (tp->val != -1)
            printf("%d ", tp->val);
    }

    return 0;
}
// 4: 二叉树的层次遍历
// 描述
// 现在给出一棵二叉树，希望你输出它的层次遍历

// 输入
// 第一行一个正整数
// n
// n，表示给定的树的节点的数目，规定节点编号 1∼
// n
// n，其中节点 1是树根。
// 接下来
// n
// n 行，每行两个正整数
// l
// i
// l
// i
// ​
//  ，
// r
// i
// r
// i
// ​
//  ，分别表示节点
// i
// i 的左右孩子的编号。如果不存在左/右孩子，则以 −1 表示。两个数之间用一个空格隔开。

// 输出
// 输出对应二叉树的层次遍历，对于同一层节点按照从左到右的顺序输出

// 样例
// 输入

// 3
// 2 3
// -1 -1
// -1 -1
// 输出

// 1 2 3
// 提示
// 其中，
// n
// ≤
// 100
// n≤100