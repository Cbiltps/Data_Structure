#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>//conio.h库文件定义了通过控制台进行数据输入和数据输出的函数

typedef int ElemType;

typedef struct LNode
{
    ElemType data;//数据子域      
    struct LNode* next;//指针子域      
}LNode;//结点结构类型

LNode* L;//这个是什么鬼？

//建立线性链表
LNode* creat_L()
{
    LNode* h, * p, * s;
    ElemType x;
    h = (LNode*)malloc(sizeof(LNode));//分配头结点 
    h->next = NULL;
    p = h;
    printf("输入数据元素（输入-111时结束输入）\n");
    scanf("%d", &x);//输入第一个数据元素 
    while (x != -111)//输入-111，结束循环  
    {
        s = (LNode*)malloc(sizeof(LNode));//分配新结点
        s->data = x;
        s->next = NULL;
        p->next = s;
        p = s;
        scanf("%d", &x);//输入下一个数据
    }
    return(h);
}//creat_L

//输出单链表中的数据元素
void out_L(LNode* L)
{
    LNode* p; 
    p = L->next;
    printf("单链表中的数据有：");
    while (p != NULL) 
    {
        printf("%d ", p->data); 
        p = p->next;//%5d输出5字段宽度的十进制整数
    } 
    printf("\n");
    char ch = getchar();
}//out_link 

//  查找值为 e 的元素, 返回它的位置   
int locat_L(LNode* L, ElemType e)
{
    LNode* p;
    int j = 1;
    p = L->next;
    while (p != NULL && p->data != e)
    { 
        p = p->next;
        j++;
    }
    if (p != NULL)
        return(j);
    else
        return(-1);
} //locat_L 

// 删除第i个位置的元素, 返回它的值  
ElemType delete_L(LNode* L, int i)
{
    LNode* p, * s;
    ElemType x;
    int j = 0;
    p = L;
    while (p->next != NULL && j < i - 1)
    {
        p = p->next;
        j++;
    }
    s = p->next;
    x = s->data;
    p->next = s->next;
    free(s);
    return x;
}

//  在i位置插入元素e  
void insert_L(LNode* L, int i, ElemType e)
{
    LNode* s, * p;  
    int j = 0;
    p = L;// 找第i-1个结点  
    while (p != NULL && j < i - 1) 
    { 
        p = p->next; 
        j++; 
    }
    if (p == NULL || j > i - 1) 
        printf("输入的i超出范围！\n");
    else 
    {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = e;
        s->next = p->next;
        p->next = s;
    }
} // insert_L 

int main()
{
    ElemType e, x;
    int k = 0;//输入选项值
    int i = 0;//用来记录位置

    do
    {
        printf("\n");
        printf("      线性链表基本操作 \n");
        printf("================================\n");
        printf("     1. 建立线性链表 \n");
        printf("     2. 在i位置插入元素e\n");
        printf("     3. 删除第i个元素，返回其值\n");
        printf("     4. 查找值为e的元素\n");
        printf("     5. 结束程序运行\n");
        printf("================================\n");
        printf("      请输入您的选择:       \n");
        
        scanf("%d", &k);
        switch (k)
        {
            case 1:
            {
                L = creat_L();
                out_L(L);
            }
            break;

            case 2:
            {
                printf("请输入 i = ？ e = ？\n");
                scanf("%d %d", &i, &e);
                insert_L(L, i, e);
                out_L(L);
            }
            break;

            case 3: 
            {
                printf("请输入i的值：");
                scanf("%d", &i);
                x = delete_L(L, i);
                if (x != -1)
                {
                    printf("删除的值为：%d\n", x);
                }
                out_L(L);
            }
            break;
            
            case 4:
            {
                printf("请输入e的值：");
                scanf("%d", &e);
                int loc = locat_L(L, e);
                out_L(L);
                if (loc == -1)
                    printf("未找到此元素！\n");
                else
                    printf("已找到，元素位置是%d\n", loc);
            }
            break;
        }//switch  
    } while (k >= 1 && k < 5);
    
    char ch = getchar();

    return 0;
}