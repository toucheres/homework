#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int countTrailingZerosInFactorial(int n) {
	int count = 0;
	while (n >= 5) {
		n /= 5;
		count += n;
	}
	return count;
}
//
//int main() {
//	int line = 0;
//	scanf("%d", &line);
//	while (line--) {
//		int n;
//		scanf("%d", &n);
//		int result = countTrailingZerosInFactorial(n);
//		printf("%d\n", result); // 输出100!末尾零的个数}
//	}
//	return 0;
//}


//7: 100!的末尾有多少个零？
//描述
//
//思考100!的末尾有多少个零？
//
//
//
//提示1：直观上会先求出100！的值，然后计算其末尾有多少个零。事实上，由于计算机所能表示的整数范围有限，这种方式是不可行的。
//
//
//提示2：观察一个数末尾产生零的条件。不难看出：一个整数末尾每增加一个零，即相当于乘了一个10，而10 = 5 * 2。
//
//
//
//输入
//
//无。
//
//
//
//输出
//
//100!末尾的零的个数。
//
//
//
//样例
//
//输入                                  输出
//
//100！末尾0的个数
//
