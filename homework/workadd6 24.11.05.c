﻿#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	while (line--)
//	{
//		float tpnum = 0;
//		scanf("%f", &tpnum);
//		printf("%d\n",(int)ceil(tpnum));
//	}
//	return 0;
//}
//
//6: 自信哥（回顾）
//题目描述
//作为一个非常自信的人，小
//X
//X 的优点是非常自信，他的确十分自信，以至于所有人都认为他是一个非常自信的人。有
//n
//n 个妹子，第
//i
//i 位对小
//X
//X 的喜爱度是浮点数
//a
//i
//a
//i
//​
//，而他总会认为这个妹子对他的喜爱值是此数的上取整
//
//输入：
//整数
//n
//n，之后有
//n
//n 个整数表示
//a
//i
//a
//i
//​
//
//
//输出：
//n
//n 行，每一行代表小
//X
//X 认为第
//i
//i 个妹子对他的喜爱值
//
//样例输入：
//3
//
//1.11 2.22 3.33
//
//样例输出：
//2
//3
//4
//
//提示
//n
//≤
//1
//0
//6
//,
//a
//i
//
//i
//n
//
//d
//o
//u
//b
//l
//e
//n≤10
//6
//, a
//i
//​
//in double
//因为出题人不想让你们用数组，所以他锁死了空间限制，请注意一下。