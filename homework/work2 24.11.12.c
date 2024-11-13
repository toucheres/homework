#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>

//int main()
//{
//	char hashTable[255];
//	char arr[255];
//	char arr2[255];
//	scanf("%s", arr);
//
//	int index = 0;
//	int index2 = 0;
//	while (arr[index] != '\0')
//	{
//		if (hashTable[arr[index]] != 1)
//		{
//			hashTable[arr[index]] = 1;
//			arr2[index2] = arr[index];
//			index2++;
//		}
//		index++;
//	}
//	arr2[index2] = '\0';
//	printf("%s", arr2);
//
//	return 0;
//}
//2: 数组去重
//描述
//
//对一组连续的字符串（只包含数字与字符）去除重复的字符, 并输出去重后的字符串（字符之间的相对位置不能改变）
//
//
//
//输入
//
//从键盘输入一组字符串（只包含字母与数字）。
//
//
//
//输出
//
//去重后的字符串
//
//
//
//样例
//
//输入	输出
//11233ABaaabbcC
//123ABabcC
//