#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
char input[1024];
char output[1024];
//char input[1024];
int num;

int islegeal(char op)
{
    if(isdigit(op)||isalpha(op))
        return 1;
    return 0;
}

int main()
{
    fgets(input,1024,stdin);
    scanf("%d",&num);
    int i=0;
    for(int j =0;j<strlen(input);)
    {
        if(!islegeal(input[j]))
        {
            j++;
            continue;
        }
        input[i]=input[j];
        i++;
        j++;
    }
    input[i] = '\0';
    for(int j=0;j<i;j++)
    {
        input[j]=toupper(input[j]);
    }
    int yu = i%num;
    for(int tp = 0;tp<i;)
    {
        if(tp==0)
        {
            strncat(output,input,yu);
            tp+=yu;
        }
        if(tp!=0)
            strncat(output,"-",num);
        strncat(output,input+tp,num);
        tp+=num;        
    }
    printf("%s",output);
    return 0;
}
// 4: 密钥格式化（程序设计基础第10周编程2）
// 描述
// 有一个非空的密钥字符串 S ，只包含字母，数字以及 ‘-’（破折号）。其中， N 个 ‘-’ 将字符串分成了 N+1 组。

// 给你一个正整数 K，请你只保留S中的字母和数字，重新格式化字符串，使每个分组恰好包含 K 个字符。特别地，第一个分组包含的字符个数必须小于等于 K，但至少要包含 1 个字符。两个分组之间需要用 ‘-’（破折号）隔开，并且将所有的小写字母转换为大写字母。

// 用给定的非空字符串 S 和正整数 K，按照上面描述的规则进行格式化。

// 输入
// 用给定的非空字符串 S 和正整数 K

// 输出
// 按照上面描述的规则进行格式化

// 样例
// 输入1

// 5F3Z-2e-9-w
// 4
// 输出1

// 5F3Z-2E9W
// 输入2

// 2-5g-3-J
// 2
// 输出2

// 2-5G-3J