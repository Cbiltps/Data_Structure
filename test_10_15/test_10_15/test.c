#define _CRT_SECURE_NO_DEPRECATE 1

#define MAX_Q_SIZE 100

#include <stdio.h>

typedef struct
{
    int base[MAX_Q_SIZE];
    int front;
    int rear;
} Sqqueue;

Sqqueue enqueue(Sqqueue Q, int e)/*队列的入队函数*/
{
    if ((Q.rear + 1) % MAX_Q_SIZE == Q.front)
        printf("ERROR\n");
    else
    {
        Q.base[Q.rear] = e;
        Q.rear = (Q.rear + 1) % MAX_Q_SIZE;
    }

    return Q;
}
Sqqueue dequeue(Sqqueue Q, int* e)/*队列的出队函数*/
{
    int x;
    if (Q.front == Q.rear)
        printf("ERROR\n ");
    else
    {
        *e = Q.base[Q.front];
        Q.front = (Q.front + 1) % MAX_Q_SIZE;
    }

    return Q;
}
void display(Sqqueue Q)/*队列元素输出函数*/
{
    int k, m;
    k = Q.front; m = Q.rear;
    
    while (k != m)
    {
        printf("%4d", Q.base[k]);
        k = (k + 1) % MAX_Q_SIZE;
    }
    printf("\n");
}
main()/*主函数*/
{
    Sqqueue Q;
    int i, n, x, y, e;
    Q.rear = Q.front = 0; /*初始化顺序队列，使其成为空队列*/
    
    printf("\nplease input the length:");/*请求输入队列的长度*/
    scanf("%d", &n);
    printf("please input create data:\n  ");/*请求输入队列中各个元素*/
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        Q = enqueue(Q, x);
    }/*调用队列插入函数*/
    printf("the queue is:\n");
    display(Q);/*调用队列元素输出函数*/
    
    printf("please input a insert data:");/*请求输入需要插入的元素*/
    scanf("%d", &y);
    Q = enqueue(Q, y);/*调用队列插入函数*/
    printf("the queue after insert is:\n");/*提示显示执行入队操作后的队列*/
    display(Q);/*调用队列元素输出函数*/
    
    Q = dequeue(Q, &e);/*调用队列删除函数*/
    printf("the delete data is:%d\n", e); /*显示被删的队首元素值*/
    printf("the queue after delete is:\n");/*提示显示执行出队操作后的队列*/
    display(Q);/*调用队列元素输出函数*/
}
