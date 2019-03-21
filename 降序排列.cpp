/*工程软件底层架构技术第一次作业*/

/*学生姓名：吕彦卿*/
/*学号：31803132*/
/*邮箱：304515347@qq.com*/

/*程序要求：随机生成10个100以内的随机数，按顺序排列并输出*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[10];
    int i, j, t;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
        a[i] = rand() % 101;
    for (i = 0; i < 9; i++)
    for (j = i + 1; j < 10; j++)
    if (a[i]<a[j])
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    for (i = 0; i < 10; i++)
        printf( "%d" , a[i]);
}