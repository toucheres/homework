//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 7; i++)
//	{
//		char Char = " ";
//		scanf("%c", &Char);
//		switch (Char)
//		{
//
//		case 'A':
//		{
//			printf("2");
//			break;
//		}
//		case 'B':
//		{
//			printf("2");
//			break;
//		}
//		case 'C':
//		{
//			printf("2");
//			break;
//		}
//		case 'D':
//		{
//			printf("3");
//			break;
//		}
//		case 'E':
//		{
//			printf("3");
//			break;
//		}
//		case 'F':
//		{
//			printf("3");
//			break;
//		}
//		case 'G':
//		{
//			printf("4");
//			break;
//		}
//		case 'H':
//		{
//			printf("4");
//			break;
//		}
//		case 'I':
//		{
//			printf("4");
//			break;
//		}
//		case 'J':
//		{
//			printf("5");
//			break;
//		}
//		case 'K':
//		{
//			printf("5");
//			break;
//		}
//		case 'L':
//		{
//			printf("5");
//			break;
//		}
//		case 'M':
//		{
//			printf("6");
//			break;
//		}
//		case 'N':
//		{
//			printf("6");
//			break;
//		}
//		case 'O':
//		{
//			printf("6");
//			break;
//		}
//		case 'P':
//		{
//			printf("7");
//			break;
//		}
//		case 'Q':
//		{
//			printf("7");
//			break;
//		}
//		case 'R':
//		{
//			printf("7");
//			break;
//		}
//		case 'S':
//		{
//			printf("7");
//			break;
//		}
//		case 'T':
//		{
//			printf("8");
//			break;
//		}
//		case 'U':
//		{
//			printf("8");
//			break;
//		}
//		case 'V':
//		{
//			printf("8");
//			break;
//		}
//		case 'W':
//		{
//			printf("9");
//			break;
//		}
//		case 'X':
//		{
//			printf("9");
//			break;
//		}
//		case 'Y':
//		{
//			printf("9");
//			break;
//		}
//		case 'Z':
//		{
//			printf("9");
//			break;
//		}
//		default:
//			break;
//		}
//	}
//
//
//	return 0;
//}
//
////2: 标准电话号码（程序设计基础第11周编程1）
////描述
////标准电话号码键盘包括从2 - 9的按键。2 - 9的每个数字都有三或四个与之关联的字母，如下表所示 :
////
////	数字 字母
////	2 ABC
////	3 DEF
////	4 GHI
////	5 JKL
////	6 MNO
////	7 PQRS
////	8 TUV
////	9 WXYZ
////
////	许多人觉得记住电话号码很困难，所以他们使用数字与字母的对应关系来产生对应电话号码的7个字母的单词，例如，某人的电话号码是6862377，按照上表的对应关系得到的7字母单词可以是NUMBERS。
////	请编写一个程序，当给定一个7个字母的单词时，输出这串字母所对应的电话号码。注意不要使用电话号码中的数字0和1。
////
////	输入
////	一个大写单词形如NUMBERS
////
////	输出
////	对应的号码形如6862377，结尾无空行和空格
////
////	样例
////	输入
////
////	NUMBERS
////	输出
////
////	6862377