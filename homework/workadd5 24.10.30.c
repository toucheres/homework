//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<math.h>
//
//int isit(int t)
//{
//	int sum = 0;
//	for (int tp = 1; tp < t; tp++)
//	{
//		if (t % tp == 0)
//		{
//			sum += tp;
//		}
//	}
//	if (sum == t)
//	{
//		return 1;
//	}
//	return 0;
//	
//}
//int main()
//{
//
//	int line = 0;
//	scanf("%d", &line);
//	while (line--)
//	{
//		int num = 0;
//		scanf("%d", &num);
//		for (int i = 1; i <= num; i++)
//		{
//			if (isit(i))
//			{
//				printf("%d ", i);
//			}
//		}
//		printf("\n");
//		
//
//	}
//	return 0;
//}