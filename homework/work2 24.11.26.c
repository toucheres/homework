#include <stdio.h>
#include <math.h>

int sumfenzi = 0;
int sumfenmu = 1;

int getmaxgongyueshu(int m, int n)
{
    if (n == 0 || m == 0)
    {
        return 1;
    }
    if (m % n == 0)
        return n;
    else
        return getmaxgongyueshu(n, m % n);
}

void huajian()
{
    int dei = getmaxgongyueshu(abs(sumfenmu), abs(sumfenzi));
    sumfenmu /= dei;
    sumfenzi /= dei;
}

int calcau(int fenzi, int fenmu)
{
    if (fenmu == 0)
    {
        printf("error");
        return 1;
    }

    int tpsumfenmu = sumfenmu;
    sumfenmu *= fenmu;
    sumfenzi = sumfenzi * fenmu + tpsumfenmu * fenzi;

    huajian();
    return 0;
}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        int op1 = 0;
//        int op2 = 0;
//        scanf("%d/%d", &op1, &op2);
//        if (calcau(op1, op2))
//        {
//            return 0;
//        }
//    }
//    if (sumfenzi == 0)
//    {
//        printf("0");
//    }
//    else if (sumfenmu == 1)
//    {
//        printf("%d", sumfenzi);
//    }
//    else
//    {
//        printf("%d/%d", sumfenzi, sumfenmu);
//    }
//    return 0;
//}


//2: 分数求和
//描述
//输入
//n
//n 个分数并对他们求和，并用化简。最简形式是指分子分母的最大公约数为1；若最终结果的分母为1，则直接用整数表示。
//
//输入
//每个输入包含一个测试用例，第1行输入
//n
//
//(
//	1
//	≤
//	n
//	≤
//	10
//)
//n(1≤n≤10)；随后一行按格式 a1 / b1 a2 / b2 ... an / bn 的形式给出
//n
//n 个分数，其中a1, a2, b1, b2, …, an, bn都是整数，题目保证所有分子和分母都在16位整型范围内，负数的符号一定出现在分子前面。
//
//输出
//如果输入的分数合法，以最简形式输出计算结果。如果输入的分数无法计算，则输出error。
//
//样例1
//输入
//
//2
//1 / 2 1 / 3
//输出
//
//5 / 6
//样例2
//输入
//
//2
//- 1 / 2 1 / 2
//输出
//
//0