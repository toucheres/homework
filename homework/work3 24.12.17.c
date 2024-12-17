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
    return a->price-b->price;
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
    double princesum=0;
    for(int j=0;j<num;j++)
    {
        printf("%s %s %.2lf\n",lies[j].id,lies[j].name,lies[j].price);
        princesum+=lies[j].price;
    }
    printf("%.2lf",princesum);
    
    return 0;
}


// 3: 消费账单（程序设计基础第2次月测编程2）
// 描述
// 为超市设计一个消费账单打印程序。前台柜员扫描商品会获得商品的ID，名称和价格。最后需要按价格由低到高打印消费者的账单，账单的最后给出消费总额。

// 注：如果价格相同，按照输入的先后顺序输出，即价格相同，则按输入的顺序输出。商品价格和消费总额均保留2位小数。商品名称不含空格。

// 输入
// 第一行是一个整数n，表示一共有n组商品；
// 下面一共有n组输入，每组输入包括ID、商品名称和商品价格。

// 输出
// 按价格由低到高输出n组排序后的商品，每组输出单独占一行。最后一行输出消费的总额

// 样例
// 输入

// 3
// 00123 bread 10.00
// 00001 noodle 4.50
// 00032 milk 7.99
// 输出

// 00001 noodle 4.50
// 00032 milk 7.99
// 00123 bread 10.00
// 22.49