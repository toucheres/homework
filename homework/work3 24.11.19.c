#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int resfenzi = 0;
//int resfenmu = 0;
//
//int getmaxgongyueshu(int m, int n)
//{
//	if (m % n == 0)
//		return n;
//	else
//		return getmaxgongyueshu(n, m % n);
//}
//
//void calcu(int fenzi1,int fenmu1,int fenzi2,int fenmu2)
//{
//	if (fenzi1 == 0 || fenzi2 == 0)
//	{
//		resfenzi = fenzi1 + fenzi2;
//		resfenmu = fenmu1 + fenmu2;
//		return;
//	}
//
//	resfenzi = fenzi1 * fenmu2 + fenzi2 * fenmu1;
//	resfenmu = fenmu1 * fenmu2;
//}
//
//void huajian() 
//{
//	int dei = getmaxgongyueshu(resfenmu,resfenzi);
//	resfenzi /= dei;
//	resfenmu /= dei;
//	//if (resfenzi % resfenmu ==0)
//	//{
//	//	resfenzi = resfenzi / resfenmu;
//	//	resfenmu = 0;
//	//}
//}
//
//int main()
//{
//	int line = 0;
//	scanf("%d",&line);
//
//
//
//	while (line--)
//	{
//		int fenzi = 0;
//		int fenmu = 0;
//		scanf("%d/%d",&fenzi,&fenmu);
//		calcu(fenzi,fenmu,resfenzi,resfenmu);
//	}
//	huajian();
//
//	if(resfenmu!=1)
//		printf("%d/%d",resfenzi,resfenmu);
//	else
//	{
//		printf("%d", resfenzi);
//	}
//
//	return 0;
//}
//
//3: 分数求和
//描述
//输入
//n
//n 个分数并对他们求和，并用最简形式表示。所谓最简形式是指：分子分母的最大公约数为
//1
//1；若最终结果的分母为
//1
//1，则直接用整数表示。
//
//如：5 / 6、10 / 3均是最简形式，而3 / 6需要化简为1 / 2, 3 / 1需要化简为3。
//
//分子和分母均不为
//0
//0，也不为负数。
//
//输入
//第一行是一个整数
//n
//n，表示分数个数，
//1
//≤
//n
//≤
//10
//1≤n≤10；
//接下来
//n
//n 行，每行一个分数，用 p / q 的形式表示，不含空格，p，q均不超过
//10
//10。
//
//输出
//输出只有一行，即最终结果的最简形式。若为分数，用 p / q 的形式表示。
//
//样例
//输入
//
//2
//1 / 2
//1 / 3
//输出
//
//5 / 6