#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>

int hash(int val)
{
	if (val < 0)
	{
		return val + 201;
	}
	return val;
}

//int main()
//{
//	int hashtable[201] = { 0 };
//	int numofnudouble = 0;
//	int num = 0;
//	scanf("%d",&num);
//
//	int tp = 0;
//	for (int i = 0; i < num; i++)
//	{
//		scanf("%d",&tp);
//		if (!hashtable[hash(tp)])
//		{
//			hashtable[hash(tp)]++;
//			numofnudouble++;
//		}
//	}
//	printf("%d", numofnudouble);
//}