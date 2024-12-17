#include<stdio.h>
#include<stdlib.h>
typedef struct LIE
{
    char id[100];
    char name[100];
    double price;
    int loop;
}lie;

lie lies[100];

int comp(const void * ta,const void *tb)
{
    lie* a = ta;
    lie* b = tb;
    if(a->price==b->price)
        return a->loop-b->loop;
    if(b->price > a->price)
        return 1;
    else
        return -1;
}

int main()
{
    int num=0;
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        scanf("%s%s%lf",lies[i].id,lies[i].name,&lies[i].price);
        lies[i].loop=i;
    }
    qsort(lies,num,sizeof(lie),comp);
    for(int j=0;j<num;j++)
    {
        printf("%s %s %.1lf\n",lies[j].id,lies[j].name,lies[j].price);
    }

    
    return 0;
}


// 5: 电影评分（程序设计基础第2次月测编程2）
// 描述
// 电影网站计划加入一个电影评分排序功能，对于输入的电影的ID，名称和评分，需要按电影评分由高到低打印电影信息

// 注：如果评分相同，按照输入的先后顺序输出，即评分相同，则按输入的顺序输出。电影评分保留1位小数。电影名称不含空格。

// 输入
// 第一行是一个整数n，表示一共有n组电影信息；
// 下面一共有n组输入，每组输入包括电影ID、电影名称和电影评分。

// 输出
// 按评分由高到低输出n组排序后的电影信息，每组输出单独占一行。

// 样例
// 输入

// 3
// 00123 Avatar 7.8
// 00001 Joyland 8.6
// 00032 R.M.N 7.7
// 输出

// 00001 Joyland 8.6
// 00123 Avatar 7.8
// 00032 R.M.N 7.7