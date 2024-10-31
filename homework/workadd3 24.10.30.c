//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d",&input);
//
//	int tpinput = input;
//	int arr[10] = {0};
//	int weishu = 0;
//
//	while (input)
//	{
//		int tpnum = 1;
//		int mi = 0;
//
//		while (tpnum*2<=input)
//		{
//			mi++;
//			tpnum *= 2;
//		}
//
//		arr[weishu] = mi;
//		input -= tpnum;
//		weishu++;
//
//
//	}
//	
//	printf("%d=",tpinput);
//	for(int j=0;j<weishu;j++)
//	{
//		printf("2^%d", arr[j]);
//		if (j != weishu-1)
//		{
//			printf("+");
//		}
//	}
//
//	return 0;
//}