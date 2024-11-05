#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	char tp = 200;
//	while (tp!=EOF&&tp!='\n')
//	{
//		scanf("%c", &tp);
//		if (tp == '\n')
//		{
//			break;
//		}
//		if (tp >= 'A' && tp <= 'Z')
//		{
//			tp = tp + 32;
//		}
//		else if (tp >= 'a' && tp <= 'z')
//		{
//			tp = tp - 32;
//		}
//		else
//		{
//			printf("^_^");
//			continue;
//		}
//		printf("%c", tp);
//	}
//	end:
//	return 0;
//}


//5: 字符变化
//描述
//
//
//
//输入一个字符串，将其中的大写字母变成小写，小写字母变成大写，其它字符变成 ^ _ ^ 。
//
//
//
//输入
//
//
//
//一个字符串。
//
//
//
//输出
//
//
//
//按规则变化后的字符串。
//
//
//
//样例
//
//
//
//输入
//
//输出
//
//Da1Jia Hao2
//
//dA ^ _ ^ jIA ^ _ ^ hAO ^ _ ^