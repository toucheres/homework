//1: 成绩判定（程序设计基础第1次月测编程1）
//描述
//输入语文，数学，英文三门科目的考试成绩（成绩在0到100之间），求出这一组成绩的平均分
//a
//v
//g
//avg，然后根据平均分将成绩归类为相应的等级。
//
//80
//⩽
//a
//v
//g
//⩽
//100
//：
//A
//80⩽avg⩽100：A
//60
//⩽
//a
//v
//g
//<
//	80
//	：
//	B
//	60⩽avg < 80：B
//	40
//	⩽
//	a
//	v
//	g
//	<
//	60
//	：
//	C
//	40⩽avg < 60：C
//	20
//	⩽
//	a
//	v
//	g
//	<
//	40
//	：
//	D
//	20⩽avg < 40：D
//
//	0
//	⩽
//	a
//	v
//	g
//	<
//	20
//	：
//	E
//	0⩽avg < 20：E
//	输入
//	输入语文，数学，英文三门成绩，用空格隔开。
//
//	输出
//	输出这行整数所对应的等级。
//
//	样例
//	输入
//
//	65 72.3 85.6
//	输出
//
//	B
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main()
//{
//	double Eng = 0;
//	double Math = 0;
//	double Chinese = 0;
//	scanf("%lf",&Eng);
//	scanf("%lf",&Math);
//	scanf("%lf",&Chinese);
//	double x = (Eng + Chinese + Math)/3;
//	if (x >= 80)
//		printf("A");
//	else if (x >= 60)
//		printf("B");
//	else if (x >= 40)
//		printf("C");
//	else if (x >= 20)
//		printf("D");
//	else if (x >= 0)
//		printf("E");
//	return 0;
//}
//
//
