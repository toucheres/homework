#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int arr[999] = {0};
//	long long num = 0;
//	scanf("%lld",&num);
//	if (num == 0)
//	{
//		printf("Yes");
//		return 0;
//	}
//	int weishu = 0;
//	for (long long tp = num; tp; weishu++)
//	{
//		arr[weishu] = tp % 10;
//		tp /= 10;
//	}
//	for (int i = 0; i < weishu-1; i++)
//	{
//		if (arr[i] != arr[weishu - i -1])
//		{
//			printf("No");
//			return 0;
//		}
//	}
//	printf("Yes");
//	return 0;
//}

//4: 回文数
//描述
//
//程序中输入一个正整数，请判断他是否为回文数。
//
//
//
//提示：回文数：类似1234321，123321等这样，顺序和逆序相同的整数称为回文数。
//
//
//
//输入
//
//一个正整数n。
//
//
//
//输出
//
//若n是回文数，输出Yes，否则输出No。
//
//
//
//样例1
//
//输入             输出
//
//1231             No
//
//
//
//
//样例2
//
//输入            输出
//
//12321            Yes