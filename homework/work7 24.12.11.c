#include<stdio.h>
#include<stdlib.h>
typedef struct Student {
       char name[20];
       int id;//学号
       int math;
       int chinese;
       int sum;//总分
}student;

student arr[11];

int comp(const void * s2,const void * s1)
{
    if(((student*)s1)->sum==((student*)s2)->sum)
        return ((student*)s1)->id<((student*)s2)->id;
    return ((student*)s1)->sum>((student*)s2)->sum;
}

int main()
{
    int num=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {       

        scanf("%s%d%d%d",arr[i].name,&arr[i].id,&arr[i].math,&arr[i].chinese);
        arr[i].sum=arr[i].chinese+arr[i].math;
    }

    qsort(arr,num,sizeof(student),comp);
    for(int j=0;j<num;j++)
    {
        printf("%s %d\n",arr[j].name,arr[j].sum);
    }
    return 0;
}
// 7: 统计学生信息
// 描述

// 定义如下学生信息的结构体：

// struct Student {
//        char name[20];
//        int id;//学号
//        int math;
//        int chinese;
//        int sum;//总分
// };

 

// 输入

// 输入n个学生的 姓名 学号 数学分数 语文分数，每个学生输入信息占一行。1<=n<=10

 

// 输出

// 计算每个学生的总分并且记录到sum中，按照sum从大到小打印出每个学生的姓名和总成绩。

// 注意：如果成绩相同则按照学号id从小到大排序。

 

// 样例

// 输入

// 输出

// 3

// Zhangsan   1 90 90

// Lisi   2 90 87

// Wanger   3 90 90

// Zhangsan   180

// Wanger   180

// Lisi   177

