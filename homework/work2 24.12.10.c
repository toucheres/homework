#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char input[1024];
char output[1024];
int boolinput[1024];
char dele[1024];
int cop(const void* a ,const void* b)
{
    return *(char*)a>*(char*)b;
}
int main()
{
    scanf("%s%s",input,dele);
    int leninput = strlen(input);
    int lendele = strlen(dele);
    for(int j=0;j<leninput;j++)
    {

        for(int i=0;i<lendele;i++)
        {
            if(input[j]==dele[i])
            {
                boolinput[j]++;
                break;
            }
        }
    }
    int num=0;
    for(int i =0;i<leninput;i++)
    {
        if(!boolinput[i])
        {
            strncat(output,input+i,1);
            num++;
        }
    }
    if(num)
    {
        qsort(output,strlen(output),sizeof(char),cop);
        printf("%s",output);
        return 0;
    }
    printf("null");
    return 0;
}
// 2: 删除指定字符
// 描述

// 删除一个字符串中的指定字符（字母区分大小写）



// 输入

// 一个原始字符串，一个欲删除的字符集（该字符集元素不重复）



// 输出

// 删除指定字符后的字符串（按ASCII码序升序）。特别地，若删除后的字符串为空，输出null



// 样例1

// 输入	输出
// aacbggc12
// 1aab

// gc2	


// 样例2

// 输入	输出
// abcgagc1222
// null

// abgc12	
