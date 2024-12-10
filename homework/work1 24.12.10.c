#include <stdio.h>
#include <string.h>
#include <memory.h>

int ishuiwen(int op)
{
    char tp[101];
    memset(tp, 0, sizeof(tp));
    sprintf(tp, "%d", op);
    if (strlen(tp) == 1)
    {
        return 0;
    }
    char *first = tp;
    char *last = tp + strlen(tp)-1;
    int num = 0;
    while (last - first > 0)
    {
        if (*last != *first)
        {
            num++;
        }
        last--;
        first++;
    }
    if (num == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int line = 0;
    scanf("%d", &line);
    while (line--)
    {
        int op = 0;
        scanf("%d", &op);
        if (ishuiwen(op))
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
// 1: 伪回文数
// 描述
// 输入一个正整数， 判断它是不是一个伪回文数。（回文数是顺着看和倒着看都一样的数，例如1221，12321都是回文数，伪回文数是改动一个数字就能变成回文数的数，1位数不是伪回文数）。

// 输入
// 第一行输入一个正整数
// n
// n，表示下面有
// n
// n组数据。
// 每组数据为一个正整数，能够用int保存，占用一行。

// 输出
// 对于每组数据，若是伪回文数，输出yes，否则输出no

// 样例
// 输入

// 2
// 122
// 12321
// 输出

// yes
// no
