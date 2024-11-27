#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//
//int tranr(int num,int r)
//{
//	if (num < r)
//	{
//		return num;
//	}
//	else
//	{
//		return num % r + 10 * tranr(num / r, r);
//	}
//}
//
//int judeWave(int num)
//{
//	if (num < 10)
//	{
//		return 1;
//	}
//	int arr[8];
//
//	int weishu = 0;
//	for (weishu; num; weishu++)
//	{
//		arr[weishu] = num % 10;
//		num /= 10;
//	}
//
//
//	int flag = 1;
//	for (int index1 = 0; index1 + 2 < weishu; index1++)
//	{
//		if (arr[index1] != arr[index1 + 2])
//			flag = 0;
//	}
//
//	for (int index2 = 1; index2 + 2 < weishu; index2++)
//	{
//		if (arr[index2] != arr[index2 + 2])
//			flag = 0;
//	}
//
//
//	if (flag == 1)
//		return 1;
//	return 0;
//}
//
//int judedoubeWave(int num,int rlow,int rhig )
//{
//	int numofwave = 0;
//	for (int i = rlow; i <= rhig; i++)
//	{
//		if (judeWave(tranr(num, i)))
//			numofwave++;
//	}
//	if (numofwave >= 2)
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int rlow = 0;
//	int rhig = 0;
//	int numlow = 0;
//	int numhig = 0;
//	scanf("%d%d%d%d",&rlow,&rhig,&numlow,&numhig);
//
//	int flag2 = 0;
//	for (int i = numlow; i <= numhig; i++)
//	{
//		if (judedoubeWave(i, rlow, rhig))
//		{
//			flag2 =1;
//			printf("%d\n",i);
//		}
//	}
//	if (!flag2)
//	{
//		printf("NULL");
//	}
//	return 0;
//}

//2: 波浪数
//描述
//波浪数是在一对不同数字之间交替转换的数，如
//1212121
//1212121。特别地，只有一位的数也算作波浪数，例如
//1
//1。
//
//双重波浪数则是指在至少两种进制下都是波浪数的数。
//
//如十进制数
//191919
//191919 是一个十进制下的波浪数。它对应的十一进制数
//121212
//121212 也是一个波浪数。所以十进制数
//191919
//191919 是一个双重波浪数。
//
//你的任务就是在指定范围内找出所有双重波浪数。
//
//输入
//单独一行包含四个用空格隔开的十进制整数
//m
//,
//n
//,
//L
//,
//R
//m, n, L, R。
//
//[
//	m
//		,
//		n
//]
//[m, n] 表示应当考虑的进制的范围，
//[
//	L
//		,
//		R
//]
//[L, R] 表示应当考虑的数字的范围。
//
//其中，
//2
//≤
//m
//≤
//n
//≤
//32
//2≤m≤n≤32，
//1
//≤
//L
//≤
//R
//≤
//1
//0
//7
//1≤L≤R≤10
//7
//
//
//输出
//从小到大以十进制形式输出指定范围内的指定重数的波浪数。一行输出一个数。
//
//如果没有，那么输出NULL。
//
//样例
//输入
//
//10 11 190000 960000
//输出
//
//191919
//383838
//575757
//767676
//959595
//输入
//
//10 11 7 9
//输出
//
//7
//8
//9