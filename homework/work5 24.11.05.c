#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	while (line--)
//	{
//		double money = 0.0;
//		scanf("%lf", &money);
//		int tpmoney = 100 * money;
//
//		int yuan_100 = 0;
//		int yuan_50 = 0;
//		int yuan_10 = 0;
//		int yuan_5 = 0;
//		int yuan_2 = 0;
//		int yuan_1 = 0;
//		int jiao_1 = 0;
//		int fen_5 = 0;
//		int fen_1 = 0;
//
//		yuan_100 = tpmoney / 10000;
//		tpmoney %= 10000;
//
//		yuan_50 = tpmoney / 5000;
//		tpmoney %= 5000;
//
//		yuan_10 = tpmoney / 1000;
//		tpmoney %= 1000;
//
//		yuan_5 = tpmoney / 500;
//		tpmoney %= 500;
//
//		yuan_2 = tpmoney / 200;
//		tpmoney %= 200;
//
//		yuan_1 = tpmoney / 100;
//		tpmoney %= 100;
//
//		jiao_1 = tpmoney / 10;
//		tpmoney %= 10;
//
//		fen_5 = tpmoney / 5;
//		tpmoney %= 5;
//
//		fen_1 = tpmoney;
//
//		printf("%d,%d,%d,%d,%d,%d,%d,%d,%d\n", yuan_100, yuan_50, yuan_10, yuan_5, yuan_2, yuan_1, jiao_1, fen_5, fen_1);
//	}
//	return 0;
//}

//
//5: 纸币支付问题
//描述
//现有1分、5分、1角、1元、2元、5元、10元、50元、100元面额的人民币各若干。现要求从键盘读入任意一个金额A（以元为单位，如345.78），然后显示支付该金额（A）需要的各种面额人民币的数量。即，显示100元、50元、10元、5元、2元、1元、1角、5分、1分这9种面额的人民币各需多少张，各种不用面值的人民币之间用逗号分隔。
//
//输入
//第1行是一个整数n，表示随后有n组数据。每组数据占一行。
//
//输出
//对每组数据输出显示支付该金额（A）需要的各种面额人民币的数量，并换行。
//
//样例
//输入
//
//2
//221.5
//201
//输出
//
//2, 0, 2, 0, 0, 1, 5, 0, 0
//2, 0, 0, 0, 0, 1, 0, 0, 0
//示例程序
//#include <stdio.h>
//
//int main() {
//	int n;
//	float A = 0;
//
//	scanf("%d", &n);  // 有n组数据
//	for (int i = 0; i < n; i++) {
//		int m100 = 0, m50 = 0, m10 = 0, m5 = 0, m2 = 0, m1 = 0, m_10 = 0, m_5 = 0, m_1 = 0;
//
//		scanf("%f", &A);  // 读入一个整数
//
//		// 计算
//
//		printf("%d,%d,%d,%d,%d,%d,%d,%d,%d\n", m100, m50, m10, m5, m2, m1, m_10, m_5, m_1);  // 输出计算结果
//	}
//
//	return 0;
//}