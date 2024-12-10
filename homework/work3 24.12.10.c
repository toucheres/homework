#include<stdio.h>
#include<string.h>
char input[1024];
char c;
int main()
{
    fgets(input,1024,stdin);
    scanf("%c",&c);
    char* p = input + strlen(input)-1;
    
    for(int loc = 0;loc<strlen(input)-1;loc++)
    {
        if(*(p-loc)==c)
        {
            printf("%d",strlen(input)-loc);
            return 0;
        }
    }
    printf("-1");
    return 0;
}


// 3: 实现strrchr函数（程序设计基础第2次月测编程1）
// 描述
// C语⾔中有⼀个函数strrchr。我们编写⼀个类似功能的函数mystrrchr

// int mystrrchr(char *str, char c)
// 在main函数中调⽤⾃⼰编写的mystrrchr()函数，实现查找str中最后出现c的位置，如有有，则返回出现位置序号(序号从1开始），否则返回-1

// 输入
// 分别输⼊字符串str与字符c，分别占⼀⾏。字符串⻓度不超过500个字符

// 输出
// 字符c最后出现的位置序号或-1

// 样例
// 输入

// hello world
// l
// 输出

// 10