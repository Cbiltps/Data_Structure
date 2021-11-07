#define _CRT_SECURE_NO_DEPRECATE 1

//#define MAX 20
//
//#include <stdio.h>

/*
数组实现斐波那契数列
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
//		printf("%d%c", fib[i], (i % 5) == 4 ? '\n' : '\t');// \t是水平制表符（四个空格）
//}

#define MAX 5

#include <stdio.h>

/*
试通过循环，按行顺序为5*5的二维数组A赋1-25的自然数，然后输出该数组的左下半三角
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