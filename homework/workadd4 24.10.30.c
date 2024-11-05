//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	while (line--)
//	{
//		int hig = 0;
//		scanf("%d", &hig);
//
//
//		if (hig == 1)
//		{
//			printf("*");
//			continue;
//		}
//
//		for (int i = 0; i < hig; i++)
//		{
//			if (i == 0)
//			{
//				for (int tp3 = 0; tp3 < hig - 1; tp3++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				printf("\n");
//				continue;
//			}
//
//			if (i == hig - 1)
//			{
//			
//				for (int tp = 0; tp < 2*hig-1; tp++)
//				{
//					printf("*");
//				}
//			
//				continue;
//			}
//
//			for (int tp2 = 0; tp2 < hig - i - 1; tp2++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (int tp4 = 0; tp4 < 2 * i -1; tp4++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//		}
//	}
//	printf("\n");
//	return 0;
//}



//4: 打印镂空等腰三角形（程序设计基础第1次月测编程3）
//描述
//图形的显示在很多实践中显得尤为重要，现需要输出等腰镂空三角形。给出等腰镂空三角形的层数
//n
//n，输出相应的等腰镂空三角形，例如
//n
//=
//5
//n = 5 时，等腰镂空三角形为：
//
//*
//**
//**
//**
//*********
//输入
//第1行是一个整数
//m
//m，表示随后有
//m
//m 组数据。每组数据占一行，等腰镂空三角形层数
//n
//n，其中
//2
//<
//	n
//	≤
//	20
//	2 < n≤20。
//
//	输出
//	对每组数据，输出由"*"组成
//	n
//	n 层等腰镂空三角形。
//
//	样例
//	输入
//
//	2
//	3
//	5
//
//	输出
//
//	*
//	**
//	*****
//	*
//	**
//	**
//	**
//	*********
//
