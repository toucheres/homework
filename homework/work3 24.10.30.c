#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	while (line--)
//	{
//		int flag = 0;
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		scanf("%d", &a);
//		scanf("%d", &b);
//		scanf("%d", &c);
//		for (int i = 1000; i < 10000; i++)
//		{
//			if (i % a == 0 && (i + 1) % b==0 && (i + 2) % c==0)
//			{
//				printf("%d\n", i);
//				flag = 1;
//			}		
//
//
//		}
//
//		if (!flag)
//		{
//			printf("Impossible\n");
//		}
//	}
//
//
//	return 0;
//}
//


//
//3: 猜数字
//描述
//
//现在，我想让你猜一个数字x（1000 <= x <= 9999），它满足以下要求：
//（1）x % a = 0；
//（2）(x + 1) % b = 0；
//（3）(x + 2) % c = 0；
//其中1 <= a，b，c <= 100。
//给你a，b，c的值，你能告诉我x是多少吗？
//
//输入
//
//正整数n代表要测试的数据组数。然后输入n组测试数据，每组包含三个正整数分别代表a，b，c。
//
//
//
//输出
//
//符合条件的正整数x。若不存在输出Impossible
//
//
//
//样例
//
//输入                              输出
//
//2                                   Impossible
//
//3 3 3                             7424
//
//8 27 94