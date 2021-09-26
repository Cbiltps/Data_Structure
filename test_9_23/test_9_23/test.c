#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>//conio.h���ļ�������ͨ������̨���������������������ĺ���

typedef int ElemType;

typedef struct LNode
{
    ElemType data;//��������      
    struct LNode* next;//ָ������      
}LNode;//���ṹ����

LNode* L;//�����ʲô��

//������������
LNode* creat_L()
{
    LNode* h, * p, * s;
    ElemType x;
    h = (LNode*)malloc(sizeof(LNode));//����ͷ��� 
    h->next = NULL;
    p = h;
    printf("��������Ԫ�أ�����-111ʱ�������룩\n");
    scanf("%d", &x);//�����һ������Ԫ�� 
    while (x != -111)//����-111������ѭ��  
    {
        s = (LNode*)malloc(sizeof(LNode));//�����½��
        s->data = x;
        s->next = NULL;
        p->next = s;
        p = s;
        scanf("%d", &x);//������һ������
    }
    return(h);
}//creat_L

//����������е�����Ԫ��
void out_L(LNode* L)
{
    LNode* p; 
    p = L->next;
    printf("�������е������У�");
    while (p != NULL) 
    {
        printf("%d ", p->data); 
        p = p->next;//%5d���5�ֶο�ȵ�ʮ��������
    } 
    printf("\n");
    char ch = getchar();
}//out_link 

//  ����ֵΪ e ��Ԫ��, ��������λ��   
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

// ɾ����i��λ�õ�Ԫ��, ��������ֵ  
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

//  ��iλ�ò���Ԫ��e  
void insert_L(LNode* L, int i, ElemType e)
{
    LNode* s, * p;  
    int j = 0;
    p = L;// �ҵ�i-1�����  
    while (p != NULL && j < i - 1) 
    { 
        p = p->next; 
        j++; 
    }
    if (p == NULL || j > i - 1) 
        printf("�����i������Χ��\n");
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
    int k = 0;//����ѡ��ֵ
    int i = 0;//������¼λ��

    do
    {
        printf("\n");
        printf("      ��������������� \n");
        printf("================================\n");
        printf("     1. ������������ \n");
        printf("     2. ��iλ�ò���Ԫ��e\n");
        printf("     3. ɾ����i��Ԫ�أ�������ֵ\n");
        printf("     4. ����ֵΪe��Ԫ��\n");
        printf("     5. ������������\n");
        printf("================================\n");
        printf("      ����������ѡ��:       \n");
        
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
                printf("������ i = �� e = ��\n");
                scanf("%d %d", &i, &e);
                insert_L(L, i, e);
                out_L(L);
            }
            break;

            case 3: 
            {
                printf("������i��ֵ��");
                scanf("%d", &i);
                x = delete_L(L, i);
                if (x != -1)
                {
                    printf("ɾ����ֵΪ��%d\n", x);
                }
                out_L(L);
            }
            break;
            
            case 4:
            {
                printf("������e��ֵ��");
                scanf("%d", &e);
                int loc = locat_L(L, e);
                out_L(L);
                if (loc == -1)
                    printf("δ�ҵ���Ԫ�أ�\n");
                else
                    printf("���ҵ���Ԫ��λ����%d\n", loc);
            }
            break;
        }//switch  
    } while (k >= 1 && k < 5);
    
    char ch = getchar();

    return 0;
}