#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		char tpc = '0';
//		tpc = getchar();
//		if (tpc == '\n')
//		{
//			break;
//		}
//		if (tpc>='A'&&tpc<='Z')
//		{
//			printf("%c", 'A' + 26 - (tpc - 'A'+1));
//		}
//		else
//		{
//			printf("%c",tpc);
//		}
//	}
//}

//2: 字符编码
//描述
//
//
//
//将给定字符串中的大写英文字母按以下对应规则替换：
//
//原字母
//
//对应字母
//
//A
//
//Z
//
//B
//
//Y
//
//C
//
//X
//
//D
//
//W
//
//…
//
//…
//
//X
//
//C
//
//Y
//
//B
//
//Z
//
//A
//
//
//
//输入
//
//
//
//在一行中给出一个不超过80个字符的字符串，以回车结束。
//
//
//
//输出
//
//
//
//在一行中给出替换完成后的字符串，非大写字母的字符按原样输出。
//
//
//
//样例
//
//输入
//
//输出
//
//Only the 11 CAPItaL LeTtERS are   replaced.
//
//Lnly the 11 XZKRtaO OeGtVIH are   replaced.
//
