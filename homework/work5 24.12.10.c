#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int nian;
int yue;
int ri;
int is_leap_year(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
        return 1;
    else if (year % 400 == 0)
        return 1;
    else if (year % 3200 == 0 && year % 172800 == 0)
        return 1;
    else
        return 0;
}

int getyueday(int y)
{
    if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)
        return 31;
    if (y == 4 || y == 6 || y == 9 || y == 11)
        return 30;
    if (y == 2 && is_leap_year(nian))
        return 29;
    if (y == 2 && (!is_leap_year(nian)))
        return 28;
}

int getday()
{
    int sum = 0;
    for (int j = 1900; j < nian; j++)
    {
        if (is_leap_year(j))
        {
            sum += 366;
            continue;
        }
        sum += 365;
    }

    for (int j = 1; j < yue; j++)
    {
        sum += getyueday(j);
    }
    sum += ri - 1;
    return sum;
}
int main()
{
    scanf("%4d-%2d-%2d", &nian, &yue, &ri);
    int day = getday() % 7;
    switch (day)
    {
    case 6:
        printf("Sunday");
        break;
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("Tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("Friday");
        break;
    case 5:
        printf("Saturday");
        break;

    default:
        break;
    }
    return 0;
}
// 5: 今天星期几
// 描述

// 已知1900年1月1日是星期一，问这天之后的任意一天是星期几？

// 输入

// 1900年1月1日以后的任一合法日期，格式为yyyy-MM-dd，如2000-01-01。

// 输出

// 输入日期所对应的星期。

// 样例

// 输入	输出
// 2017-11-11	Saturday
