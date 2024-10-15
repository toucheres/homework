//2: 求绝对值最大的数
//描述
//
//
//
//求一组数据中绝对值最大的数输出。
//
//
//
//输入
//
//
//
//每行输入包含一个测试用例，第一个整数m(1 <= m <= 20)，表示随后有m个整数(能够用32位整数表示)，各数之间用空格分隔。
//
//
//
//输出
//
//
//
//每组输出占一行，输出绝对值最大的数。(不考虑最大值对应多个输入的情况)
//
//
//
//样例
//
//
//
//输入
//
//3 0 - 2 1
//
//
//
//输出
//
//- 2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//    int m, num, max_abs = 0, max_num = 0;
//
//    while (scanf("%d", &m) != EOF) {
//        max_abs = 0;
//        max_num = 0;
//
//        for (int i = 0; i < m; i++) {
//            scanf("%d", &num);
//            if (abs(num) > max_abs) {
//                max_abs = abs(num);
//                max_num = num;
//            }
//        }
//
//        printf("%d\n", max_num);
//    }
//
//    return 0;
//}
