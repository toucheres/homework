#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	while (line--)
//	{
//		_Bool arr[1000] = { 0 };
//		int max = 1;
//		int tpnum = -1;
//		while (tpnum)
//		{
//			scanf("%d", &tpnum);
//			max = tpnum > max ? tpnum : max;
//			arr[tpnum] = true;
//		}	
//		if (max != 1)
//		{
//			for (int tp = max; tp != 0; tp--)
//			{
//				if (arr[tp] == false)
//				{
//					printf("%d\n", tp);
//				}
//			}
//		}
//		else
//		{
//			printf("1\n");
//		}
//	}
//
//	return 0;
//}


//3: 找出丢失的数
//描述
//现有一堆由
//1
//,
//2
//,
//3
//,
//.
//.
//.
//,
//n
//1, 2, 3, ..., n
//(
//	n
//	≥
//	1
//)
//(n≥1)组成的共
//n
//−
//1
//n−1 个数，其中丢失了一个数
//k
//k，请找出这个数。
//
//输入
//第一行
//m
//m，表示测试数据的组数。
//
//接下来
//m
//m行，每行即为一组测试样例。每组样例有
//n
//n
//(
//	n
//	≤
//	1000
//)
//(n≤1000)个正整数，其中最后一个整数为
//0
//0，表示结束，不参与计算。
//
//输出
//对每组数据，输出
//1
//1至
//n
//n中缺失的那个整数。
//
//样例
//输入
//
//2
//2 3 1 5 0
//1 2 6 4 5 7 0
//输出
//
//4
//3