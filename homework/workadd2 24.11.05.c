#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//
//#pragma comment(linker, "/STACK:102400000,102400000")
//
//long long min(long long a, long long b)
//{
//	return a > b ? b : a;	
//}
//
//long long getmin(long long sum)
//{
//	if (sum == 0)
//	{
//		return 0;
//	}
//
//	if (sum == 1)
//	{
//		return 1;
//	}
//
//	if (sum % 2 == 0)
//	{
//		return 1 + getmin(sum/2);
//	}
//	else
//	{
//		return 1 + min(getmin(sum+1),getmin(sum-1));
//	}
//}
//
//int main()
//{
//	long long num = 0;
//	scanf("%lld", &num);
//	printf("%lld",getmin(num));
//	return 0;
//}

#include <stdio.h>

long long minStepsToZero(long long X) {
    long long steps = 0; // 初始化步骤数

    while (X > 0) {
        if (X % 2 == 0) {
            X /= 2; // 如果是偶数，直接除以2
        }
        else {
            // 如果是奇数，决策加1或减1，选择更优的方案
            if (X == 1) {
                X = 0; // 直接到0
            }
            else {
                // 奇数情况下考虑加1或者减1
                // 选择更接近偶数的权衡
                if ((X & 2) == 0 || X == 3) {
                    X--; // 减少1
                }
                else {
                    X++; // 增加1
                }
            }
        }
        steps++; // 增加步数
    }

    return steps; // 返回总步数
}
//
//int main() {
//    long long num;
//    scanf("%lld", &num);
//    printf("%lld\n", minStepsToZero(num));
//    return 0;
//}

//题目描述
//—— “一蓑烟雨任平生”
//
//在无穷无尽的思念，回忆，痛苦中，小
//X
//X 终于超凡脱俗了。他有一个心魔指数
//X
//X，若
//X
//X 是偶数，小
//X
//X 会令其除以
//2
//2（代表着见面分一半）；若
//X
//X 是奇数，小
//X
//X 会让他加上
//1
//1 或减去
//1
//1（？）。小
//X
//X 是个不聪明的人，需要你告诉他
//X
//X 最少经过几次操作会变成
//0
//0
//
//输入格式
//一行一个整数
//X
//X（
//X
//<
//    2
//    64
//    −
//    1
//    X < 2
//    64
//    −1)
//
//    输出格式
//    一行一个整数，代表着
//    X
//    X 变为
//    0
//    0 的最少步数
//
//    输入样例
//    7
//
//    输出样例
//    5
//
//    样例解释
//    7->8->4->2->1->0
