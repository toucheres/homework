//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	while(line--)
//	{
//		int total = 0;
//		int man = 0;
//		scanf("%d %d", &total, &man);
//		if (total>man)
//		{
//			printf("%d\n", -1);
//			continue;
//		}
//		else
//		{
//			printf("%d\n", man & total);
//			continue;
//		}
//	}
//	return 0;
//}

/*3: 带科学家（回顾）
题目描述
作为一个大科学家，小
H
H 致力于研究爱情问题。他发现每一个人都会有一个得分，小情侣的得分是两人的得分的按位与（是不是特别的有道理），现在有
n
n 组情侣，给定每组情侣的得分和情侣中小哥哥的得分，请推出情侣中小姐姐的最低得分

输入：
第一行一个整数
n
n

后面
n
n 行每行有两个整数，第一个数
a
i
a
i
​
指这组情侣的总分，第二个数
b
i
b
i
​
指小哥哥的得分，
a
i
,
b
i
≤
1
0
8
a
i
​
, b
i
​
≤10
8


输出：
n
n 行，每行一个整数表示情侣中小姐姐的最低得分。如果输入数据不合法，输出 - 1

样例输入：
3

3 7

2 3

7 3

样例输出：
3

2

- 1

提示
n
≤
1
0
6
n≤10
6


a
i
,
b
i
≤
1
0
8
a
i
​
, b
i
​
≤10
8


因为出题人不想让你们用数组，所以他锁死了空间限制，请注意一下*/