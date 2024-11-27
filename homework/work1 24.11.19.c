#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printr(int num,int r)
{
	if (num < r)
	{
		printf("%d", num);
		return;
	}
	else
	{
		printr(num/r,r);
		printf("%d",num%r);
	}
}

//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//
//	int num = 0;
//	int r = 0;
//
//	while (i--)
//	{
//		scanf("%d%d", &num, &r);
//		printr(num,r);
//		printf("\n");
//
//	}
//
//}

//1: 进制转换
//描述
//进制之间的转换非常有趣，例如将十进制的7转化为二进制为111，转化为三进制为21。
//
//请编写程序将十进制整数转换成指定进制。
//
//输入
//第1行是一个整数
//n
//n，表示随后有
//n
//n组数据。每组数据占一行，包括2个十进制数正整数
//a
//,
//b
//a, b，其中
//1
//≤
//a
//≤
//100000
//1≤a≤100000，
//2
//≤
//b
//≤
//10
//2≤b≤10，用空格隔开。
//
//输出
//对每组数据，将十进制整数
//a
//a转换为
//b
//b进制，并换行。
//
//样例
//输入
//
//2
//7 2
//8 3
//输出
//
//111
//22