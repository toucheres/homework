#define _CRT_SECURE_NO_WARNINGS

long long getjiec(int tg)
{
	long long sum = 1;
	for (int j = tg; j != 0; j--)
	{
		sum *= j;
	}
	return sum;

}

#include<stdio.h>
//int main()
//{
//	long long sum = 0;
//	int n = 0;
//
//	scanf("%d", &n);
//	for (int i = n; i != 0; i--)
//	{
//		sum += getjiec(i);
//	}
//	printf("%lld",sum);
//
//	return 0;
//}

//3: 1!+ 2!+ … + n!
//描述
//
//输入一个正整数n， 求sum = 1!+ 2!+ … + n!的值并输出。
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
//1!+ 2!+ … + n!的和sum。可以确定sum能用32位有符号整数表示。
//
//
//
//样例
//
//输入                                 输出
//
//3                                    9
//
