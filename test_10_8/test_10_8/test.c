#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

#define MAX_SIZE 100

typedef struct
{
    int base[MAX_SIZE];
    int top;    /*top指示存储栈顶元素的下一存储单元*/
}Sqstack;   /*顺序栈的类型定义*/

Sqstack Push(Sqstack S, int e)  /*顺序栈的入栈操作函数*/
{
    if (S.top >= MAX_SIZE)
        printf("Stack is Overflow\n");
    else
        S.base[S.top++] = e;

    return S;
}

Sqstack Pop(Sqstack S, int* e) /*顺序栈的出栈操作函数*/
{
    if (S.top == 0)
        printf("Stack is Empty\n");
    else
        *e = S.base[--S.top];

    return S;
}

void Stack_display(Sqstack S) /*顺序栈的输出函数*/
{
    int i;
    for (i = 0; i < S.top; i++)   /*依次输出栈中各元素的值，栈顶元素在表的尾部*/
        printf("%4d", S.base[i]);
    printf("\n");
}

main()
{
    Sqstack S;
    int i, j, n, x, e;

    printf("please input the length:");/*请求输入顺序栈中元素个数*/
    scanf("%d", &n);
    printf("please input the Value:\n  ");/*请求输入顺序栈中各个元素值*/
    for (i = 0; i < n; i++)
        scanf("%d", &S.base[i]);
    S.top = n;
    printf("the stack is:\n");
    Stack_display(S);

    printf("please input the insert node:");/*请求输入需要入栈的新元素*/
    scanf("%d", &x);
    S = Push(S, x);
    printf("the stack after push is:\n");/*提示输出入栈后栈中各个元素值*/
    Stack_display(S);   /*调用顺序栈的输出函数*/

    S = Pop(S, &e);
    printf("the pop value is:%d\n", e);  /*输出出栈元素的值*/
    printf("the stack after pop is:\n");/*提示输出出栈后栈中各个元素值*/
    Stack_display(S);   /*调用顺序栈的输出函数*/
}
