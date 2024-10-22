#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	for (int i = 0; i < line; ++i)
//	{
//		int year = 0;
//		scanf("%d", &year);		
//		if(year<=0)
//		{
//			printf("no\n");
//			continue;
//		}
//		if (year % 100 == 0)
//		{
//			if (year % 400 == 0)
//			{
//				printf("yes\n");
//				continue;
//			}
//			else
//			{
//				printf("no\n");
//				continue;
//			}
//		}
//		else
//		{
//			if (year % 4 == 0)
//			{
//				printf("yes\n");
//				continue;
//			}
//			else
//			{
//				printf("no\n");
//				continue;
//			}
//		}
//
//	}
//	return 0;
//}

//3: 判断闰年
//描述
//输入一个整数表示年份，判断此年份是不是闰年
//
//输入
//第1行是一个整数n，表示随后有n组数据。
//
//每组数据占一行，包含一个整数，表示年份。
//
//输出
//对于每一组数据，若是合理年份（大于0）且是闰年，则输出yes，否则输出no。
//
//样例
//输入
//
//2
//2016
//2017
//输出
//
//yes
//no