#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // 用于使用abs函数
//
//int main() {
//    int n1, n2;
//
//    // 读取第一个数组
//    scanf("%d", &n1);
//    int arr1[n1];
//    for (int i = 0; i < n1; i++) {
//        scanf("%d", &arr1[i]);
//    }
//
//    // 读取第二个数组
//    scanf("%d", &n2);
//    int arr2[n2];
//    for (int i = 0; i < n2; i++) {
//        scanf("%d", &arr2[i]);
//    }
//
//    int maxDistance = 0;
//
//    // 计算两个数组间最大的绝对值差
//    for (int i = 0; i < n1; i++) {
//        for (int j = 0; j < n2; j++) {
//            int distance = abs(arr1[i] - arr2[j]); // 计算绝对值差
//            if (distance > maxDistance) {
//                maxDistance = distance; // 更新最大距离
//            }
//        }
//    }
//
//    // 输出结果
//    printf("%d\n", maxDistance);
//    return 0;
//}

//
//1: 数组的距离
//描述
//有两个数组a和b，从a中取一个数，从b中取一个数，计算差的绝对值。
//
//把所有绝对值中最大的值作为两个数组的距离。
//
//输入
//每个数组占1行，第1个数是数组元素的个数n(n不超过10)，后面是n个整数。
//
//输出
//输出两个数组的距离。
//
//样例
//输入
//
//3 1 2 3
//4 1 2 3 4
//输出
//
//3