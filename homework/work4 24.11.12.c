#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void min_number(int digits_count[], char* result) {
//    int index = 0;
//
//    // 找到第一个非零数字
//    for (int i = 1; i < 10; i++) {
//        if (digits_count[i] > 0) {
//            result[index++] = '0' + i;  // 添加非零数字到结果
//            digits_count[i]--;            // 非零数字数量减一
//            break;
//        }
//    }
//
//    // 然后添加0
//    if (digits_count[0] > 0) {
//        while (digits_count[0] > 0) {
//            result[index++] = '0'; // 添加0到结果
//            digits_count[0]--;
//        }
//    }
//
//    // 添加剩余的数字
//    for (int i = 0; i < 10; i++) {
//        while (digits_count[i] > 0) {
//            result[index++] = '0' + i; // 添加每个数字
//            digits_count[i]--;
//        }
//    }
//
//    result[index] = '\0'; // 添加字符串结束标志
//}
//
//int main() {
//    int digits_count[10];
//
//    // 输入处理
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &digits_count[i]);
//    }
//
//    char result[51]; // 最多50个数字，加上一个结束符
//    min_number(digits_count, result);
//
//    printf("%s\n", result);
//
//    return 0;
//}

//4: 最小的数
//描述
//给定0 - 9数字各若干个，以任意顺序排列这些数字，使得最后得到的数尽可能小（0 不能做首位）。
//
//输入
//在一行中给出 10 个非负整数，顺序表示数字 0、数字 1、……数字 9 的个数。整数间用一个空格分隔。10 个数字的总个数不超过 50，且至少拥有 1 个非 0 的数字。
//
//输出
//在一行中输出能够组成的最小的数。
//
//样例
//输入
//
//2 2 0 0 0 3 0 0 1 0
//输出
//
//10015558