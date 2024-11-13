#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int num = 0;
//	int tp = 0;
//
//	scanf("%d", &num);
//	for (int i = 0; i < num; i++)
//	{
//		scanf("%d", &tp);
//		arr[i] = tp;
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		int flag = 0;
//		for (int k = 0; k < num; k++)
//		{
//			if (k == i)
//				k++;
//			if (k >= num)
//				break;
//			if (arr[i] == arr[k])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d", arr[i]);
//		}
//	}
//
//	return 0;
//}