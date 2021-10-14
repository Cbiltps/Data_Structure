#define _CRT_SECURE_NO_DEPRECATE 1

#define MAX_Q_SIZE 100

#include <stdio.h>

typedef struct
{
    int base[MAX_Q_SIZE];
    int front;
    int rear;
} Sqqueue;

Sqqueue enqueue(Sqqueue Q, int e)/*���е���Ӻ���*/
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
Sqqueue dequeue(Sqqueue Q, int* e)/*���еĳ��Ӻ���*/
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
void display(Sqqueue Q)/*����Ԫ���������*/
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
main()/*������*/
{
    Sqqueue Q;
    int i, n, x, y, e;
    Q.rear = Q.front = 0; /*��ʼ��˳����У�ʹ���Ϊ�ն���*/
    
    printf("\nplease input the length:");/*����������еĳ���*/
    scanf("%d", &n);
    printf("please input create data:\n  ");/*������������и���Ԫ��*/
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        Q = enqueue(Q, x);
    }/*���ö��в��뺯��*/
    printf("the queue is:\n");
    display(Q);/*���ö���Ԫ���������*/
    
    printf("please input a insert data:");/*����������Ҫ�����Ԫ��*/
    scanf("%d", &y);
    Q = enqueue(Q, y);/*���ö��в��뺯��*/
    printf("the queue after insert is:\n");/*��ʾ��ʾִ����Ӳ�����Ķ���*/
    display(Q);/*���ö���Ԫ���������*/
    
    Q = dequeue(Q, &e);/*���ö���ɾ������*/
    printf("the delete data is:%d\n", e); /*��ʾ��ɾ�Ķ���Ԫ��ֵ*/
    printf("the queue after delete is:\n");/*��ʾ��ʾִ�г��Ӳ�����Ķ���*/
    display(Q);/*���ö���Ԫ���������*/
}
