#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
//int main()
//{
//	int start = 0;
//	int end = 0;
//	scanf("%d %d", &start, &end);
//
//	int countA = 0;
//	int countB = 0;
//
//	for (int tp = start; tp <= end; tp++)
//	{
//		if (tp == 0)
//		{
//			countB++;
//			continue;
//		}
//		int count0 = 0;
//		int count1 = 0;
//
//		int tptp = tp;
//		while (tptp)
//		{
//			if (tptp % 2== 0)
//			{
//				count0++;
//			}
//			else
//			{
//				count1++;
//			}
//			tptp /= 2;
//		}
//		if (count0 > count1)
//		{
//			countB++;
//		}
//		else
//		{
//			countA++;
//		}
//	}
//	printf("%d %d", countA, countB);
//	return 0;
//}