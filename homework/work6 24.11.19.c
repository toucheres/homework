#include <stdio.h>

int jiecheng(int n) 
{
	if(n==1||n==0)
		return 1;
	else
		return n*jiecheng(n-1);
}

//int main() 
//{
//	int n;
//	while (1) 
//	{
//		if(scanf("%d", &n) == EOF) break;
//		printf("%d\n",jiecheng(n));
//	}
//	return 0;
//}
//6: 递归实现n!
// 
//题目描述
//
//请用递归函数的形式计算阶乘n!的值(程序中不能出现循环)
//
//
//
//输入格式：
//
//
//
//多组数据
//
//每组数据输入一个整数n(n <= 20)
//
//
//
//输出格式：
//输出n!的值
//
//
//
//输入
//
//4
//
//5
//
//
//
//输出
//
//24
//
//120
//
//
//
//提示：在没有给出几组数据时，默认以EOF结尾，即读入函数的返回值 == EOF时停止输入