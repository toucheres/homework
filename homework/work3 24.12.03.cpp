#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//int main() {
//    string input;
//    getline(cin, input);
//
//    string result = "";
//    int count = 0;
//    char prev = '\0';
//
//    for (size_t i = 0; i <= input.length(); ++i) {
//        char current;
//        if (i < input.length()) {
//            current = toupper(input[i]);
//        }
//        else {
//            current = '\0';
//        }
//
//        if (current == prev) {
//            count++;
//        }
//        else {
//            if (prev != '\0') {
//                result += "(";
//                result += prev;
//                result += "-";
//                result += to_string(count);
//                result += ")";
//            }
//            prev = current;
//            count = 1;
//        }
//    }
//
//    cout << result << endl;
//
//    return 0;
//}
//3: 行程长度编码
//描述
//在数据压缩中，一个常用的途径是行程长度压缩。对于一个待压缩的字符串而言，我们可以依次记录每个字符及重复的次数。这种压缩，对于相邻数据重复较多的情况比较有效。 例如，如果待压缩串为AAABBBBCBB，则压缩的结果是(A - 3)(B - 4)(C - 1)(B - 2)。当然，如果相邻字符重复情况较少，则压缩效率就较低。
//
//请根据输入的字符串，计算大小写不敏感压缩后的结果（即所有小写字母均视为相应的大写字母）。
//
//输入
//一行字符串以回车结束，长度大于0，且不超过100，全部由大写或小写字母组成。
//
//输出
//输出为一行，表示压缩结果，形式为：(A - 3)(B - 4)(C - 1)(B - 2)，即每对括号内部分别为字符（都为大写）及重复出现的次数，中间用 - 隔开，不含任何空格。
//
//样例
//输入
//
//aAABBbBCCCaaaaa
//输出
//
//(A - 3)(B - 4)(C - 3)(A - 5)