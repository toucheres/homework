#define _CRT_SECURE_NO_WARNINGS

long long getjiec2(int tg)
{
	if (tg == 0 || tg == 1)
	{
		return (long long)1;
	}
	long long sum = 1;
	for (long long j = tg; j != 0; j--)
	{
		sum %= 1000000;
		sum *= (j % 1000000);
		sum %= 1000000;
	}
	return sum;

}

#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	while (line--)
//	{
//		long long num = 0;
//		scanf("%lld", &num);
//
//
//		if (num != 0 && num != 1)
//		{
//			long long sum = 0;
//			for (long long j = num; j != 0; j--)
//			{
//				sum %= 1000000;
//				sum += (getjiec2(j) % 1000000);
//				sum %= 1000000;
//			}
//			printf("%lld\n", sum);
//		}
//		else
//		{
//			printf("1\n");
//		}
//
//	}
//	return 0;
//}

//1: 阶乘求和
//描述
//
//
//
//有如下定义：
//
//
//
//求f(n)。其中i!是阶乘运算，mod是取模运算。
//
//
//
//输入
//
//
//
//第一行为正整数k(1 <= k < 100)，表示随后有k组数据。每组数据占一行，为一个正整数n，(1 <= n <= 1000000)。
//
//
//
//	输出
//
//
//
//	对每组数据n，输出f(n)，并换行。
//
//
//
//	样例
//
//
//
//	输入
//
//	输出
//
//	3
//
//	1
//
//	5
//
//	10
//
//	1
//
//	153
//
//	37913
//
//
//
//
//
