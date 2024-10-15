//5: 判断正整数有多少位
//描述
//输入一个正整数，判断十进制有多少位。
//
//输入
//第1行是一个整数n，表示随后有n组数据。
//每组数据占一行，包含一个正整数。
//
//输出
//对于每一组数据，输出此正整数包含的十进制位数。
//
//样例
//输入
//
//3
//1
//10
//100
//输出
//
//1
//2
//3
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int j = 0;
	int k = 1;
	int time = 0;
	scanf("%d", &time);
	for (int i=0;i<time;i++)
	{
		scanf("%d", &j);
		while (j /= 10)
		{
			k++;
		}
		printf("%d\n", k);
		k = 1;
	}

}