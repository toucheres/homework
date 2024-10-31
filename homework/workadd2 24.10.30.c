//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int flagde = 0;
//
//void turn(int* nu)
//{
//	if (*nu == 0)
//	{
//		return;
//	}
//
//	int tp = *nu;
//	int flag = 0;
//	if (tp < 0)
//	{
//		tp = 0 - tp;
//		flag = 1;
//	}
//
//	int arr[10] = { 0 };
//	int weishu = 0;
//	int tp2 = tp;
//	while (tp2 != 0)
//	{
//		arr[weishu] = tp2 % 10;
//		weishu++;
//		tp2 /= 10;
//	}
//
//
//	int sum = 0;
//	for (int i = 0; i < weishu; i++)
//	{
//		int tp3 = arr[i];
//		for (int j = weishu - i - 1; j > 0; j--)
//		{
//			tp3 *= 10;
//		}
//		sum += tp3;
//	}
//	if (flag == 1)
//	{
//		*nu = 0 - sum;
//		return;
//	}
//	*nu = sum;
//
//}
//
//void needturn(int* num)
//{
//	static int time = 0;
//	time++;
//	if (time % 3 == 0)
//	{
//		turn(num);
//	}
//
//	return;
//}
//
//
//void caculateplus(int* n, int op)
//{
//
//	*n = (*n) + op;
//}
//
//
//void caculateout(int* n, int op)
//{
//
//	*n = (*n) - op;
//}
//
//void caculatemutp(int* n, int op)
//{
//	*n = (*n) * op;
//}
//
//void caculatede(int* n, int op)
//{
//	if (op == 0)
//	{
//		flagde = 1;
//		printf("divided by zero\n");
//		return;
//	}
//	*n = (*n) / op;
//}
//
//
//int start = 0;
//
//int main()
//{
//
//
//	char tpc = " ";
//	int num = 0;
//
//	int operaternum = 0;
//	while (1)
//	{
//		//if (start == 1)
//		//{
//		//	printf("\n");
//		//}
//		//start = 1;
//
//		flagde = 0;
//		static int flag = 0;
//
//		if (flag == 1)
//		{
//			int tp4 = 0;
//			scanf("%d", &tp4);
//			flag = 0;
//		}
//
//		scanf("%c", &tpc);
//
//		while (tpc == '\n')
//		{
//			scanf("%c", &tpc);
//		}
//
//		switch (tpc)
//		{
//
//		case '+':
//		{
//			scanf("%d", &operaternum);
//			caculateplus(&num, operaternum);
//
//			break;
//		}
//		case '-':
//		{
//			scanf("%d", &operaternum);
//			caculateout(&num, operaternum);
//
//			break;
//		}
//		case '*':
//		{
//			scanf("%d", &operaternum);
//			caculatemutp(&num, operaternum);
//
//			break;
//		}
//		case '/':
//		{
//			scanf("%d", &operaternum);
//			caculatede(&num, operaternum);
//
//			break;
//		}
//		case '#':
//		{
//
//			return;
//			break;
//		}
//
//		default:
//			printf("invalid input");
//			flag = 1;
//			break;
//		}
//
//		needturn(&num);
//		if (flag == 0 && flagde == 0)
//		{
//			printf("%d", num);
//		}
//
//		//if (start == 1)
//		{
//			printf("\n");
//		}
//		start = 1;
//	}
//
//	return 0;
//}

