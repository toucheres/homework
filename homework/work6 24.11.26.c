#include <stdio.h>
#include <string.h>

int mystrstr(char a[], char b[])
{
	int i, j, k, lena, lenb;
	lena = strlen(a);
	lenb = strlen(b);
	for (i = 0; i <= lena - lenb; i++)
	{
		for (j = 0, k = i; j < lenb && k < lena; j++, k++)
		{
			if (a[k]!= b[j])
				break;
		}
		if (j == lenb)
			return i;
	}
	return -1;
}

//int main()
//{
//	char str1[500];
//	char str2[500];
//	scanf("%s", str1);
//	scanf("%s", str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	printf("%d", mystrstr(str1, str2));
//	
//	return 0;
//}

//6: 设计strstr函数
//描述
//C语言中有一个函数strstr。我们编写一个类似功能的函数，mystrstr
//
//int mystrstr(char a[], char b[]);
//作用是查找字符串a中出现的第一个b串的下标，如果没有找到，返回 - 1。
//
//输入
//分别输入两个字符串a，b，分别占一行。字符串长度不超过500个字符。
//
//输出
//字符串a中出现的第一个b串的下标。
//
//样例
//输入
//
//abca
//bc
//输出
//
//1