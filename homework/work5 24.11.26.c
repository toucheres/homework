#include <stdio.h>
#include <stdlib.h>

void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

//int main()
//{
//    int* a = (int*)malloc(sizeof(int) * 1024);
//    int num1;
//    int num2;
//    scanf("%d %d", &num1, &num2);
//    for (int i = 0; i < num1 + num2; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    sort(a, num1 + num2);
//    for (int i = 0; i < num1 + num2; i++)
//    {
//        printf("%d ", a[i]);
//    }
//    return 0;
//}

//5: 合并有序数组
//
//描述
//
//
//
//合并两个有序数组a, b。
//
//
//
//输入
//
//
//
//第一行输入两个数据m, n，分别代表数组a, b的长度，第二行第三行分别输入两个数组a, b, 保证数组有序。
//
//
//
//输出
//
//
//
//将两个数组合并后输出，保证数组仍然有序。输出数据之间用空格隔开。
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
//3 3
//
//1 3 5
//
//2 4 6
//
//1 2 3 4 5 6
//
