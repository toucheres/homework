//5: sum（基础）
//描述
//给你三个数，判断其中一个数是不是另外两个数的和。
//
//输入
//第一行一个整数 t（
//1
//≤
//t
//≤
//9261
//1≤t≤9261）表示有 t 组数据。
//
//接下来 t 行，每行三个数 a，b，c（
//0
//≤
//a
//,
//b
//,
//c
//≤
//20
//0≤a, b, c≤20）。
//
//输出
//对于每组数据，判断这三个数中其中一个数是不是另外两个数的和。若是，则输出”YES“；否则，输出”NO“。
//
//样例
//输入
//
//7
//1 4 3
//2 5 8
//9 11 20
//0 0 0
//20 20 20
//4 12 3
//15 7 8
//输出
//
//YES
//NO
//YES
//YES
//NO
//NO
//YES
//提示
//In the first test case,
//1
//+
//3
//=
//4
//1 + 3 = 4.
//
//In the second test case, none of the numbers is the sum of the other two.
//
//In the third test case,
//9
//+
//11
//=
//20
//9 + 11 = 20.
//
//请从标准输入读入数据，将结果输出到标准输出。

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (n--)
//	{
//		scanf("%d", &a); 
//		scanf("%d", &b); 
//		scanf("%d", &c);
//		if (a+b==c||a+c==b||b+c==a)
//		{
//			printf("YES\n");
//			continue;
//		}
//		printf("NO\n");
//	}
//}