#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	long long line = 0;
//	scanf("%lld", &line);
//	if (line > 20||line<1)
//	{
//		printf("Input Error");
//		return 0;
//	}
//
//	int arr[21] = {0};
//	int tparr[21] = {0};
//	arr[0] = 1;
//	
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf("%d,", arr[j]);
//		}
//		printf("\n");
//
//		for (int j = 0; j < i + 2; j++)
//		{
//			int left = 0;
//			int right = 0;
//
//			if (j == 0)
//				left = 0;
//			else
//				left = arr[j - 1];
//
//			if (j == i+1)
//				right = 0;
//			else
//				right = arr[j];
//
//			tparr[j] = right + left;
//		}
//		memcpy(arr, tparr, sizeof(tparr));
//	}
//
//	int i = 0;
//	return 0;
//}

//6: N 行直角杨辉三角
//描述
//
//输入一个不大于 20 的正整数 n，输出 n 行直角杨辉三角。
//
//（提示：直角杨辉三角的每一行的第一个数和最后一个数均为 1，其余数字均为其正上方与左上方数字之和）
//
//
//
//输入
//
//一个不大于 20 的正整数。
//
//
//
//输出
//
//当输入不符合题意时，输出 Input Error；否则输出输出 n 行直角杨辉三角。
//
//（注意：每行输出的数字，用英文格式下的逗号两两相隔）
//
//
//
//样例 1
//
//输入                                             输出
//
//1                                                   1,
//
//
//
//样例 2
//
//输入                                             输出
//
//4                                                   1,
//
//1, 1,
//
//1, 2, 1,
//
//1, 3, 3, 1,
//
