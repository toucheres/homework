#include <stdio.h>
typedef struct Window
{
    int left;
    int right;
    int down;
    int up;
} window;

int can(window yuanshen, window liulanqi)
{
    if (yuanshen.left >= liulanqi.left && yuanshen.right <= liulanqi.right && yuanshen.up <= liulanqi.up && yuanshen.down >= liulanqi.down)
        return 1;
    return 0;
}

int main()
{
    int num;
    scanf("%d",&num);
    while (num--)
    {
        window yuan;
        window liu;
        scanf("%d%d%d%d",&yuan.left,&yuan.right,&yuan.down,&yuan.up);
        scanf("%d%d%d%d",&liu.left,&liu.right,&liu.down,&liu.up);
        if(can(yuan,liu))
        {
            printf("yes\n");
            continue;
        }
        printf("no\n");
    }
    
    return 0;
}
// 6: 原神启动（结构）
// 描述
// 原神？启动！

// 小H想要启动原神，但是他不想被同学发现他也玩原神，他将原神的窗口缩小，并准备了一个浏览器窗口想要随时准备遮住原神。

// 在windows操作系统中，通常一个窗口有4个整数定义其位置：左边坐标(l)、右边坐标®、下边坐标(d)、上边坐标(u)。(
// l
// ≤
// r
// 且
// d
// ≤
// u
// l≤r且d≤u)

// 现在你需要用结构体存储两个窗口，并判断浏览器窗口是否能遮住原神窗口。

// 输入
// 第一行一个整数T(T<=100)，表示数据组数。
// 每组数据共2行，每行4个整数，表示一个窗口的位置信息。
// 第一行是原神窗口，第二行是浏览器窗口。

// 输出
// 对于每组数据若能遮住，输出yes，否则输出no

// 样例
// 输入

// 10
// 20 86 71 74
// 14 176 70 92
// 35 65 74 98
// 38 39 29 57
// 88 96 16 63
// 43 193 13 142
// 3 4 69 98
// 90 100 49 81
// 54 59 13 68
// 14 47 28 49
// 19 73 49 59
// 46 89 23 98
// 22 60 79 91
// 13 77 34 176
// 21 94 11 18
// 50 87 25 69
// 21 70 27 67
// 1 135 23 162
// 11 64 1 13
// 11 79 47 86
// 输出

// yes
// no
// yes
// no
// no
// no
// yes
// no
// yes
// no