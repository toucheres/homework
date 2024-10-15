

//3: 提取指定的位
//描述
//
//
//
//输出一个三位正整数的指定位
//
//
//
//输入
//
//
//
//输入是2个整数，以空格分隔。其中，第一个是一个3位正整数，第2个是输出的位（3代表百位，2代表十位，1代表个位）。
//
//
//
//输出
//
//
//
//如果输入的数据不符合要求输出字符串“illegal”；否则按指定的要求输出1位十进制数。需要以换行结尾。
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
//123 3
//
//123 2
//
//123 1
//
//123 4
//
//22  2
//
//1
//
//2
//
//3
//
//illegal
//
//illegal
#/*define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int input = 0;
	int time = 0;
	scanf("%d%d", &input,&time);
	if (input < 100 || input>999 || time > 3 || time < 1)
	{
		printf("illegal");
		return 0;
	}
	for (int i = time; i > 1; i--)
	{
		input /= 10;
	}
	printf("%d", input % 10);

}*/