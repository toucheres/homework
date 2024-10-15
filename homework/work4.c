//4: 加与减（基础）
//描述
//你有三个数，分别为 a，b，c。
//
//如果这三个数满足如下条件：
//
//a
//+
//b
//=
//c
//a + b = c
//a
//−
//b
//=
//c
//a−b = c
//那么这三个数就很 nice。
//
//此时，你需要判断这三个数满足哪类 nice。
//
//若
//a
//+
//b
//=
//c
//a + b = c，则输出 +
//
//若
//a
//−
//b
//=
//c
//a−b = c，则输出 -
//
//输入
//第一行一个整数 t（
//1
//≤
//t
//≤
//162
//1≤t≤162）表示有 t 组数据。
//
//接下来 t 行，每行三个数 a，b，c （
//1
//≤
//a
//,
//b
//≤
//9
//1≤a, b≤9,
//−
//8
//≤
//c
//≤
//18
//−8≤c≤18），数据保证 a，b，c 一定 nice。
//
//输出
//For each test case, output either + or -on a new line, representing the correct equation.
//
//样例
//输入
//
//11
//1 2 3
//3 2 1
//2 9 - 7
//3 4 7
//1 1 2
//1 1 0
//3 3 6
//9 9 18
//9 9 0
//1 9 - 8
//1 9 10
//输出
//
//+
//-
//-
//+
//+
//-
//+
//+
//-
//-
//+
//提示
//请从标准输入读入数据，将结果输出到标准输出。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int j = 0;
//	int k = 0;
//	int h = 0;
//	int time = 0;
//	scanf("%d", &time);
//	for (int i = 0; i < time; i++)
//	{
//		scanf("%d%d%d", &j, &k,&h);
//		if (j+k==h)
//		{
//			printf("+\n");
//		}
//		else
//		{
//			printf("-\n");
//		}
//
//	}
//	return 0;
//}