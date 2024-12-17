#include<stdio.h>
#include<stdlib.h>
int numofst;
typedef struct VALUE_KEY
{
    long long num;
    long long time;
}pair;

pair pairs[100001];

pair* getpairbynum(long long shu)
{
    for(int j=0;j<numofst;j++)
    {
        if(shu==pairs[j].num)
            return &pairs[j];
    }
    return NULL;
}

int comp(const void* a,const void* b)
{
    return ((pair*)a)->num-((pair*)b)->num;
}

int main()
{
    scanf("%d",&numofst);
    int numoftype=0;
    for(int i=0;i<numofst;i++)
    {
        long long tpnum=0;
        scanf("%lld",&tpnum);
        pair* tpp = getpairbynum(tpnum);
        if(tpp)
        {
            tpp->time++;
        }
        else
        {
            pairs[numoftype].num=tpnum;
            pairs[numoftype].time=1;
            numoftype++;
        }
    }
    qsort(pairs,numoftype,sizeof(pair),comp);
    for(int j=0;j<numoftype;j++)
    {
        printf("%lld %lld\n",pairs[j].num,pairs[j].time);
    }
    return 0;
}
// 4: 统计数字
// 描述
// 某次科研调查时得到了n个自然数，每个数均不超过1500000000(1.5×109
// )。已知不相同的数不超过10000个，现在需要统计这些自然数各自出现的次数，并按照自然数从小到大的顺序输出统计结果。

// 输入
// 共n+1行。

// 第一行是整数n，表示自然数的个数；

// 第2至n+1每行一个自然数。

// 输出
// 共m行（m为n个自然数中不相同数的个数），按照自然数从小到大的顺序输出。

// 每行输出2个整数，分别是自然数和该数出现的次数，其间用一个空格隔开。

// 样例
// 输入

// 8
// 2
// 4
// 2
// 4
// 5
// 100
// 2
// 100
// 输出

// 2 3
// 4 2
// 5 1
// 100 2