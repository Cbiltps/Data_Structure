#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

#define MAX_SIZE 100

typedef struct
{
    int base[MAX_SIZE];
    int top;    /*topָʾ�洢ջ��Ԫ�ص���һ�洢��Ԫ*/
}Sqstack;   /*˳��ջ�����Ͷ���*/

Sqstack Push(Sqstack S, int e)  /*˳��ջ����ջ��������*/
{
    if (S.top >= MAX_SIZE)
        printf("Stack is Overflow\n");
    else
        S.base[S.top++] = e;

    return S;
}

Sqstack Pop(Sqstack S, int* e) /*˳��ջ�ĳ�ջ��������*/
{
    if (S.top == 0)
        printf("Stack is Empty\n");
    else
        *e = S.base[--S.top];

    return S;
}

void Stack_display(Sqstack S) /*˳��ջ���������*/
{
    int i;
    for (i = 0; i < S.top; i++)   /*�������ջ�и�Ԫ�ص�ֵ��ջ��Ԫ���ڱ��β��*/
        printf("%4d", S.base[i]);
    printf("\n");
}

main()
{
    Sqstack S;
    int i, j, n, x, e;

    printf("please input the length:");/*��������˳��ջ��Ԫ�ظ���*/
    scanf("%d", &n);
    printf("please input the Value:\n  ");/*��������˳��ջ�и���Ԫ��ֵ*/
    for (i = 0; i < n; i++)
        scanf("%d", &S.base[i]);
    S.top = n;
    printf("the stack is:\n");
    Stack_display(S);

    printf("please input the insert node:");/*����������Ҫ��ջ����Ԫ��*/
    scanf("%d", &x);
    S = Push(S, x);
    printf("the stack after push is:\n");/*��ʾ�����ջ��ջ�и���Ԫ��ֵ*/
    Stack_display(S);   /*����˳��ջ���������*/

    S = Pop(S, &e);
    printf("the pop value is:%d\n", e);  /*�����ջԪ�ص�ֵ*/
    printf("the stack after pop is:\n");/*��ʾ�����ջ��ջ�и���Ԫ��ֵ*/
    Stack_display(S);   /*����˳��ջ���������*/
}
