#define _CRT_SECURE_NO_DEPRECATE 1

//#define MAX 20
//
//#include <stdio.h>

/*
����ʵ��쳲���������
*/

//void main()
//{
//	int fib[MAX];
//	fib[0] = 0;
//	fib[1] = 1;
//
//	int i;
//	for (i = 2; i < MAX; i++)
//	{
//		fib[i] = fib[i - 1] + fib[i - 2];
//	}
//
//	for (i = 0; i < MAX; i++)
//		printf("%d%c", fib[i], (i % 5) == 4 ? '\n' : '\t');// \t��ˮƽ�Ʊ�����ĸ��ո�
//}

#define MAX 5

#include <stdio.h>

/*
��ͨ��ѭ��������˳��Ϊ5*5�Ķ�ά����A��1-25����Ȼ����Ȼ���������������°�����
*/

void main()
{
    int a[MAX][MAX];

    int i, j, n = 1;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            a[i][j] = n++;
        }
    }

    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d  ", a[i][j]);
        }
    }

    printf("\n");
}