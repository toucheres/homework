#include <stdio.h>


void p(int num)
{
	if (num <= 9)
		printf("%d", num);
	else if (num == 10)
		printf("A");
	else if (num == 11)
		printf("B");
	else if (num == 12)
		printf("C");
	else if (num == 13)
		printf("D");
	else if (num == 14)
		printf("E");
	else
		printf("F");
}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//
//	int num = 0;
//	while (line--)
//	{
//		scanf("%d", &num);
//		int loop = 10;
//		while (loop -= 2)
//		{
//			if (loop != 8)
//			{
//				printf(" ");
//			}
//
//			int tpnum = num / 16;
//
//			int tpmod = tpnum % 16;
//			p(tpmod);
//
//			int mod = num % 16;
//			p(mod);
//
//			num /= 16;
//			num /= 16;
//		}
//		printf("\n");
//	}
//}

//1: 打印内存
//描述
//在x86架构下，一个无符号整数（unsigned int）通常是以4个字节（32位）小端序列的形式存储的，其中每个字节用两个十六进制数表示。
//
//要求：给出一个无符号整数，输出它在内存中的存储形式。
//
//小端存储：数据的低位存放在低地址空间，数据的高位存放在高地址空间
//
//例如：无符号十进制整数：2024，其十六进制为：0x000007E8，在内存中的存储形式为：E8 07 00 00
//                                                                       7  5  3  1
//具体如下图所示：
//
//wechat_20240423_174241_764.png
//
//输入
//输入第一行为
//n
//n，表示有
//n
//n 个无符号整数。
//接下来
//n
//n 行表示输入的无符号十进制数。
//
//输出
//逐行输出
//n
//n 个十进制数的内存存储形式。
//十六进制数统一采用大写形式。
//
//样例
//输入
//
//2
//2024
//20240328
//输出
//
//E8 07 00 00
//C8 D7 34 01