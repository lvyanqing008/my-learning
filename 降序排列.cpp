/*��������ײ�ܹ�������һ����ҵ*/

/*ѧ��������������*/
/*ѧ�ţ�31803132*/
/*���䣺304515347@qq.com*/

/*����Ҫ���������10��100���ڵ����������˳�����в����*/

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