#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int isgapyear(int ye)
//{
//	if (ye % 400 == 0)
//	{
//		return 1;
//	}
//	if (ye % 4 == 0 && ye % 100 != 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int getdaynumofyear(int ye)
//{
//	if (isgapyear(ye))
//	{
//		return 366;
//	}
//	return 365;
//}
//
//int getdaynumofmouth(int ye,int mot)
//{
//	if (mot == 1 || mot == 3 || mot == 5 || mot == 7 || mot == 8 || mot == 10 || mot == 12)
//	{
//		return 31;
//	}
//	if (mot == 4 || mot == 6 || mot == 9 || mot == 11 )
//	{
//		return 30;
//	}
//	if (mot == 2)
//	{
//		if (isgapyear(ye))
//		{
//			return 29;
//		}
//		else
//		{
//			return 28;
//		}
//	}
//	
//	return 0;
//}
//
//int main()
//{
//	int year = 1970;
//	int month = 1;
//	int day = 1;
//	int x = 0;
//	scanf("%d", &x);
//	
//	while (1)
//	{
//		if (x >= getdaynumofyear(year))
//		{
//			x -= getdaynumofyear(year);
//			year++;			
//		}
//		else
//		{
//			break;
//		}
//	}
//	while (1)
//	{
//		if (x >= getdaynumofmouth(year, month))
//		{
//			x -= getdaynumofmouth(year, month);
//			month++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	day += x;
//
//	//printf("%d %d %d",year,month,day);
//	printf("%d-", year);
//	if (month < 10)
//	{
//		printf("0");
//	}
//	printf("%d-", month);
//	if (day < 10)
//	{
//		printf("0");
//	}
//	printf("%d", day);
//	return 0;
//}

//1: 那个什么日（分支）
//描述
//注：在代码实现上，本题需使用至少一个 switch 判断语句。
//
//众所周知在一场那个什么日举办的那个什么比赛中，那个什么出题人在那个什么第一题中出了一个那个什么模拟题，导致无数那个什么人因此痛失那个什么奖。于是 Vuler：“我深有那个什么体会”，遂撰此题。
//
//UNIX 时间戳从 1970 年 1 月 1 日开始，到 2038 年 1 月 19 日（3 时 14 分 7 秒）结束。
//
//定义“第
//x
//x 个那个什么日”为从 1970 年 1 月 1 日之后
//x
//x 天的日期，求第
//x
//x 个那个什么日。
//
//注：当一个年份能被 4 整除但是不能被 100 整除时为闰年，本年 2 月有 29 天而不是 28 天。特别地，能被 400 整除的年份必定为闰年。
//
//输入
//仅一行，一个整数
//x
//x。
//
//输出
//仅一行，一个字符串表示第
//x
//x 个那个什么日的日期。
//
//字符串格式为 年 - 月 - 日，且保留前导 0。
//
//样例
//输入 1：
//
//1
//输出 1：
//
//1970 - 01 - 02
//输入 2：
//
//19631
//输出 2：
//
//2023 - 10 - 01
//提示
//数据范围：
//0
//≤
//x
//≤
//1
//0
//9
//0≤x≤10
//9
//。
//
//请注意，一般的计算机 1 秒内只能处理大约
//2
//×
//1
//0
//8
//∼
//7
//×
//1
//0
//8
//2×10
//8
//∼7×10
//8
//次运算。
//
//你可以使用 break; 语句在循环的任何时候跳出距离此语句最内层的循环。
//
//请从标准输入读入数据，将结果输出到标准输出。