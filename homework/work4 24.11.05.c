#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d",&line);
//	while (line--)
//	{
//		char tpc = getchar();
//		while(tpc=='\n'||tpc==' ')
//			tpc = getchar();
//
//		if ('0' <= tpc && '9' >= tpc)
//		{
//			printf("number\n");
//		}
//		else if (('a'<=tpc&&tpc<='z')||('A' <= tpc && tpc <= 'Z'))
//		{
//			printf("letter\n");
//		}
//		else
//		{
//			printf("else\n");
//		}
//	}
//
//
//	return 0;
//}

//4: 判断字符类型
//描述
//
//
//
//输入一个字符，判断是哪类字符
//
//
//
//输入
//
//
//
//第1行是一个整数n，表示随后有n组数据。
//
//每组数据占一行，包含一个字符。
//
//
//
//输出
//
//
//
//对于每一组数据，
//
//若该字符是数字，则输出“number”；
//
//若该字符是字母，则输出“letter”
//
//否则输出“else”。
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
//3
//
//1
//
//a
//
//+
//
//
//
//number
//
//letter
//
//else