#include<stdio.h>
#include<stdlib.h>
typedef struct GOOD
{
    double value;
    double wighth;
    double rate;
    int flag;
}good;
good goods[101];

int compare(const void *tp1, const void *tp2)
{
    good *p1 = tp1;
    good *p2 = tp2;
    if(p1->rate>p2->rate)
        return -1;
    return 1;
}

int main()
{
    int num = 0;
    float zhanli = 0;
    float fz = 0;
    scanf("%d",&num);
    scanf("%f",&fz);
    for (size_t i = 0; i < num; i++)
    {
        scanf("%lf%lf", &goods[i].value, &goods[i].wighth);
        goods[i].rate = goods[i].value / goods[i].wighth;
    }
    qsort(goods, num, sizeof(good), compare);
    for (int j = 0;fz>0;j++)
    {
        if(fz>=goods[j].wighth)
        {
            fz -= goods[j].wighth;
            zhanli += goods[j].value;
        }
        else
        {
            zhanli += goods[j].rate * fz;
            fz = 0;
        }       
    }
    printf("%.2f",zhanli);

    return 0;
}
// 1 : 战利品（结构）
//         描述
//             搜刮战利品是游戏中令人快乐的一件事。

//                 小p正在一个游戏中搜刮战利品，但是不幸的是，这个游戏有一个负重值，当你背的东西过重会导致寸步难行。所以小p要合理规划以带走更具价值的东西。

//                     具体地来说小p发现了
//                         n
//                         n个战利品，每个战利品有两个属性：价值，重量。而小p需要带走总重量不超过小p自身负重的战利品，同时使得其总价值尽可能地大。这本是一个极其复杂地问题，幸运的是，小p可以使用一种法术：切割术，它能够将物体切割并且按比例切割价值(如把一个价值为6，重量为3的物品切割为一个价值为4，重量为2的物品和一个价值为2，重量为1的物品)。现在你需要编程算出小p可以获得的战利品的最大总价值。

//     输入
//     第1行两个整数n(
//         n
// ≤ 100 n≤100),
//     m(
//         m
// ≤ 100 m≤100)，表示战利品的个数和小p的负重。
//     接下来n行每行两个整数，表示每个物品的价值和重量

//     输出
//     一行一个小数(保留两位小数)，表示小p可以获得的战利品的最大总价值。

//     样例
//     输入

//     3 20 100 5 20 20 10 5 输出

//     120.00